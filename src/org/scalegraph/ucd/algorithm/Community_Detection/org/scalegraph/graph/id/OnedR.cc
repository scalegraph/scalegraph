/*************************************************/
/* START of OnedR */
#include <org/scalegraph/graph/id/OnedR.h>


//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::id::OnedR* org::scalegraph::graph::id::OnedR::org__scalegraph__graph__id__OnedR____this__org__scalegraph__graph__id__OnedR(
  ) {
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedR::_constructor() {
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::graph::id::OnedR* org::scalegraph::graph::id::OnedR::_make(
  ) {
    org::scalegraph::graph::id::OnedR* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::id::OnedR>(), 0, sizeof(org::scalegraph::graph::id::OnedR))) org::scalegraph::graph::id::OnedR();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::graph::id::OnedR::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::id::OnedR::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::graph::id::OnedR::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::graph::id::OnedR::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::id::OnedR* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::id::OnedR>(), 0, sizeof(org::scalegraph::graph::id::OnedR))) org::scalegraph::graph::id::OnedR();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::graph::id::OnedR::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::graph::id::OnedR::rtt;
void org::scalegraph::graph::id::OnedR::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.graph.id.OnedR",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of OnedR */
/*************************************************/
/*************************************************/
/* START of OnedR$VtoD */
#include <org/scalegraph/graph/id/OnedR__VtoD.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__VtoD_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedR__VtoD> {
public:
    static x10::lang::Any::itable<OnedR__VtoD_ibox0 > itable;
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
x10::lang::Any::itable<OnedR__VtoD_ibox0 >  OnedR__VtoD_ibox0::itable(&OnedR__VtoD_ibox0::equals, &OnedR__VtoD_ibox0::hashCode, &OnedR__VtoD_ibox0::toString, &OnedR__VtoD_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedR__VtoD >  org::scalegraph::graph::id::OnedR__VtoD::_itable_0(&org::scalegraph::graph::id::OnedR__VtoD::equals, &org::scalegraph::graph::id::OnedR__VtoD::hashCode, &org::scalegraph::graph::id::OnedR__VtoD::toString, &org::scalegraph::graph::id::OnedR__VtoD::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedR__VtoD::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__VtoD::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__VtoD>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedR__VtoD::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__VtoD_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__VtoD>())};

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedR__VtoD::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.AssignPropertyCall_c
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgr) = ids->FMGL(lgr);
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(rmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                      FMGL(lgr)))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::OnedR__VtoD org::scalegraph::graph::id::OnedR__VtoD::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::OnedR__VtoD this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__VtoD::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__VtoD::toString(
  ) {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedR.VtoD:"), x10aux::makeStringLit(" lgr=")), (*this)->
                                                                                                                                                                                                                                                                               FMGL(lgr)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                                                                              FMGL(lgl)), x10aux::makeStringLit(" rmask=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                               FMGL(rmask));
    
}

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedR__VtoD::hashCode(
  ) {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgr)))));
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(rmask)))));
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__VtoD::equals(
  x10::lang::Any* other) {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__VtoD>(other)))
    {
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedR__VtoD::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedR__VtoD>(other));
    
}

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__VtoD::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__VtoD>(other)))
    {
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedR__VtoD::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedR__VtoD>(other));
    
}

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedR__VtoD::_serialize(org::scalegraph::graph::id::OnedR__VtoD this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgr));
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(rmask));
    
}

void org::scalegraph::graph::id::OnedR__VtoD::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgr) = buf.read<x10_int>();
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(rmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedR__VtoD::rtt;
void org::scalegraph::graph::id::OnedR__VtoD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedR.VtoD",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedR$VtoD */
/*************************************************/
/*************************************************/
/* START of OnedR$VtoS */
#include <org/scalegraph/graph/id/OnedR__VtoS.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__VtoS_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedR__VtoS> {
public:
    static x10::lang::Any::itable<OnedR__VtoS_ibox0 > itable;
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
x10::lang::Any::itable<OnedR__VtoS_ibox0 >  OnedR__VtoS_ibox0::itable(&OnedR__VtoS_ibox0::equals, &OnedR__VtoS_ibox0::hashCode, &OnedR__VtoS_ibox0::toString, &OnedR__VtoS_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedR__VtoS >  org::scalegraph::graph::id::OnedR__VtoS::_itable_0(&org::scalegraph::graph::id::OnedR__VtoS::equals, &org::scalegraph::graph::id::OnedR__VtoS::hashCode, &org::scalegraph::graph::id::OnedR__VtoS::toString, &org::scalegraph::graph::id::OnedR__VtoS::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedR__VtoS::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__VtoS::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__VtoS>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedR__VtoS::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__VtoS_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__VtoS>())};

//#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedR__VtoS::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.AssignPropertyCall_c
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgr) = ids->FMGL(lgr);
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(rmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                      FMGL(lgr)))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::OnedR__VtoS org::scalegraph::graph::id::OnedR__VtoS::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::OnedR__VtoS this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__VtoS::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__VtoS::toString(
  ) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedR.VtoS:"), x10aux::makeStringLit(" lgr=")), (*this)->
                                                                                                                                                                                                                           FMGL(lgr)), x10aux::makeStringLit(" rmask=")), (*this)->
                                                                                                                                                                                                                                                                            FMGL(rmask));
    
}

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedR__VtoS::hashCode(
  ) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgr)))));
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(rmask)))));
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__VtoS::equals(
  x10::lang::Any* other) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__VtoS>(other)))
    {
        
        //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedR__VtoS::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedR__VtoS>(other));
    
}

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__VtoS::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__VtoS>(other)))
    {
        
        //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedR__VtoS::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedR__VtoS>(other));
    
}

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedR__VtoS::_serialize(org::scalegraph::graph::id::OnedR__VtoS this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgr));
    buf.write(this_->FMGL(rmask));
    
}

void org::scalegraph::graph::id::OnedR__VtoS::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgr) = buf.read<x10_int>();
    FMGL(rmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedR__VtoS::rtt;
void org::scalegraph::graph::id::OnedR__VtoS::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedR.VtoS",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedR$VtoS */
/*************************************************/
/*************************************************/
/* START of OnedR$DtoV */
#include <org/scalegraph/graph/id/OnedR__DtoV.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__DtoV_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedR__DtoV> {
public:
    static x10::lang::Any::itable<OnedR__DtoV_ibox0 > itable;
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
x10::lang::Any::itable<OnedR__DtoV_ibox0 >  OnedR__DtoV_ibox0::itable(&OnedR__DtoV_ibox0::equals, &OnedR__DtoV_ibox0::hashCode, &OnedR__DtoV_ibox0::toString, &OnedR__DtoV_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedR__DtoV >  org::scalegraph::graph::id::OnedR__DtoV::_itable_0(&org::scalegraph::graph::id::OnedR__DtoV::equals, &org::scalegraph::graph::id::OnedR__DtoV::hashCode, &org::scalegraph::graph::id::OnedR__DtoV::toString, &org::scalegraph::graph::id::OnedR__DtoV::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedR__DtoV::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__DtoV::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__DtoV>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedR__DtoV::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__DtoV_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__DtoV>())};

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedR__DtoV::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.AssignPropertyCall_c
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgr) = ids->FMGL(lgr);
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                      FMGL(lgl)))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::OnedR__DtoV org::scalegraph::graph::id::OnedR__DtoV::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::OnedR__DtoV this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__DtoV::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__DtoV::toString(
  ) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedR.DtoV:"), x10aux::makeStringLit(" lgr=")), (*this)->
                                                                                                                                                                                                                                                                               FMGL(lgr)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                                                                              FMGL(lgl)), x10aux::makeStringLit(" lmask=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                               FMGL(lmask));
    
}

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedR__DtoV::hashCode(
  ) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgr)))));
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lmask)))));
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__DtoV::equals(
  x10::lang::Any* other) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__DtoV>(other)))
    {
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedR__DtoV::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedR__DtoV>(other));
    
}

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__DtoV::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__DtoV>(other)))
    {
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedR__DtoV::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedR__DtoV>(other));
    
}

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedR__DtoV::_serialize(org::scalegraph::graph::id::OnedR__DtoV this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgr));
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(lmask));
    
}

void org::scalegraph::graph::id::OnedR__DtoV::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgr) = buf.read<x10_int>();
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(lmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedR__DtoV::rtt;
void org::scalegraph::graph::id::OnedR__DtoV::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedR.DtoV",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedR$DtoV */
/*************************************************/
/*************************************************/
/* START of OnedR$DtoS */
#include <org/scalegraph/graph/id/OnedR__DtoS.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__DtoS_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedR__DtoS> {
public:
    static x10::lang::Any::itable<OnedR__DtoS_ibox0 > itable;
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
x10::lang::Any::itable<OnedR__DtoS_ibox0 >  OnedR__DtoS_ibox0::itable(&OnedR__DtoS_ibox0::equals, &OnedR__DtoS_ibox0::hashCode, &OnedR__DtoS_ibox0::toString, &OnedR__DtoS_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedR__DtoS >  org::scalegraph::graph::id::OnedR__DtoS::_itable_0(&org::scalegraph::graph::id::OnedR__DtoS::equals, &org::scalegraph::graph::id::OnedR__DtoS::hashCode, &org::scalegraph::graph::id::OnedR__DtoS::toString, &org::scalegraph::graph::id::OnedR__DtoS::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedR__DtoS::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__DtoS::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__DtoS>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedR__DtoS::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__DtoS_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__DtoS>())};

//#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedR__DtoS::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.AssignPropertyCall_c
    
    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int lgl = ids->FMGL(lgl);
    
    //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (lgl))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::OnedR__DtoS org::scalegraph::graph::id::OnedR__DtoS::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::OnedR__DtoS this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__DtoS::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__DtoS::toString(
  ) {
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedR.DtoS:"), x10aux::makeStringLit(" lmask=")), (*this)->
                                                                                                                                                                         FMGL(lmask));
    
}

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedR__DtoS::hashCode(
  ) {
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lmask)))));
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__DtoS::equals(
  x10::lang::Any* other) {
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__DtoS>(other)))
    {
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoS this104045 =
          (*this);
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoS other104044 =
          x10aux::class_cast<org::scalegraph::graph::id::OnedR__DtoS>(other);
        (x10aux::struct_equals(this104045->FMGL(lmask), other104044->
                                                          FMGL(lmask)));
    }))
    ;
    
}

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__DtoS::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__DtoS>(other)))
    {
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoS this104047 =
          (*this);
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__DtoS other104046 =
          x10aux::class_cast<org::scalegraph::graph::id::OnedR__DtoS>(other);
        (x10aux::struct_equals(this104047->FMGL(lmask), other104046->
                                                          FMGL(lmask)));
    }))
    ;
    
}

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedR__DtoS::_serialize(org::scalegraph::graph::id::OnedR__DtoS this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lmask));
    
}

void org::scalegraph::graph::id::OnedR__DtoS::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedR__DtoS::rtt;
void org::scalegraph::graph::id::OnedR__DtoS::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedR.DtoS",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedR$DtoS */
/*************************************************/
/*************************************************/
/* START of OnedR$StoV */
#include <org/scalegraph/graph/id/OnedR__StoV.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__StoV_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedR__StoV> {
public:
    static x10::lang::Any::itable<OnedR__StoV_ibox0 > itable;
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
x10::lang::Any::itable<OnedR__StoV_ibox0 >  OnedR__StoV_ibox0::itable(&OnedR__StoV_ibox0::equals, &OnedR__StoV_ibox0::hashCode, &OnedR__StoV_ibox0::toString, &OnedR__StoV_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedR__StoV >  org::scalegraph::graph::id::OnedR__StoV::_itable_0(&org::scalegraph::graph::id::OnedR__StoV::equals, &org::scalegraph::graph::id::OnedR__StoV::hashCode, &org::scalegraph::graph::id::OnedR__StoV::toString, &org::scalegraph::graph::id::OnedR__StoV::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedR__StoV::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__StoV::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__StoV>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedR__StoV::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__StoV_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__StoV>())};

//#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedR__StoV::_constructor(org::scalegraph::graph::id::IdStruct ids,
                                                           x10_int r) {
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.AssignPropertyCall_c
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(r) = r;
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgr) = ids->FMGL(lgr);
}
org::scalegraph::graph::id::OnedR__StoV org::scalegraph::graph::id::OnedR__StoV::_make(
  org::scalegraph::graph::id::IdStruct ids, x10_int r) {
    org::scalegraph::graph::id::OnedR__StoV this_; 
    this_->_constructor(ids, r);
    return this_;
}



//#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__StoV::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__StoV::toString(
  ) {
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedR.StoV:"), x10aux::makeStringLit(" r=")), (*this)->
                                                                                                                                                                                                                         FMGL(r)), x10aux::makeStringLit(" lgr=")), (*this)->
                                                                                                                                                                                                                                                                      FMGL(lgr));
    
}

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedR__StoV::hashCode(
  ) {
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(r)))));
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgr)))));
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__StoV::equals(
  x10::lang::Any* other) {
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__StoV>(other)))
    {
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedR__StoV::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedR__StoV>(other));
    
}

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__StoV::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__StoV>(other)))
    {
        
        //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedR__StoV::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedR__StoV>(other));
    
}

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedR__StoV::_serialize(org::scalegraph::graph::id::OnedR__StoV this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(r));
    buf.write(this_->FMGL(lgr));
    
}

void org::scalegraph::graph::id::OnedR__StoV::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(r) = buf.read<x10_int>();
    FMGL(lgr) = buf.read<x10_int>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedR__StoV::rtt;
void org::scalegraph::graph::id::OnedR__StoV::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedR.StoV",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedR$StoV */
/*************************************************/
/*************************************************/
/* START of OnedR$StoD */
#include <org/scalegraph/graph/id/OnedR__StoD.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedR__StoD_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedR__StoD> {
public:
    static x10::lang::Any::itable<OnedR__StoD_ibox0 > itable;
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
x10::lang::Any::itable<OnedR__StoD_ibox0 >  OnedR__StoD_ibox0::itable(&OnedR__StoD_ibox0::equals, &OnedR__StoD_ibox0::hashCode, &OnedR__StoD_ibox0::toString, &OnedR__StoD_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedR__StoD >  org::scalegraph::graph::id::OnedR__StoD::_itable_0(&org::scalegraph::graph::id::OnedR__StoD::equals, &org::scalegraph::graph::id::OnedR__StoD::hashCode, &org::scalegraph::graph::id::OnedR__StoD::toString, &org::scalegraph::graph::id::OnedR__StoD::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedR__StoD::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__StoD::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__StoD>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedR__StoD::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedR__StoD_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedR__StoD>())};

//#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10FieldDecl_c

//#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedR__StoD::_constructor(org::scalegraph::graph::id::IdStruct ids,
                                                           x10_int r) {
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.AssignPropertyCall_c
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int lgl = ids->FMGL(lgl);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(rshifted) = ((x10_long) ((((x10_long) (r))) << (0x3f & (lgl))));
}
org::scalegraph::graph::id::OnedR__StoD org::scalegraph::graph::id::OnedR__StoD::_make(
  org::scalegraph::graph::id::IdStruct ids, x10_int r) {
    org::scalegraph::graph::id::OnedR__StoD this_; 
    this_->_constructor(ids, r);
    return this_;
}



//#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__StoD::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedR__StoD::toString(
  ) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedR.StoD:"), x10aux::makeStringLit(" rshifted=")), (*this)->
                                                                                                                                                                            FMGL(rshifted));
    
}

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedR__StoD::hashCode(
  ) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(rshifted)))));
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__StoD::equals(
  x10::lang::Any* other) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__StoD>(other)))
    {
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD this104049 =
          (*this);
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD other104048 =
          x10aux::class_cast<org::scalegraph::graph::id::OnedR__StoD>(other);
        (x10aux::struct_equals(this104049->FMGL(rshifted),
                               other104048->FMGL(rshifted)));
    }))
    ;
    
}

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedR__StoD::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedR__StoD>(other)))
    {
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD this104051 =
          (*this);
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::graph::id::OnedR__StoD other104050 =
          x10aux::class_cast<org::scalegraph::graph::id::OnedR__StoD>(other);
        (x10aux::struct_equals(this104051->FMGL(rshifted),
                               other104050->FMGL(rshifted)));
    }))
    ;
    
}

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/graph/id/OnedR.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedR__StoD::_serialize(org::scalegraph::graph::id::OnedR__StoD this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(rshifted));
    
}

void org::scalegraph::graph::id::OnedR__StoD::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(rshifted) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedR__StoD::rtt;
void org::scalegraph::graph::id::OnedR__StoD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedR.StoD",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedR$StoD */
/*************************************************/

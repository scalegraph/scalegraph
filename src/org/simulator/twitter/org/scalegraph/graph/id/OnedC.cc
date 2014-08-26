/*************************************************/
/* START of OnedC */
#include <org/scalegraph/graph/id/OnedC.h>


//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::id::OnedC* org::scalegraph::graph::id::OnedC::org__scalegraph__graph__id__OnedC____this__org__scalegraph__graph__id__OnedC(
  ) {
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedC::_constructor() {
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": polyglot.ast.Empty_c
    ;
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::graph::id::OnedC* org::scalegraph::graph::id::OnedC::_make(
  ) {
    org::scalegraph::graph::id::OnedC* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::id::OnedC>(), 0, sizeof(org::scalegraph::graph::id::OnedC))) org::scalegraph::graph::id::OnedC();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::graph::id::OnedC::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::id::OnedC::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::graph::id::OnedC::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::graph::id::OnedC::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::id::OnedC* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::id::OnedC>(), 0, sizeof(org::scalegraph::graph::id::OnedC))) org::scalegraph::graph::id::OnedC();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::graph::id::OnedC::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::graph::id::OnedC::rtt;
void org::scalegraph::graph::id::OnedC::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.graph.id.OnedC",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of OnedC */
/*************************************************/
/*************************************************/
/* START of OnedC$VtoD */
#include <org/scalegraph/graph/id/OnedC__VtoD.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedC__VtoD_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedC__VtoD> {
public:
    static x10::lang::Any::itable<OnedC__VtoD_ibox0 > itable;
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
x10::lang::Any::itable<OnedC__VtoD_ibox0 >  OnedC__VtoD_ibox0::itable(&OnedC__VtoD_ibox0::equals, &OnedC__VtoD_ibox0::hashCode, &OnedC__VtoD_ibox0::toString, &OnedC__VtoD_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedC__VtoD >  org::scalegraph::graph::id::OnedC__VtoD::_itable_0(&org::scalegraph::graph::id::OnedC__VtoD::equals, &org::scalegraph::graph::id::OnedC__VtoD::hashCode, &org::scalegraph::graph::id::OnedC__VtoD::toString, &org::scalegraph::graph::id::OnedC__VtoD::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedC__VtoD::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__VtoD::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__VtoD>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedC__VtoD::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__VtoD_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__VtoD>())};

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedC__VtoD::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": polyglot.ast.Empty_c
    ;
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.AssignPropertyCall_c
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgc) = ids->FMGL(lgc);
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(cmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                      FMGL(lgc)))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::OnedC__VtoD org::scalegraph::graph::id::OnedC__VtoD::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::OnedC__VtoD this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__VtoD::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__VtoD::toString(
  ) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedC.VtoD:"), x10aux::makeStringLit(" lgc=")), (*this)->
                                                                                                                                                                                                                           FMGL(lgc)), x10aux::makeStringLit(" cmask=")), (*this)->
                                                                                                                                                                                                                                                                            FMGL(cmask));
    
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedC__VtoD::hashCode(
  ) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgc)))));
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(cmask)))));
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__VtoD::equals(
  x10::lang::Any* other) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__VtoD>(other)))
    {
        
        //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__VtoD::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__VtoD>(other));
    
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__VtoD::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__VtoD>(other)))
    {
        
        //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__VtoD::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__VtoD>(other));
    
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedC__VtoD::_serialize(org::scalegraph::graph::id::OnedC__VtoD this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgc));
    buf.write(this_->FMGL(cmask));
    
}

void org::scalegraph::graph::id::OnedC__VtoD::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgc) = buf.read<x10_int>();
    FMGL(cmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedC__VtoD::rtt;
void org::scalegraph::graph::id::OnedC__VtoD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedC.VtoD",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedC$VtoD */
/*************************************************/
/*************************************************/
/* START of OnedC$VtoS */
#include <org/scalegraph/graph/id/OnedC__VtoS.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedC__VtoS_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedC__VtoS> {
public:
    static x10::lang::Any::itable<OnedC__VtoS_ibox0 > itable;
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
x10::lang::Any::itable<OnedC__VtoS_ibox0 >  OnedC__VtoS_ibox0::itable(&OnedC__VtoS_ibox0::equals, &OnedC__VtoS_ibox0::hashCode, &OnedC__VtoS_ibox0::toString, &OnedC__VtoS_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedC__VtoS >  org::scalegraph::graph::id::OnedC__VtoS::_itable_0(&org::scalegraph::graph::id::OnedC__VtoS::equals, &org::scalegraph::graph::id::OnedC__VtoS::hashCode, &org::scalegraph::graph::id::OnedC__VtoS::toString, &org::scalegraph::graph::id::OnedC__VtoS::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedC__VtoS::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__VtoS::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__VtoS>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedC__VtoS::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__VtoS_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__VtoS>())};

//#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedC__VtoS::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": polyglot.ast.Empty_c
    ;
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.AssignPropertyCall_c
    
    //#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgc) = ids->FMGL(lgc);
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(cmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                      FMGL(lgc)))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::OnedC__VtoS org::scalegraph::graph::id::OnedC__VtoS::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::OnedC__VtoS this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__VtoS::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__VtoS::toString(
  ) {
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedC.VtoS:"), x10aux::makeStringLit(" lgc=")), (*this)->
                                                                                                                                                                                                                                                                               FMGL(lgc)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                                                                              FMGL(lgl)), x10aux::makeStringLit(" cmask=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                               FMGL(cmask));
    
}

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedC__VtoS::hashCode(
  ) {
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgc)))));
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(cmask)))));
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__VtoS::equals(
  x10::lang::Any* other) {
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__VtoS>(other)))
    {
        
        //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__VtoS::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__VtoS>(other));
    
}

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__VtoS::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__VtoS>(other)))
    {
        
        //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__VtoS::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__VtoS>(other));
    
}

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedC__VtoS::_serialize(org::scalegraph::graph::id::OnedC__VtoS this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgc));
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(cmask));
    
}

void org::scalegraph::graph::id::OnedC__VtoS::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgc) = buf.read<x10_int>();
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(cmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedC__VtoS::rtt;
void org::scalegraph::graph::id::OnedC__VtoS::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedC.VtoS",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedC$VtoS */
/*************************************************/
/*************************************************/
/* START of OnedC$DtoV */
#include <org/scalegraph/graph/id/OnedC__DtoV.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/Long.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedC__DtoV_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedC__DtoV> {
public:
    static x10::lang::Any::itable<OnedC__DtoV_ibox0 > itable;
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
x10::lang::Any::itable<OnedC__DtoV_ibox0 >  OnedC__DtoV_ibox0::itable(&OnedC__DtoV_ibox0::equals, &OnedC__DtoV_ibox0::hashCode, &OnedC__DtoV_ibox0::toString, &OnedC__DtoV_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedC__DtoV >  org::scalegraph::graph::id::OnedC__DtoV::_itable_0(&org::scalegraph::graph::id::OnedC__DtoV::equals, &org::scalegraph::graph::id::OnedC__DtoV::hashCode, &org::scalegraph::graph::id::OnedC__DtoV::toString, &org::scalegraph::graph::id::OnedC__DtoV::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedC__DtoV::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__DtoV::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__DtoV>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedC__DtoV::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__DtoV_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__DtoV>())};

//#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedC__DtoV::_constructor(org::scalegraph::graph::id::IdStruct ids,
                                                           x10_int c) {
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": polyglot.ast.Empty_c
    ;
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.AssignPropertyCall_c
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(c) = c;
    
    //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgc) = ids->FMGL(lgc);
}
org::scalegraph::graph::id::OnedC__DtoV org::scalegraph::graph::id::OnedC__DtoV::_make(
  org::scalegraph::graph::id::IdStruct ids, x10_int c) {
    org::scalegraph::graph::id::OnedC__DtoV this_; 
    this_->_constructor(ids, c);
    return this_;
}



//#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__DtoV::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__DtoV::toString(
  ) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedC.DtoV:"), x10aux::makeStringLit(" c=")), (*this)->
                                                                                                                                                                                                                         FMGL(c)), x10aux::makeStringLit(" lgc=")), (*this)->
                                                                                                                                                                                                                                                                      FMGL(lgc));
    
}

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedC__DtoV::hashCode(
  ) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(c)))));
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgc)))));
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__DtoV::equals(
  x10::lang::Any* other) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__DtoV>(other)))
    {
        
        //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__DtoV::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__DtoV>(other));
    
}

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__DtoV::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__DtoV>(other)))
    {
        
        //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__DtoV::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__DtoV>(other));
    
}

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedC__DtoV::_serialize(org::scalegraph::graph::id::OnedC__DtoV this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(c));
    buf.write(this_->FMGL(lgc));
    
}

void org::scalegraph::graph::id::OnedC__DtoV::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(c) = buf.read<x10_int>();
    FMGL(lgc) = buf.read<x10_int>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedC__DtoV::rtt;
void org::scalegraph::graph::id::OnedC__DtoV::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedC.DtoV",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedC$DtoV */
/*************************************************/
/*************************************************/
/* START of OnedC$DtoS */
#include <org/scalegraph/graph/id/OnedC__DtoS.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedC__DtoS_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedC__DtoS> {
public:
    static x10::lang::Any::itable<OnedC__DtoS_ibox0 > itable;
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
x10::lang::Any::itable<OnedC__DtoS_ibox0 >  OnedC__DtoS_ibox0::itable(&OnedC__DtoS_ibox0::equals, &OnedC__DtoS_ibox0::hashCode, &OnedC__DtoS_ibox0::toString, &OnedC__DtoS_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedC__DtoS >  org::scalegraph::graph::id::OnedC__DtoS::_itable_0(&org::scalegraph::graph::id::OnedC__DtoS::equals, &org::scalegraph::graph::id::OnedC__DtoS::hashCode, &org::scalegraph::graph::id::OnedC__DtoS::toString, &org::scalegraph::graph::id::OnedC__DtoS::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedC__DtoS::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__DtoS::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__DtoS>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedC__DtoS::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__DtoS_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__DtoS>())};

//#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedC__DtoS::_constructor(org::scalegraph::graph::id::IdStruct ids,
                                                           x10_int c) {
    
    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": polyglot.ast.Empty_c
    ;
    
    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.AssignPropertyCall_c
    
    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10LocalDecl_c
    x10_int lgl = ids->FMGL(lgl);
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(c) = c;
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(cshifted) = ((x10_long) ((((x10_long) (c))) << (0x3f & (lgl))));
}
org::scalegraph::graph::id::OnedC__DtoS org::scalegraph::graph::id::OnedC__DtoS::_make(
  org::scalegraph::graph::id::IdStruct ids, x10_int c) {
    org::scalegraph::graph::id::OnedC__DtoS this_; 
    this_->_constructor(ids, c);
    return this_;
}



//#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__DtoS::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__DtoS::toString(
  ) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedC.DtoS:"), x10aux::makeStringLit(" c=")), (*this)->
                                                                                                                                                                                                                         FMGL(c)), x10aux::makeStringLit(" cshifted=")), (*this)->
                                                                                                                                                                                                                                                                           FMGL(cshifted));
    
}

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedC__DtoS::hashCode(
  ) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(c)))));
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(cshifted)))));
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__DtoS::equals(
  x10::lang::Any* other) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__DtoS>(other)))
    {
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__DtoS::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__DtoS>(other));
    
}

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__DtoS::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__DtoS>(other)))
    {
        
        //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__DtoS::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__DtoS>(other));
    
}

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedC__DtoS::_serialize(org::scalegraph::graph::id::OnedC__DtoS this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(c));
    buf.write(this_->FMGL(cshifted));
    
}

void org::scalegraph::graph::id::OnedC__DtoS::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(c) = buf.read<x10_int>();
    FMGL(cshifted) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedC__DtoS::rtt;
void org::scalegraph::graph::id::OnedC__DtoS::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedC.DtoS",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedC$DtoS */
/*************************************************/
/*************************************************/
/* START of OnedC$StoV */
#include <org/scalegraph/graph/id/OnedC__StoV.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedC__StoV_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedC__StoV> {
public:
    static x10::lang::Any::itable<OnedC__StoV_ibox0 > itable;
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
x10::lang::Any::itable<OnedC__StoV_ibox0 >  OnedC__StoV_ibox0::itable(&OnedC__StoV_ibox0::equals, &OnedC__StoV_ibox0::hashCode, &OnedC__StoV_ibox0::toString, &OnedC__StoV_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedC__StoV >  org::scalegraph::graph::id::OnedC__StoV::_itable_0(&org::scalegraph::graph::id::OnedC__StoV::equals, &org::scalegraph::graph::id::OnedC__StoV::hashCode, &org::scalegraph::graph::id::OnedC__StoV::toString, &org::scalegraph::graph::id::OnedC__StoV::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedC__StoV::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__StoV::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__StoV>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedC__StoV::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__StoV_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__StoV>())};

//#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedC__StoV::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": polyglot.ast.Empty_c
    ;
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.AssignPropertyCall_c
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgc) = ids->FMGL(lgc);
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
    
    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                      FMGL(lgl)))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::OnedC__StoV org::scalegraph::graph::id::OnedC__StoV::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::OnedC__StoV this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__StoV::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__StoV::toString(
  ) {
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedC.StoV:"), x10aux::makeStringLit(" lgc=")), (*this)->
                                                                                                                                                                                                                                                                               FMGL(lgc)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                                                                              FMGL(lgl)), x10aux::makeStringLit(" lmask=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                               FMGL(lmask));
    
}

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedC__StoV::hashCode(
  ) {
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgc)))));
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lmask)))));
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__StoV::equals(
  x10::lang::Any* other) {
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__StoV>(other)))
    {
        
        //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__StoV::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__StoV>(other));
    
}

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__StoV::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__StoV>(other)))
    {
        
        //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__StoV::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__StoV>(other));
    
}

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedC__StoV::_serialize(org::scalegraph::graph::id::OnedC__StoV this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgc));
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(lmask));
    
}

void org::scalegraph::graph::id::OnedC__StoV::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgc) = buf.read<x10_int>();
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(lmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedC__StoV::rtt;
void org::scalegraph::graph::id::OnedC__StoV::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedC.StoV",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedC$StoV */
/*************************************************/
/*************************************************/
/* START of OnedC$StoD */
#include <org/scalegraph/graph/id/OnedC__StoD.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class OnedC__StoD_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::OnedC__StoD> {
public:
    static x10::lang::Any::itable<OnedC__StoD_ibox0 > itable;
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
x10::lang::Any::itable<OnedC__StoD_ibox0 >  OnedC__StoD_ibox0::itable(&OnedC__StoD_ibox0::equals, &OnedC__StoD_ibox0::hashCode, &OnedC__StoD_ibox0::toString, &OnedC__StoD_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::OnedC__StoD >  org::scalegraph::graph::id::OnedC__StoD::_itable_0(&org::scalegraph::graph::id::OnedC__StoD::equals, &org::scalegraph::graph::id::OnedC__StoD::hashCode, &org::scalegraph::graph::id::OnedC__StoD::toString, &org::scalegraph::graph::id::OnedC__StoD::typeName);
x10aux::itable_entry org::scalegraph::graph::id::OnedC__StoD::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__StoD::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__StoD>())};
x10aux::itable_entry org::scalegraph::graph::id::OnedC__StoD::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::OnedC__StoD_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::OnedC__StoD>())};

//#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10FieldDecl_c

//#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::OnedC__StoD::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": polyglot.ast.Empty_c
    ;
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.AssignPropertyCall_c
    
    //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (ids->
                                                                                      FMGL(lgl)))))) - (((x10_long)1ll))));
    
    //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
}
org::scalegraph::graph::id::OnedC__StoD org::scalegraph::graph::id::OnedC__StoD::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::OnedC__StoD this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__StoD::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::OnedC__StoD::toString(
  ) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.OnedC.StoD:"), x10aux::makeStringLit(" lmask=")), (*this)->
                                                                                                                                                                                                                             FMGL(lmask)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                              FMGL(lgl));
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::OnedC__StoD::hashCode(
  ) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lmask)))));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__StoD::equals(
  x10::lang::Any* other) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__StoD>(other)))
    {
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__StoD::equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__StoD>(other));
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::OnedC__StoD::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::OnedC__StoD>(other)))
    {
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::OnedC__StoD::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::OnedC__StoD>(other));
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/OnedC.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::OnedC__StoD::_serialize(org::scalegraph::graph::id::OnedC__StoD this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lmask));
    buf.write(this_->FMGL(lgl));
    
}

void org::scalegraph::graph::id::OnedC__StoD::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lmask) = buf.read<x10_long>();
    FMGL(lgl) = buf.read<x10_int>();
}


x10aux::RuntimeType org::scalegraph::graph::id::OnedC__StoD::rtt;
void org::scalegraph::graph::id::OnedC__StoD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.OnedC.StoD",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of OnedC$StoD */
/*************************************************/

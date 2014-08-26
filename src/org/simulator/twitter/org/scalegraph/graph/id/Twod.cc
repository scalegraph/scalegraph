/*************************************************/
/* START of Twod */
#include <org/scalegraph/graph/id/Twod.h>


//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
org::scalegraph::graph::id::Twod* org::scalegraph::graph::id::Twod::org__scalegraph__graph__id__Twod____this__org__scalegraph__graph__id__Twod(
  ) {
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::Twod::_constructor() {
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": polyglot.ast.Empty_c
    ;
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::graph::id::Twod* org::scalegraph::graph::id::Twod::_make(
  ) {
    org::scalegraph::graph::id::Twod* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::id::Twod>(), 0, sizeof(org::scalegraph::graph::id::Twod))) org::scalegraph::graph::id::Twod();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::graph::id::Twod::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::graph::id::Twod::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::graph::id::Twod::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::graph::id::Twod::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::graph::id::Twod* this_ = new (memset(x10aux::alloc<org::scalegraph::graph::id::Twod>(), 0, sizeof(org::scalegraph::graph::id::Twod))) org::scalegraph::graph::id::Twod();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::graph::id::Twod::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::graph::id::Twod::rtt;
void org::scalegraph::graph::id::Twod::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.graph.id.Twod",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Twod */
/*************************************************/
/*************************************************/
/* START of Twod$VtoD */
#include <org/scalegraph/graph/id/Twod__VtoD.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__VtoD_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::Twod__VtoD> {
public:
    static x10::lang::Any::itable<Twod__VtoD_ibox0 > itable;
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
x10::lang::Any::itable<Twod__VtoD_ibox0 >  Twod__VtoD_ibox0::itable(&Twod__VtoD_ibox0::equals, &Twod__VtoD_ibox0::hashCode, &Twod__VtoD_ibox0::toString, &Twod__VtoD_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::Twod__VtoD >  org::scalegraph::graph::id::Twod__VtoD::_itable_0(&org::scalegraph::graph::id::Twod__VtoD::equals, &org::scalegraph::graph::id::Twod__VtoD::hashCode, &org::scalegraph::graph::id::Twod__VtoD::toString, &org::scalegraph::graph::id::Twod__VtoD::typeName);
x10aux::itable_entry org::scalegraph::graph::id::Twod__VtoD::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__VtoD::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__VtoD>())};
x10aux::itable_entry org::scalegraph::graph::id::Twod__VtoD::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__VtoD_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__VtoD>())};

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::Twod__VtoD::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": polyglot.ast.Empty_c
    ;
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.AssignPropertyCall_c
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgc = ids->FMGL(lgc);
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgr = ids->FMGL(lgr);
    
    //#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgsize) = ((x10_int) ((lgr) + (lgc)));
    
    //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(rmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (lgr))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::Twod__VtoD org::scalegraph::graph::id::Twod__VtoD::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::Twod__VtoD this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__VtoD::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__VtoD::toString(
  ) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.Twod.VtoD:"), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                              FMGL(lgl)), x10aux::makeStringLit(" lgsize=")), (*this)->
                                                                                                                                                                                                                                                                                                                                FMGL(lgsize)), x10aux::makeStringLit(" rmask=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                    FMGL(rmask));
    
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::Twod__VtoD::hashCode(
  ) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgsize)))));
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(rmask)))));
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__VtoD::equals(
  x10::lang::Any* other) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__VtoD>(other)))
    {
        
        //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__VtoD::equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__VtoD>(other));
    
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__VtoD::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__VtoD>(other)))
    {
        
        //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__VtoD::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__VtoD>(other));
    
}

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::Twod__VtoD::_serialize(org::scalegraph::graph::id::Twod__VtoD this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(lgsize));
    buf.write(this_->FMGL(rmask));
    
}

void org::scalegraph::graph::id::Twod__VtoD::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(lgsize) = buf.read<x10_int>();
    FMGL(rmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::Twod__VtoD::rtt;
void org::scalegraph::graph::id::Twod__VtoD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.Twod.VtoD",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Twod$VtoD */
/*************************************************/
/*************************************************/
/* START of Twod$VtoS */
#include <org/scalegraph/graph/id/Twod__VtoS.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__VtoS_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::Twod__VtoS> {
public:
    static x10::lang::Any::itable<Twod__VtoS_ibox0 > itable;
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
x10::lang::Any::itable<Twod__VtoS_ibox0 >  Twod__VtoS_ibox0::itable(&Twod__VtoS_ibox0::equals, &Twod__VtoS_ibox0::hashCode, &Twod__VtoS_ibox0::toString, &Twod__VtoS_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::Twod__VtoS >  org::scalegraph::graph::id::Twod__VtoS::_itable_0(&org::scalegraph::graph::id::Twod__VtoS::equals, &org::scalegraph::graph::id::Twod__VtoS::hashCode, &org::scalegraph::graph::id::Twod__VtoS::toString, &org::scalegraph::graph::id::Twod__VtoS::typeName);
x10aux::itable_entry org::scalegraph::graph::id::Twod__VtoS::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__VtoS::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__VtoS>())};
x10aux::itable_entry org::scalegraph::graph::id::Twod__VtoS::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__VtoS_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__VtoS>())};

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::Twod__VtoS::_constructor(org::scalegraph::graph::id::IdStruct ids) {
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": polyglot.ast.Empty_c
    ;
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.AssignPropertyCall_c
    
    //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgc = ids->FMGL(lgc);
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgr) = ids->FMGL(lgr);
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
    
    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgsize) = ((x10_int) (((*this)->FMGL(lgr)) + (lgc)));
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_long rmask = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                FMGL(lgr)))))) - (((x10_long)1ll))));
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(cmask) = ((x10_long) ((((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                                    FMGL(lgsize)))))) - (((x10_long)1ll))))) - (rmask)));
}
org::scalegraph::graph::id::Twod__VtoS org::scalegraph::graph::id::Twod__VtoS::_make(
  org::scalegraph::graph::id::IdStruct ids) {
    org::scalegraph::graph::id::Twod__VtoS this_; 
    this_->_constructor(ids);
    return this_;
}



//#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__VtoS::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__VtoS::toString(
  ) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.Twod.VtoS:"), x10aux::makeStringLit(" lgr=")), (*this)->
                                                                                                                                                                                                                                                                                                                                  FMGL(lgr)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                 FMGL(lgl)), x10aux::makeStringLit(" lgsize=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                   FMGL(lgsize)), x10aux::makeStringLit(" cmask=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       FMGL(cmask));
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::Twod__VtoS::hashCode(
  ) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgr)))));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgsize)))));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(cmask)))));
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__VtoS::equals(
  x10::lang::Any* other) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__VtoS>(other)))
    {
        
        //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__VtoS::equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__VtoS>(other));
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__VtoS::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__VtoS>(other)))
    {
        
        //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__VtoS::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__VtoS>(other));
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::Twod__VtoS::_serialize(org::scalegraph::graph::id::Twod__VtoS this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(lgr));
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(lgsize));
    buf.write(this_->FMGL(cmask));
    
}

void org::scalegraph::graph::id::Twod__VtoS::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(lgr) = buf.read<x10_int>();
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(lgsize) = buf.read<x10_int>();
    FMGL(cmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::Twod__VtoS::rtt;
void org::scalegraph::graph::id::Twod__VtoS::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.Twod.VtoS",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Twod$VtoS */
/*************************************************/
/*************************************************/
/* START of Twod$DtoV */
#include <org/scalegraph/graph/id/Twod__DtoV.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__DtoV_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::Twod__DtoV> {
public:
    static x10::lang::Any::itable<Twod__DtoV_ibox0 > itable;
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
x10::lang::Any::itable<Twod__DtoV_ibox0 >  Twod__DtoV_ibox0::itable(&Twod__DtoV_ibox0::equals, &Twod__DtoV_ibox0::hashCode, &Twod__DtoV_ibox0::toString, &Twod__DtoV_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::Twod__DtoV >  org::scalegraph::graph::id::Twod__DtoV::_itable_0(&org::scalegraph::graph::id::Twod__DtoV::equals, &org::scalegraph::graph::id::Twod__DtoV::hashCode, &org::scalegraph::graph::id::Twod__DtoV::toString, &org::scalegraph::graph::id::Twod__DtoV::typeName);
x10aux::itable_entry org::scalegraph::graph::id::Twod__DtoV::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__DtoV::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__DtoV>())};
x10aux::itable_entry org::scalegraph::graph::id::Twod__DtoV::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__DtoV_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__DtoV>())};

//#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::Twod__DtoV::_constructor(org::scalegraph::graph::id::IdStruct ids,
                                                          x10_int c) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": polyglot.ast.Empty_c
    ;
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.AssignPropertyCall_c
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgc = ids->FMGL(lgc);
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgr = ids->FMGL(lgr);
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
    
    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(cshifted) = ((x10_long) ((((x10_long) (c))) << (0x3f & (lgr))));
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgsize) = ((x10_int) ((lgr) + (lgc)));
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                      FMGL(lgl)))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::Twod__DtoV org::scalegraph::graph::id::Twod__DtoV::_make(
  org::scalegraph::graph::id::IdStruct ids, x10_int c) {
    org::scalegraph::graph::id::Twod__DtoV this_; 
    this_->_constructor(ids, c);
    return this_;
}



//#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__DtoV::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__DtoV::toString(
  ) {
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.Twod.DtoV:"), x10aux::makeStringLit(" cshifted=")), (*this)->
                                                                                                                                                                                                                                                                                                                                       FMGL(cshifted)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                           FMGL(lgl)), x10aux::makeStringLit(" lgsize=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                             FMGL(lgsize)), x10aux::makeStringLit(" lmask=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 FMGL(lmask));
    
}

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::Twod__DtoV::hashCode(
  ) {
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(cshifted)))));
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgsize)))));
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lmask)))));
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__DtoV::equals(
  x10::lang::Any* other) {
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__DtoV>(other)))
    {
        
        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__DtoV::equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__DtoV>(other));
    
}

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__DtoV::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__DtoV>(other)))
    {
        
        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__DtoV::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__DtoV>(other));
    
}

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::Twod__DtoV::_serialize(org::scalegraph::graph::id::Twod__DtoV this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(cshifted));
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(lgsize));
    buf.write(this_->FMGL(lmask));
    
}

void org::scalegraph::graph::id::Twod__DtoV::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(cshifted) = buf.read<x10_long>();
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(lgsize) = buf.read<x10_int>();
    FMGL(lmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::Twod__DtoV::rtt;
void org::scalegraph::graph::id::Twod__DtoV::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.Twod.DtoV",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Twod$DtoV */
/*************************************************/
/*************************************************/
/* START of Twod$DtoS */
#include <org/scalegraph/graph/id/Twod__DtoS.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__DtoS_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::Twod__DtoS> {
public:
    static x10::lang::Any::itable<Twod__DtoS_ibox0 > itable;
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
x10::lang::Any::itable<Twod__DtoS_ibox0 >  Twod__DtoS_ibox0::itable(&Twod__DtoS_ibox0::equals, &Twod__DtoS_ibox0::hashCode, &Twod__DtoS_ibox0::toString, &Twod__DtoS_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::Twod__DtoS >  org::scalegraph::graph::id::Twod__DtoS::_itable_0(&org::scalegraph::graph::id::Twod__DtoS::equals, &org::scalegraph::graph::id::Twod__DtoS::hashCode, &org::scalegraph::graph::id::Twod__DtoS::toString, &org::scalegraph::graph::id::Twod__DtoS::typeName);
x10aux::itable_entry org::scalegraph::graph::id::Twod__DtoS::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__DtoS::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__DtoS>())};
x10aux::itable_entry org::scalegraph::graph::id::Twod__DtoS::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__DtoS_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__DtoS>())};

//#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::Twod__DtoS::_constructor(org::scalegraph::graph::id::IdStruct ids,
                                                          x10_int c) {
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": polyglot.ast.Empty_c
    ;
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.AssignPropertyCall_c
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgc = ids->FMGL(lgc);
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgr = ids->FMGL(lgr);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgl = ids->FMGL(lgl);
    
    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(cshiftedto) = ((x10_long) ((((x10_long) (c))) << (0x3f & (lgl))));
    
    //#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (lgl))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::Twod__DtoS org::scalegraph::graph::id::Twod__DtoS::_make(
  org::scalegraph::graph::id::IdStruct ids, x10_int c) {
    org::scalegraph::graph::id::Twod__DtoS this_; 
    this_->_constructor(ids, c);
    return this_;
}



//#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__DtoS::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__DtoS::toString(
  ) {
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.Twod.DtoS:"), x10aux::makeStringLit(" cshiftedto=")), (*this)->
                                                                                                                                                                                                                                 FMGL(cshiftedto)), x10aux::makeStringLit(" lmask=")), (*this)->
                                                                                                                                                                                                                                                                                         FMGL(lmask));
    
}

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::Twod__DtoS::hashCode(
  ) {
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(cshiftedto)))));
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lmask)))));
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__DtoS::equals(
  x10::lang::Any* other) {
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__DtoS>(other)))
    {
        
        //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__DtoS::equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__DtoS>(other));
    
}

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__DtoS::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__DtoS>(other)))
    {
        
        //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__DtoS::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__DtoS>(other));
    
}

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::Twod__DtoS::_serialize(org::scalegraph::graph::id::Twod__DtoS this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(cshiftedto));
    buf.write(this_->FMGL(lmask));
    
}

void org::scalegraph::graph::id::Twod__DtoS::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(cshiftedto) = buf.read<x10_long>();
    FMGL(lmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::Twod__DtoS::rtt;
void org::scalegraph::graph::id::Twod__DtoS::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.Twod.DtoS",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Twod$DtoS */
/*************************************************/
/*************************************************/
/* START of Twod$StoV */
#include <org/scalegraph/graph/id/Twod__StoV.h>

#include <x10/lang/Any.h>
#include <x10/lang/Int.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__StoV_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::Twod__StoV> {
public:
    static x10::lang::Any::itable<Twod__StoV_ibox0 > itable;
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
x10::lang::Any::itable<Twod__StoV_ibox0 >  Twod__StoV_ibox0::itable(&Twod__StoV_ibox0::equals, &Twod__StoV_ibox0::hashCode, &Twod__StoV_ibox0::toString, &Twod__StoV_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::Twod__StoV >  org::scalegraph::graph::id::Twod__StoV::_itable_0(&org::scalegraph::graph::id::Twod__StoV::equals, &org::scalegraph::graph::id::Twod__StoV::hashCode, &org::scalegraph::graph::id::Twod__StoV::toString, &org::scalegraph::graph::id::Twod__StoV::typeName);
x10aux::itable_entry org::scalegraph::graph::id::Twod__StoV::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__StoV::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__StoV>())};
x10aux::itable_entry org::scalegraph::graph::id::Twod__StoV::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__StoV_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__StoV>())};

//#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::Twod__StoV::_constructor(org::scalegraph::graph::id::IdStruct ids,
                                                          x10_int r) {
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": polyglot.ast.Empty_c
    ;
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.AssignPropertyCall_c
    
    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(r) = r;
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgc = ids->FMGL(lgc);
    
    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgr) = ids->FMGL(lgr);
    
    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgl) = ids->FMGL(lgl);
    
    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lgsize) = ((x10_int) (((*this)->FMGL(lgr)) + (lgc)));
    
    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & ((*this)->
                                                                                      FMGL(lgl)))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::Twod__StoV org::scalegraph::graph::id::Twod__StoV::_make(
  org::scalegraph::graph::id::IdStruct ids, x10_int r) {
    org::scalegraph::graph::id::Twod__StoV this_; 
    this_->_constructor(ids, r);
    return this_;
}



//#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__StoV::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__StoV::toString(
  ) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.Twod.StoV:"), x10aux::makeStringLit(" r=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                    FMGL(r)), x10aux::makeStringLit(" lgr=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                 FMGL(lgr)), x10aux::makeStringLit(" lgl=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                FMGL(lgl)), x10aux::makeStringLit(" lgsize=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  FMGL(lgsize)), x10aux::makeStringLit(" lmask=")), (*this)->
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      FMGL(lmask));
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::Twod__StoV::hashCode(
  ) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(r)))));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgr)))));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgl)))));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lgsize)))));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lmask)))));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__StoV::equals(
  x10::lang::Any* other) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__StoV>(other)))
    {
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__StoV::equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__StoV>(other));
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__StoV::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__StoV>(other)))
    {
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__StoV::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__StoV>(other));
    
}

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::Twod__StoV::_serialize(org::scalegraph::graph::id::Twod__StoV this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(r));
    buf.write(this_->FMGL(lgr));
    buf.write(this_->FMGL(lgl));
    buf.write(this_->FMGL(lgsize));
    buf.write(this_->FMGL(lmask));
    
}

void org::scalegraph::graph::id::Twod__StoV::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(r) = buf.read<x10_int>();
    FMGL(lgr) = buf.read<x10_int>();
    FMGL(lgl) = buf.read<x10_int>();
    FMGL(lgsize) = buf.read<x10_int>();
    FMGL(lmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::Twod__StoV::rtt;
void org::scalegraph::graph::id::Twod__StoV::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.Twod.StoV",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Twod$StoV */
/*************************************************/
/*************************************************/
/* START of Twod$StoD */
#include <org/scalegraph/graph/id/Twod__StoD.h>

#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/graph/id/IdStruct.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Boolean.h>
namespace org { namespace scalegraph { namespace graph { namespace id { 
class Twod__StoD_ibox0 : public x10::lang::IBox<org::scalegraph::graph::id::Twod__StoD> {
public:
    static x10::lang::Any::itable<Twod__StoD_ibox0 > itable;
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
x10::lang::Any::itable<Twod__StoD_ibox0 >  Twod__StoD_ibox0::itable(&Twod__StoD_ibox0::equals, &Twod__StoD_ibox0::hashCode, &Twod__StoD_ibox0::toString, &Twod__StoD_ibox0::typeName);
} } } } 
x10::lang::Any::itable<org::scalegraph::graph::id::Twod__StoD >  org::scalegraph::graph::id::Twod__StoD::_itable_0(&org::scalegraph::graph::id::Twod__StoD::equals, &org::scalegraph::graph::id::Twod__StoD::hashCode, &org::scalegraph::graph::id::Twod__StoD::toString, &org::scalegraph::graph::id::Twod__StoD::typeName);
x10aux::itable_entry org::scalegraph::graph::id::Twod__StoD::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__StoD::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__StoD>())};
x10aux::itable_entry org::scalegraph::graph::id::Twod__StoD::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::graph::id::Twod__StoD_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::graph::id::Twod__StoD>())};

//#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10FieldDecl_c

//#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::graph::id::Twod__StoD::_constructor(org::scalegraph::graph::id::IdStruct ids,
                                                          x10_int r) {
    
    //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": polyglot.ast.Empty_c
    ;
    
    //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.AssignPropertyCall_c
    
    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgc = ids->FMGL(lgc);
    
    //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgr = ids->FMGL(lgr);
    
    //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int lgl = ids->FMGL(lgl);
    
    //#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(rshifted) = ((x10_long) ((((x10_long) (r))) << (0x3f & (lgl))));
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(lmask) = ((x10_long) ((((x10_long) ((((x10_long)1ll)) << (0x3f & (lgl))))) - (((x10_long)1ll))));
}
org::scalegraph::graph::id::Twod__StoD org::scalegraph::graph::id::Twod__StoD::_make(
  org::scalegraph::graph::id::IdStruct ids, x10_int r) {
    org::scalegraph::graph::id::Twod__StoD this_; 
    this_->_constructor(ids, r);
    return this_;
}



//#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__StoD::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::graph::id::Twod__StoD::toString(
  ) {
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.graph.id.Twod.StoD:"), x10aux::makeStringLit(" rshifted=")), (*this)->
                                                                                                                                                                                                                               FMGL(rshifted)), x10aux::makeStringLit(" lmask=")), (*this)->
                                                                                                                                                                                                                                                                                     FMGL(lmask));
    
}

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::graph::id::Twod__StoD::hashCode(
  ) {
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(rshifted)))));
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(lmask)))));
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__StoD::equals(
  x10::lang::Any* other) {
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__StoD>(other)))
    {
        
        //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__StoD::equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__StoD>(other));
    
}

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::graph::id::Twod__StoD::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::graph::id::Twod__StoD>(other)))
    {
        
        //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::graph::id::Twod__StoD::_struct_equals(
             x10aux::class_cast<org::scalegraph::graph::id::Twod__StoD>(other));
    
}

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c

//#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/graph/id/Twod.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::graph::id::Twod__StoD::_serialize(org::scalegraph::graph::id::Twod__StoD this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(rshifted));
    buf.write(this_->FMGL(lmask));
    
}

void org::scalegraph::graph::id::Twod__StoD::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(rshifted) = buf.read<x10_long>();
    FMGL(lmask) = buf.read<x10_long>();
}


x10aux::RuntimeType org::scalegraph::graph::id::Twod__StoD::rtt;
void org::scalegraph::graph::id::Twod__StoD::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.graph.id.Twod.StoD",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
    rtt.containsPtrs = false;
}

/* END of Twod$StoD */
/*************************************************/

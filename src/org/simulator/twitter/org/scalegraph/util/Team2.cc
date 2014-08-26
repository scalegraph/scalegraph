/*************************************************/
/* START of Team2 */
#include <org/scalegraph/util/Team2.h>

namespace org { namespace scalegraph { namespace util { 
class Team2_ibox0 : public x10::lang::IBox<org::scalegraph::util::Team2> {
public:
    static x10::lang::Any::itable<Team2_ibox0 > itable;
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
x10::lang::Any::itable<Team2_ibox0 >  Team2_ibox0::itable(&Team2_ibox0::equals, &Team2_ibox0::hashCode, &Team2_ibox0::toString, &Team2_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::Team2 >  org::scalegraph::util::Team2::_itable_0(&org::scalegraph::util::Team2::equals, &org::scalegraph::util::Team2::hashCode, &org::scalegraph::util::Team2::toString, &org::scalegraph::util::Team2::typeName);
x10aux::itable_entry org::scalegraph::util::Team2::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::Team2::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::Team2>())};
x10aux::itable_entry org::scalegraph::util::Team2::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::Team2_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::Team2>())};

//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10FieldDecl_c

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Team2::_constructor(x10::util::Team* baseTeam) {
    
    //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Empty_c
    ;
    
    //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.AssignPropertyCall_c
    
    //#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(base) = baseTeam;
}
org::scalegraph::util::Team2 org::scalegraph::util::Team2::_make(x10::util::Team* baseTeam)
{
    org::scalegraph::util::Team2 this_; 
    this_->_constructor(baseTeam);
    return this_;
}



//#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Team2::role() {
    
    //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(x10aux::nullCheck((*this)->FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
             ((x10_int)0));
    
}

//#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Team2::size() {
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(base))->size();
    
}

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10::lang::Place>* org::scalegraph::util::Team2::places(
  ) {
    
    //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(base))->places();
    
}

//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10::array::PlaceGroup* org::scalegraph::util::Team2::placeGroup(
  ) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(base))->placeGroup();
    
}

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Team2::barrier() {
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(base))->barrier((*this)->org::scalegraph::util::Team2::role());
}

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 201 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 245 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 260 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 311 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 354 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 380 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 424 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 464 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 498 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 515 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 563 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 598 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 615 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 630 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 638 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 653 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 663 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::Team2::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::Team2::toString(
  ) {
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.Team2:"), x10aux::makeStringLit(" base=")), (*this)->
                                                                                                                                                               FMGL(base));
    
}

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::Team2::hashCode() {
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::nullCheck((*this)->
                                                                                             FMGL(base))->hashCode())));
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Team2::equals(x10::lang::Any* other) {
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Team2>(other)))
    {
        
        //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Team2::equals(
             x10aux::class_cast<org::scalegraph::util::Team2>(other));
    
}

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Team2::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::Team2>(other)))
    {
        
        //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::Team2::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::Team2>(other));
    
}

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Team2::_serialize(org::scalegraph::util::Team2 this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(base));
    
}

void org::scalegraph::util::Team2::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(base) = buf.read<x10::util::Team*>();
}


x10aux::RuntimeType org::scalegraph::util::Team2::rtt;
void org::scalegraph::util::Team2::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.util.Team2",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of Team2 */
/*************************************************/

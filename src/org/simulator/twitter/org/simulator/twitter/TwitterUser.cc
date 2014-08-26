/*************************************************/
/* START of TwitterUser */
#include <org/simulator/twitter/TwitterUser.h>

#include <x10/lang/Long.h>
#include <x10/lang/String.h>

//#line 4 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": x10.ast.X10FieldDecl_c

//#line 5 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": x10.ast.X10FieldDecl_c

//#line 7 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": x10.ast.X10ConstructorDecl_c
void org::simulator::twitter::TwitterUser::_constructor(x10_long id, x10::lang::String* locate) {
    
    //#line 7 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": polyglot.ast.Empty_c
    ;
    
    //#line 7 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": x10.ast.AssignPropertyCall_c
    
    //#line 3 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": Eval of x10.ast.X10Call_c
    this->org::simulator::twitter::TwitterUser::__fieldInitializers40501();
    
    //#line 8 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(userID) = id;
    
    //#line 9 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(location) = locate;
}
org::simulator::twitter::TwitterUser* org::simulator::twitter::TwitterUser::_make(
  x10_long id, x10::lang::String* locate) {
    org::simulator::twitter::TwitterUser* this_ = new (memset(x10aux::alloc<org::simulator::twitter::TwitterUser>(), 0, sizeof(org::simulator::twitter::TwitterUser))) org::simulator::twitter::TwitterUser();
    this_->_constructor(id, locate);
    return this_;
}



//#line 3 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": x10.ast.X10MethodDecl_c
org::simulator::twitter::TwitterUser* org::simulator::twitter::TwitterUser::org__simulator__twitter__TwitterUser____this__org__simulator__twitter__TwitterUser(
  ) {
    
    //#line 3 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 3 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": x10.ast.X10MethodDecl_c
void org::simulator::twitter::TwitterUser::__fieldInitializers40501(
  ) {
    
    //#line 3 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(userID) = ((x10_long)0ll);
    
    //#line 3 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterUser.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(location) = (x10aux::class_cast_unchecked<x10::lang::String*>(X10_NULL));
}
const x10aux::serialization_id_t org::simulator::twitter::TwitterUser::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::simulator::twitter::TwitterUser::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::simulator::twitter::TwitterUser::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(userID));
    buf.write(this->FMGL(location));
    
}

x10::lang::Reference* org::simulator::twitter::TwitterUser::_deserializer(x10aux::deserialization_buffer& buf) {
    org::simulator::twitter::TwitterUser* this_ = new (memset(x10aux::alloc<org::simulator::twitter::TwitterUser>(), 0, sizeof(org::simulator::twitter::TwitterUser))) org::simulator::twitter::TwitterUser();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::simulator::twitter::TwitterUser::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(userID) = buf.read<x10_long>();
    FMGL(location) = buf.read<x10::lang::String*>();
}

x10aux::RuntimeType org::simulator::twitter::TwitterUser::rtt;
void org::simulator::twitter::TwitterUser::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.simulator.twitter.TwitterUser",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of TwitterUser */
/*************************************************/

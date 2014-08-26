/*************************************************/
/* START of TwitterSimulator1 */
#include <TwitterSimulator1.h>

#include <x10/lang/Double.h>
#include <org/scalegraph/xpregel/VertexContext.h>
#include <org/simulator/twitter/TwitterUser.h>
#include <x10/lang/Long.h>

//#line 29 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10FieldDecl_c

//#line 30 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10FieldDecl_c

//#line 31 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10FieldDecl_c

//#line 32 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10FieldDecl_c

//#line 33 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10FieldDecl_c

//#line 36 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10ConstructorDecl_c
void TwitterSimulator1::_constructor() {
    
    //#line 36 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": polyglot.ast.Empty_c
    ;
    
    //#line 36 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.AssignPropertyCall_c
    
    //#line 38 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(directMessage) = ((x10_double) (((x10_int)1)));
    
    //#line 39 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(tweet) = ((x10_double) (((x10_int)2)));
    
    //#line 40 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(attribute) = ((x10_double) (((x10_int)3)));
    
    //#line 41 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(direction) = ((x10_double) (((x10_int)4)));
    
    //#line 42 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mutual) = ((x10_double) (((x10_int)5)));
}
TwitterSimulator1* TwitterSimulator1::_make() {
    TwitterSimulator1* this_ = new (memset(x10aux::alloc<TwitterSimulator1>(), 0, sizeof(TwitterSimulator1))) TwitterSimulator1();
    this_->_constructor();
    return this_;
}



//#line 55 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10MethodDecl_c
void TwitterSimulator1::tweet(org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>* ctx) {
    
    //#line 56 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>::sendMessageToAllNeighbors(
      this->FMGL(tweet));
}

//#line 60 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10MethodDecl_c
void TwitterSimulator1::directMessage(org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>* ctx,
                                      x10_long destId) {
    
    //#line 61 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(ctx)->org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>::sendMessage(
      destId, this->FMGL(directMessage));
}

//#line 65 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10MethodDecl_c
void TwitterSimulator1::reTweet() {
 
}

//#line 27 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10MethodDecl_c
TwitterSimulator1* TwitterSimulator1::TwitterSimulator1____this__TwitterSimulator1(
  ) {
    
    //#line 27 "/home/mukul/sgtwitt/scalegraph/src/org/simulator/twitter/TwitterSimulator1.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t TwitterSimulator1::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(TwitterSimulator1::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void TwitterSimulator1::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(directMessage));
    buf.write(this->FMGL(tweet));
    buf.write(this->FMGL(attribute));
    buf.write(this->FMGL(direction));
    buf.write(this->FMGL(mutual));
    
}

x10::lang::Reference* TwitterSimulator1::_deserializer(x10aux::deserialization_buffer& buf) {
    TwitterSimulator1* this_ = new (memset(x10aux::alloc<TwitterSimulator1>(), 0, sizeof(TwitterSimulator1))) TwitterSimulator1();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TwitterSimulator1::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(directMessage) = buf.read<x10_double>();
    FMGL(tweet) = buf.read<x10_double>();
    FMGL(attribute) = buf.read<x10_double>();
    FMGL(direction) = buf.read<x10_double>();
    FMGL(mutual) = buf.read<x10_double>();
}

x10aux::RuntimeType TwitterSimulator1::rtt;
void TwitterSimulator1::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TwitterSimulator1",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of TwitterSimulator1 */
/*************************************************/

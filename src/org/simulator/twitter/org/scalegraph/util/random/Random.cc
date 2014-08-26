/*************************************************/
/* START of Random */
#include <org/scalegraph/util/random/Random.h>

#include <x10/io/CustomSerialization.h>
#include <org/scalegraph/util/random/splittable_mrg.h>
#include <x10/lang/Long.h>
#include <x10/compiler/Native.h>
#include <x10/io/SerialData.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Int.h>
#include <x10/lang/Any.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Double.h>
#include <x10/lang/Float.h>
#include <x10/lang/IllegalArgumentException.h>
#include <x10/lang/Zero.h>
x10::io::CustomSerialization::itable<org::scalegraph::util::random::Random >  org::scalegraph::util::random::Random::_itable_0(&org::scalegraph::util::random::Random::equals, &org::scalegraph::util::random::Random::hashCode, &org::scalegraph::util::random::Random::serialize, &org::scalegraph::util::random::Random::toString, &org::scalegraph::util::random::Random::typeName);
x10::lang::Any::itable<org::scalegraph::util::random::Random >  org::scalegraph::util::random::Random::_itable_1(&org::scalegraph::util::random::Random::equals, &org::scalegraph::util::random::Random::hashCode, &org::scalegraph::util::random::Random::toString, &org::scalegraph::util::random::Random::typeName);
x10aux::itable_entry org::scalegraph::util::random::Random::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::io::CustomSerialization>, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::random::Random>())};

//#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10FieldDecl_c

//#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::random::Random::_constructor(x10_long seed1, x10_long seed2) {
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": polyglot.ast.Empty_c
    ;
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.AssignPropertyCall_c
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::random::Random::__fieldInitializers41795();
    make_mrg_seed(seed1, seed2, &FMGL(state));
}
org::scalegraph::util::random::Random* org::scalegraph::util::random::Random::_make(
  x10_long seed1, x10_long seed2) {
    org::scalegraph::util::random::Random* this_ = new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random();
    this_->_constructor(seed1, seed2);
    return this_;
}



//#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::random::Random::_constructor(mrg_state orig) {
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": polyglot.ast.Empty_c
    ;
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.AssignPropertyCall_c
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::random::Random::__fieldInitializers41795();
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    memcpy(&(this->FMGL(state)), &(orig), sizeof(this->FMGL(state)));;
}
org::scalegraph::util::random::Random* org::scalegraph::util::random::Random::_make(
  mrg_state orig) {
    org::scalegraph::util::random::Random* this_ = new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random();
    this_->_constructor(orig);
    return this_;
}



//#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::random::Random::_constructor(
  x10::io::SerialData* data) {
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": polyglot.ast.Empty_c
    ;
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.AssignPropertyCall_c
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::random::Random::__fieldInitializers41795();
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> arr = x10aux::class_cast<org::scalegraph::util::MemoryChunk<x10_int> >(x10aux::nullCheck(data)->
                                                                                                                         FMGL(data));
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    (this->FMGL(state)).z1=arr->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                             ((x10_int)0));(this->FMGL(state)).z2=arr->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                    ((x10_int)1));(this->
                                                                                     FMGL(state)).z3=arr->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                       ((x10_int)2));(this->
                                                                                                                        FMGL(state)).z4=arr->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                                                          ((x10_int)3));(this->
                                                                                                                                                           FMGL(state)).z5=arr->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                                                                                             ((x10_int)4));;
}
org::scalegraph::util::random::Random* org::scalegraph::util::random::Random::_make(
  x10::io::SerialData* data) {
    org::scalegraph::util::random::Random* this_ = new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random();
    this_->_constructor(data);
    return this_;
}



//#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10::io::SerialData* org::scalegraph::util::random::Random::serialize(
  ) {
    
    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> arr = org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)5))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    arr->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)0), (this->FMGL(state)).z1);
    
    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    arr->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)1), (this->FMGL(state)).z2);
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    arr->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)2), (this->FMGL(state)).z3);
    
    //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    arr->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)3), (this->FMGL(state)).z4);
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
    arr->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)4), (this->FMGL(state)).z5);
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
    return x10::io::SerialData::_make(x10aux::class_cast_unchecked<x10::lang::Any*>(arr),
                                      x10aux::class_cast_unchecked<x10::io::SerialData*>(X10_NULL));
    
}

//#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::random::Random::random(){
    return mrg_get_uint_orig(&(this)->FMGL(state));;
}

//#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::random::Random* org::scalegraph::util::random::Random::clone(
  ) {
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
    return org::scalegraph::util::random::Random::_make(this->
                                                          FMGL(state));
    
}

//#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::random::Random::skip(x10_long n){
    mrg_skip(&(this)->FMGL(state), 0, 0, n);;
}

//#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::random::Random::nextInt() {
    
    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
    return this->random();
    
}

//#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::random::Random::nextLong(
  ) {
    
    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
    return ((x10_long) ((((x10_long) ((((x10_long) (this->random()))) * (((x10_long)2147483646ll))))) + (((x10_long) (this->random())))));
    
}

//#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::random::Random::nextBytes(org::scalegraph::util::MemoryChunk<x10_byte> buf) {
    
    //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10LocalDecl_c
    x10_long size = buf->org::scalegraph::util::MemoryChunk<x10_byte>::size();
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10LocalDecl_c
             i = ((x10_long) (((x10_int)0))); ; 
                                                //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10LocalAssign_c
                                                i = ((x10_long) ((i) + (((x10_long) (((x10_int)3)))))))
        {
            
            //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10LocalDecl_c
            x10_int x = this->random();
            
            //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10If_c
            if (((((x10_long) ((i) + (((x10_long) (((x10_int)2))))))) < (size)))
            {
                
                //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
                buf->org::scalegraph::util::MemoryChunk<x10_byte>::__set(
                  ((x10_long) ((i) + (((x10_long) (((x10_int)0)))))),
                  ((x10_byte) (((x10_int) ((((x10_int) ((x) >> (0x1f & (((x10_int)0)))))) & (((x10_int)255)))))));
                
                //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
                buf->org::scalegraph::util::MemoryChunk<x10_byte>::__set(
                  ((x10_long) ((i) + (((x10_long) (((x10_int)1)))))),
                  ((x10_byte) (((x10_int) ((((x10_int) ((x) >> (0x1f & (((x10_int)8)))))) & (((x10_int)255)))))));
                
                //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
                buf->org::scalegraph::util::MemoryChunk<x10_byte>::__set(
                  ((x10_long) ((i) + (((x10_long) (((x10_int)2)))))),
                  ((x10_byte) (((x10_int) ((((x10_int) ((x) >> (0x1f & (((x10_int)16)))))) & (((x10_int)255)))))));
            } else {
                
                //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10If_c
                if (((((x10_long) ((i) + (((x10_long) (((x10_int)0))))))) < (size)))
                {
                    
                    //#line 123 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
                    buf->org::scalegraph::util::MemoryChunk<x10_byte>::__set(
                      ((x10_long) ((i) + (((x10_long) (((x10_int)0)))))),
                      ((x10_byte) (((x10_int) ((((x10_int) ((x) >> (0x1f & (((x10_int)0)))))) & (((x10_int)255)))))));
                }
                
                //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10If_c
                if (((((x10_long) ((i) + (((x10_long) (((x10_int)1))))))) < (size)))
                {
                    
                    //#line 124 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10Call_c
                    buf->org::scalegraph::util::MemoryChunk<x10_byte>::__set(
                      ((x10_long) ((i) + (((x10_long) (((x10_int)1)))))),
                      ((x10_byte) (((x10_int) ((((x10_int) ((x) >> (0x1f & (((x10_int)8)))))) & (((x10_int)255)))))));
                }
                
                //#line 125 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
                return;
            }
            
        }
    }
    
}

//#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10_double org::scalegraph::util::random::Random::nextDouble(
  ){
    return mrg_get_double_orig(&(this)->FMGL(state));;
}

//#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10_float org::scalegraph::util::random::Random::nextFloat(
  ){
    return mrg_get_float_orig(&(this)->FMGL(state));;
}

//#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::random::Random::nextInt(x10_int maxPlus1) {
    
    //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10LocalDecl_c
    x10_int n = maxPlus1;
    
    //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10If_c
    if (((n) <= (((x10_int)0)))) {
        
        //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
    }
    
    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(((x10_int) ((n) & (((x10_int) -(n))))),
                               n))) {
        
        //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
        return ((x10_int) ((this->nextInt()) & (((x10_int) ((n) - (((x10_int)1)))))));
        
    }
    
    //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
    return ((x10_int) ((this->nextInt()) % x10aux::zeroCheck(maxPlus1)));
    
}

//#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::random::Random::nextLong(
  x10_long maxPlus1) {
    
    //#line 153 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10LocalDecl_c
    x10_long n = maxPlus1;
    
    //#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10If_c
    if (((n) <= (((x10_long) (((x10_int)0)))))) {
        
        //#line 154 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
    }
    
    //#line 155 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(((x10_long) ((n) & (((x10_long) -(n))))),
                               n))) {
        
        //#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
        return ((x10_long) ((this->nextLong()) & (((x10_long) ((n) - (((x10_long) (((x10_int)1)))))))));
        
    }
    
    //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
    return ((x10_long) ((((x10_long) (this->nextInt()))) % x10aux::zeroCheck(maxPlus1)));
    
}

//#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::random::Random::nextBoolean(
  ) {
    
    //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals(((x10_int) ((this->nextInt()) & (((x10_int)1)))),
                                  ((x10_int)0)));
    
}

//#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::random::Random* org::scalegraph::util::random::Random::org__scalegraph__util__random__Random____this__org__scalegraph__util__random__Random(
  ) {
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::random::Random::__fieldInitializers41795(
  ) {
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/random/Random.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(state) = x10aux::zeroValue<mrg_state >();
}
const x10aux::serialization_id_t org::scalegraph::util::random::Random::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::random::Random::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::random::Random::_serialize_body(x10aux::serialization_buffer& buf) {
    /* NOTE: Implements x10.io.CustomSerialization */
    buf.write(this->serialize());
    
}

x10::lang::Reference* org::scalegraph::util::random::Random::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::random::Random* this_ = new (memset(x10aux::alloc<org::scalegraph::util::random::Random>(), 0, sizeof(org::scalegraph::util::random::Random))) org::scalegraph::util::random::Random();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::random::Random::_deserialize_body(x10aux::deserialization_buffer& buf) {
    /* NOTE: Implements x10.io.CustomSerialization */
    x10::io::SerialData*val_ = buf.read<x10::io::SerialData*>();
    _constructor(val_);
    
}

x10aux::RuntimeType org::scalegraph::util::random::Random::rtt;
void org::scalegraph::util::random::Random::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::io::CustomSerialization>()};
    rtt.initStageTwo("org.scalegraph.util.random.Random",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of Random */
/*************************************************/

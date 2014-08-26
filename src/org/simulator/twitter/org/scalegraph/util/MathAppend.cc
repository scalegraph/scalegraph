/*************************************************/
/* START of MathAppend */
#include <org/scalegraph/util/MathAppend.h>


//#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_double org::scalegraph::util::MathAppend::norm(org::scalegraph::util::MemoryChunk<x10_double> vec) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_double res = 0.0;
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i47598domain47640 = vec->org::scalegraph::util::MemoryChunk<x10_double>::range();
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i47598min47641 = i47598domain47640->FMGL(min);
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i47598max47642 = i47598domain47640->FMGL(max);
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.For_c
    {
        x10_long i47643;
        for (
             //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
             i47643 = i47598min47641; ((i47643) <= (i47598max47642)); 
                                                                      //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
                                                                      i47643 =
                                                                        ((x10_long) ((i47643) + (((x10_long)1ll)))))
        {
            
            //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
            x10_long i47644 = i47643;
            
            //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
            res = ((res) + (((vec->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                i47644)) * (vec->org::scalegraph::util::MemoryChunk<x10_double>::__apply(
                                              i47644)))));
        }
    }
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::lang::MathNatives::sqrt(res);
    
}

//#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_double org::scalegraph::util::MathAppend::norm(org::scalegraph::util::MemoryChunk<x10_float> vec) {
    
    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_float res = 0.0f;
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i47615domain47645 = vec->org::scalegraph::util::MemoryChunk<x10_float>::range();
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i47615min47646 = i47615domain47645->FMGL(min);
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long i47615max47647 = i47615domain47645->FMGL(max);
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.For_c
    {
        x10_long i47648;
        for (
             //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
             i47648 = i47615min47646; ((i47648) <= (i47615max47647));
             
             //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
             i47648 = ((x10_long) ((i47648) + (((x10_long)1ll)))))
        {
            
            //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
            x10_long i47649 = i47648;
            
            //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
            res = ((res) + (((vec->org::scalegraph::util::MemoryChunk<x10_float>::__apply(
                                i47649)) * (vec->org::scalegraph::util::MemoryChunk<x10_float>::__apply(
                                              i47649)))));
        }
    }
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return x10::lang::MathNatives::sqrt(((x10_double) (res)));
    
}

//#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::MathAppend::floorLog2(x10_long p) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long pow2 = ((x10_long)1ll);
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_int i = ((x10_int)-1);
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10While_c
    while (((pow2) <= (p))) {
        
        //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        pow2 = ((x10_long) ((pow2) << (0x3f & (((x10_int)1)))));
        
        //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        i = ((x10_int) ((i) + (((x10_int)1))));
    }
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return i;
    
}

//#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::MathAppend::ceilLog2(x10_long p) {
    
    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long pow2 = ((x10_long)1ll);
    
    //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(p, ((x10_long)0ll)))) {
        
        //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
        return ((x10_int)-1);
        
    }
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_int i = ((x10_int)0);
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10While_c
    while (((pow2) < (p))) {
        
        //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        pow2 = ((x10_long) ((pow2) << (0x3f & (((x10_int)1)))));
        
        //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        i = ((x10_int) ((i) + (((x10_int)1))));
    }
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return i;
    
}

//#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::MathAppend::nextPowerOf2(
  x10_long p) {
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(p, ((x10_long)0ll)))) {
        
        //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
        return ((x10_long) (((x10_int)0)));
        
    }
    
    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_long pow2 = ((x10_long)1ll);
    
    //#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10While_c
    while (((pow2) < (p))) {
        
        //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        pow2 = ((x10_long) ((pow2) << (0x3f & (((x10_int)1)))));
    }
    
    //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return pow2;
    
}

//#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::MathAppend::powerOf2(x10_long p) {
    
    //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals(((x10_long) ((p) & (((x10_long) -(p))))),
                                  p));
    
}

//#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::MathAppend::log2(x10_long p) {
    
    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert(org::scalegraph::util::MathAppend::powerOf2(
                              p));
    #endif//NO_ASSERTIONS
    
    //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10LocalDecl_c
    x10_int i = ((x10_int)0);
    
    //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10While_c
    while (((p) > (((x10_long) (((x10_int)1)))))) {
        
        //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        p = ((x10_long) ((p) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))));
        
        //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": Eval of x10.ast.X10LocalAssign_c
        i = ((x10_int) ((i) + (((x10_int)1))));
    }
    
    //#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return ((x10_long) (i));
    
}

//#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::MathAppend::pow2(x10_int i) {
    
    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return ((x10_long) ((((x10_long)1ll)) << (0x3f & (i))));
    
}

//#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MathAppend* org::scalegraph::util::MathAppend::org__scalegraph__util__MathAppend____this__org__scalegraph__util__MathAppend(
  ) {
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::MathAppend::_constructor() {
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": polyglot.ast.Empty_c
    ;
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/MathAppend.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::util::MathAppend* org::scalegraph::util::MathAppend::_make(
  ) {
    org::scalegraph::util::MathAppend* this_ = new (memset(x10aux::alloc<org::scalegraph::util::MathAppend>(), 0, sizeof(org::scalegraph::util::MathAppend))) org::scalegraph::util::MathAppend();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::util::MathAppend::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::MathAppend::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::MathAppend::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::util::MathAppend::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::MathAppend* this_ = new (memset(x10aux::alloc<org::scalegraph::util::MathAppend>(), 0, sizeof(org::scalegraph::util::MathAppend))) org::scalegraph::util::MathAppend();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::MathAppend::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::util::MathAppend::rtt;
void org::scalegraph::util::MathAppend::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.MathAppend",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of MathAppend */
/*************************************************/

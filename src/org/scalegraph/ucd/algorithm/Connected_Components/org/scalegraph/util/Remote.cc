/*************************************************/
/* START of Remote */
#include <org/scalegraph/util/Remote.h>


//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Remote::debugprint(x10::lang::String* tag) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast<x10::lang::Any*>(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("Place: "), x10::lang::Place::_make(x10aux::here)->
                                                                                                                                                                                                                      FMGL(id)), x10aux::makeStringLit(": Remote: ")), tag)));
}

//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10_long>* org::scalegraph::util::Remote::splitChunks(
  x10::lang::LongRange range) {
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long size = ((x10_long) ((((x10_long) ((range->FMGL(max)) - (range->
                                                                       FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(size, ((x10_long)0ll)))) {
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10Return_c
        return (x10::array::Array<x10_long>*)(__extension__ ({
            x10::array::Array<x10_long>* __var1383__(x10::array::Array<x10_long>::_make(2));
            __var1383__->__set(0, 
            (((x10_long)0ll)));
            __var1383__->__set(1, 
            (size));
            __var1383__;
        }));
        
    }
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long nthreads = (__extension__ ({
        
        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a124946 = ((x10_long) (x10::lang::Runtime::FMGL(NTHREADS__get)()));
        
        //#line 352 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long b124947 = size;
        ((a124946) < (b124947)) ? (a124946) : (b124947);
    }))
    ;
    
    //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a124948 = ((x10_long) ((((x10_long) ((((x10_long) ((size) + (nthreads)))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(nthreads)));
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": polyglot.ast.Empty_c
        ;
        ((a124948) < (((x10_long)1ll))) ? (((x10_long)1ll)) : (a124948);
    }))
    ;
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10Return_c
    return (x10::array::Array<x10_long>*)(__extension__ ({
        x10::array::Array<x10_long>* __var1384__(x10::array::Array<x10_long>::_make(2));
        __var1384__->__set(0, 
        (nthreads));
        __var1384__->__set(1, 
        (chunk_size));
        __var1384__;
    }));
    
}

//#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10MethodDecl_c

//#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10MethodDecl_c

//#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10MethodDecl_c

//#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10MethodDecl_c

//#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Remote* org::scalegraph::util::Remote::org__scalegraph__util__Remote____this__org__scalegraph__util__Remote(
  ) {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Remote::_constructor() {
    
    //#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Remote.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::util::Remote* org::scalegraph::util::Remote::_make(
  ) {
    org::scalegraph::util::Remote* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Remote>(), 0, sizeof(org::scalegraph::util::Remote))) org::scalegraph::util::Remote();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t org::scalegraph::util::Remote::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::Remote::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::Remote::_serialize_body(x10aux::serialization_buffer& buf) {
    
}

x10::lang::Reference* org::scalegraph::util::Remote::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::Remote* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Remote>(), 0, sizeof(org::scalegraph::util::Remote))) org::scalegraph::util::Remote();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::Remote::_deserialize_body(x10aux::deserialization_buffer& buf) {
    
}

x10aux::RuntimeType org::scalegraph::util::Remote::rtt;
void org::scalegraph::util::Remote::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.Remote",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Remote */
/*************************************************/

/*************************************************/
/* START of SStringBuilder */
#include <org/scalegraph/util/SStringBuilder.h>

namespace org { namespace scalegraph { namespace util { 
class SStringBuilder_ibox0 : public x10::lang::IBox<org::scalegraph::util::SStringBuilder> {
public:
    static x10::lang::Any::itable<SStringBuilder_ibox0 > itable;
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
x10::lang::Any::itable<SStringBuilder_ibox0 >  SStringBuilder_ibox0::itable(&SStringBuilder_ibox0::equals, &SStringBuilder_ibox0::hashCode, &SStringBuilder_ibox0::toString, &SStringBuilder_ibox0::typeName);
} } } 
x10::lang::Any::itable<org::scalegraph::util::SStringBuilder >  org::scalegraph::util::SStringBuilder::_itable_0(&org::scalegraph::util::SStringBuilder::equals, &org::scalegraph::util::SStringBuilder::hashCode, &org::scalegraph::util::SStringBuilder::toString, &org::scalegraph::util::SStringBuilder::typeName);
x10aux::itable_entry org::scalegraph::util::SStringBuilder::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::SStringBuilder::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::SStringBuilder>())};
x10aux::itable_entry org::scalegraph::util::SStringBuilder::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::SStringBuilder_ibox0::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::SStringBuilder>())};

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10FieldDecl_c

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10ConstructorDecl_c


//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SStringBuilder::_constructor(org::scalegraph::util::SString str) {
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Empty_c
    ;
    
    //#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.AssignPropertyCall_c
    
    //#line 18 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    (*this)->org::scalegraph::util::SStringBuilder::__fieldInitializers67609();
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setMemory(
      str->org::scalegraph::util::SString::bytes());
}
org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::_make(
  org::scalegraph::util::SString str) {
    org::scalegraph::util::SStringBuilder this_; 
    this_->_constructor(str);
    return this_;
}



//#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::SStringBuilder::capacity(
  ) {
    
    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::capacity();
    
}

//#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::clear() {
    
    //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::clear();
}

//#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::_kwd__delete(
  x10_int start, x10_int end) {
    
    //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_long buf_size = x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::size();
    
    //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (((start) > (end))) {
        
        //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("start > end"))));
    }
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (((((x10_long) (end))) > (buf_size))) {
        
        //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("end > size()"))));
    }
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
      x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
      ((x10_long) (end)), x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
      ((x10_long) (start)), ((x10_long) ((buf_size) - (((x10_long) (end))))));
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setSize(
      ((x10_long) ((((x10_long) ((buf_size) - (((x10_long) (end)))))) + (((x10_long) (start))))));
}

//#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::grow(x10_int minCapacity) {
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::grow(
      ((x10_long) (minCapacity)));
}

//#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::indexOf(org::scalegraph::util::SString str) {
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(buffer)->raw(), (str).FMGL(content), ((x10_int)0));
    
}

//#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::indexOf(org::scalegraph::util::SString str,
                                                       x10_int idx){
    return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(buffer)->raw(), (str).FMGL(content), idx);
}

//#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::lastIndexOf(
  org::scalegraph::util::SString str) {
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(buffer)->raw(), (str).FMGL(content), ((x10_int)0));
    
}

//#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::lastIndexOf(
  org::scalegraph::util::SString str, x10_int idx){
    return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(buffer)->raw(), (str).FMGL(content), idx);
}

//#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SStringBuilder::result(
  ) {
    
    //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString::_make(x10aux::nullCheck((*this)->
                                                                     FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw()->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                                   ((x10_long) (((x10_int)0))),
                                                   (*this)->org::scalegraph::util::SStringBuilder::size()));
    
}

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::replace(x10_int start,
                                                    x10_int end,
                                                    org::scalegraph::util::SString str) {
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_long buf_size = x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::size();
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (((start) > (end))) {
        
        //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("start > end"))));
    }
    
    //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (((((x10_long) (end))) > (buf_size))) {
        
        //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("end > size()"))));
    }
    
    //#line 85 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_int str_size = str->org::scalegraph::util::SString::size();
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_long new_size = ((x10_long) ((((x10_long) ((((x10_long) ((((x10_long) (start))) + (buf_size)))) - (((x10_long) (end)))))) + (((x10_long) (str_size)))));
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setSize(
      new_size);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
      x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
      ((x10_long) (start)), x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
      ((x10_long) (end)), ((x10_long) ((buf_size) - (((x10_long) (start))))));
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setSize(
      new_size);
}

//#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::reverse() {
    
    //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_int left = ((x10_int)0);
    
    //#line 95 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_int right = ((x10_int) ((((x10_int) (x10aux::nullCheck((*this)->
                                                                 FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::size()))) - (((x10_int)1))));
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> buf = x10aux::nullCheck((*this)->
                                                                           FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw();
    
    //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10While_c
    while (((left) < (right))) {
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        x10_byte tmp = buf->org::scalegraph::util::MemoryChunk<x10_byte>::__apply(
                         left);
        
        //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::MemoryChunk<x10_byte>::__set(
          left, buf->org::scalegraph::util::MemoryChunk<x10_byte>::__apply(
                  right));
        
        //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
        buf->org::scalegraph::util::MemoryChunk<x10_byte>::__set(
          right, tmp);
    }
    
}

//#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::SStringBuilder::size() {
    
    //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::size();
    
}

//#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SStringBuilder::substring(
  x10_int start) {
    
    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::SStringBuilder::substring(
             start, ((x10_int) ((((x10_int) (x10aux::nullCheck((*this)->
                                                                 FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::size()))) - (start))));
    
}

//#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SStringBuilder::substring(
  x10_int start, x10_int end) {
    
    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString::_make(x10aux::nullCheck((*this)->
                                                                     FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw()->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                                   ((x10_long) (start)),
                                                   ((x10_long) (((x10_int) ((end) - (start)))))));
    
}

//#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::SStringBuilder::toString(
  ) {
    
    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return x10::lang::String::_make(reinterpret_cast<char*>(((*this)->org::scalegraph::util::SStringBuilder::result()).c_str()), true);
    
}

//#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::trimToSize() {
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::shrink(
      ((x10_long) (((x10_int)0))));
}

//#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::_helper(int sh) {
 
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::SStringBuilder::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::hashCode() {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(buffer)))));
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SStringBuilder::equals(
  x10::lang::Any* other) {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::SStringBuilder>(other)))
    {
        
        //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::SStringBuilder::equals(
             x10aux::class_cast<org::scalegraph::util::SStringBuilder>(other));
    
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SStringBuilder::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::SStringBuilder>(other)))
    {
        
        //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::SStringBuilder::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::SStringBuilder>(other));
    
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 18 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 18 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::__fieldInitializers67609(
  ) {
    
    //#line 18 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(buffer) = org::scalegraph::util::GrowableMemory<x10_byte>::_make();
}
void org::scalegraph::util::SStringBuilder::_serialize(org::scalegraph::util::SStringBuilder this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(buffer));
    
}

void org::scalegraph::util::SStringBuilder::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(buffer) = buf.read<org::scalegraph::util::GrowableMemory<x10_byte>*>();
}


x10aux::RuntimeType org::scalegraph::util::SStringBuilder::rtt;
void org::scalegraph::util::SStringBuilder::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    rtt.initStageTwo("org.scalegraph.util.SStringBuilder",x10aux::RuntimeType::struct_kind, 2, parents, 0, NULL, NULL);
}

/* END of SStringBuilder */
/*************************************************/

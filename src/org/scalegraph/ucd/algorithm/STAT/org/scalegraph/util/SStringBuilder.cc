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

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10FieldDecl_c

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SStringBuilder::_constructor() {
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.AssignPropertyCall_c
    
    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SStringBuilder this121495 = (*this);
    
    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
    this121495->FMGL(buffer) = (__extension__ ({
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* alloc121494 =  ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc121494)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
          ((x10_long)0ll));
        alloc121494;
    }))
    ;
}
org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::_make(
  ) {
    org::scalegraph::util::SStringBuilder this_; 
    this_->_constructor();
    return this_;
}



//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::SStringBuilder::_constructor(
  org::scalegraph::util::SString str) {
    
    //#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.AssignPropertyCall_c
    
    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SStringBuilder this121497 = (*this);
    
    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
    this121497->FMGL(buffer) = (__extension__ ({
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* alloc121496 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc121496)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
          ((x10_long)0ll));
        alloc121496;
    }))
    ;
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setMemory(
      (__extension__ ({
          str->FMGL(content);
      }))
      );
}
org::scalegraph::util::SStringBuilder org::scalegraph::util::SStringBuilder::_make(
  org::scalegraph::util::SString str) {
    org::scalegraph::util::SStringBuilder this_; 
    this_->_constructor(str);
    return this_;
}



//#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::SStringBuilder::capacity(
  ) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* this121463 =
          (*this)->FMGL(buffer);
        (__extension__ ({
            
            //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> this121464 =
              x10aux::nullCheck(this121463)->FMGL(mc);
            this121464->FMGL(data)->FMGL(size);
        }))
        ;
    }))
    ;
    
}

//#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::clear() {
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<x10_byte>* this121498 =
      (*this)->FMGL(buffer);
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this121498)->FMGL(size) = ((x10_long) (((x10_int)0)));
}

//#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::_kwd__delete(
  x10_int start, x10_int end) {
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_long buf_size = (__extension__ ({
        
        //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* this121468 =
          (*this)->FMGL(buffer);
        x10aux::nullCheck(this121468)->FMGL(size);
    }))
    ;
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (((start) > (end))) {
        
        //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("start > end"))));
    }
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (((((x10_long) (end))) > (buf_size))) {
        
        //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("end > size()"))));
    }
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
      x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
      ((x10_long) (end)), x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
      ((x10_long) (start)), ((x10_long) ((buf_size) - (((x10_long) (end))))));
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setSize(
      ((x10_long) ((((x10_long) ((buf_size) - (((x10_long) (end)))))) + (((x10_long) (start))))));
}

//#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::grow(x10_int minCapacity) {
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::grow(
      ((x10_long) (minCapacity)));
}

//#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::indexOf(org::scalegraph::util::SString str) {
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(buffer)->raw(), (str).FMGL(content), ((x10_int)0));
    
}

//#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::indexOf(org::scalegraph::util::SString str,
                                                       x10_int idx){
    return org::scalegraph::util::StringIndexOf_(((*this)).FMGL(buffer)->raw(), (str).FMGL(content), idx);
}

//#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::lastIndexOf(
  org::scalegraph::util::SString str) {
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(buffer)->raw(), (str).FMGL(content), ((x10_int)0));
    
}

//#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::lastIndexOf(
  org::scalegraph::util::SString str, x10_int idx){
    return org::scalegraph::util::StringLastIndexOf_(((*this)).FMGL(buffer)->raw(), (str).FMGL(content), idx);
}

//#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SStringBuilder::result(
  ) {
    
    //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc106147 =  org::scalegraph::util::SString::_alloc();
        
        //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10ConstructorCall_c
        (alloc106147)->::org::scalegraph::util::SString::_constructor(
          x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw()->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (((x10_int)0))), (__extension__ ({
                
                //#line 79 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SStringBuilder this121469 =
                  (*this);
                (__extension__ ({
                    
                    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::GrowableMemory<x10_byte>* this121470 =
                      this121469->FMGL(buffer);
                    x10aux::nullCheck(this121470)->FMGL(size);
                }))
                ;
            }))
            ));
        alloc106147;
    }))
    ;
    
}

//#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::replace(x10_int start,
                                                    x10_int end,
                                                    org::scalegraph::util::SString str) {
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_long buf_size = (__extension__ ({
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* this121471 =
          (*this)->FMGL(buffer);
        x10aux::nullCheck(this121471)->FMGL(size);
    }))
    ;
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (((start) > (end))) {
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("start > end"))));
    }
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (((((x10_long) (end))) > (buf_size))) {
        
        //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("end > size()"))));
    }
    
    //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_int str_size = str->org::scalegraph::util::SString::size();
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_long new_size = ((x10_long) ((((x10_long) ((((x10_long) ((((x10_long) (start))) + (buf_size)))) - (((x10_long) (end)))))) + (((x10_long) (str_size)))));
    
    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setSize(
      new_size);
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
      x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
      ((x10_long) (start)), x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
      ((x10_long) (end)), ((x10_long) ((buf_size) - (((x10_long) (start))))));
    
    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setSize(
      new_size);
}

//#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::reverse() {
    
    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_int left = ((x10_int)0);
    
    //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_int right = ((x10_int) ((((x10_int) ((__extension__ ({
        
        //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* this121472 =
          (*this)->FMGL(buffer);
        x10aux::nullCheck(this121472)->FMGL(size);
    }))
    ))) - (((x10_int)1))));
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> buf = x10aux::nullCheck((*this)->
                                                                           FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw();
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10While_c
    while (((left) < (right))) {
        
        //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        x10_byte tmp = (__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index121473 = left;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_byte ret121474;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((buf->FMGL(data)).isValid())) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index121473) < (((x10_int)0))) || ((((x10_long) (index121473))) >= (buf->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121473), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret121474 = (buf->FMGL(data))[index121473];
            ret121474;
        }))
        ;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index121499 = left;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_byte value121500 = (__extension__ ({
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index121501 = right;
            
            //#line 257 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_byte ret121502;
            {
                
                //#line 259 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((buf->FMGL(data)).isValid())) {
                    
                    //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 260 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 261 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index121501) < (((x10_int)0))) || ((((x10_long) (index121501))) >= (buf->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 262 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121501), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 264 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret121502 = (buf->FMGL(data))[index121501];
            ret121502;
        }))
        ;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_byte ret121503;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((buf->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121499) < (((x10_int)0))) || ((((x10_long) (index121499))) >= (buf->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121499), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (buf->FMGL(data)).set(index121499, value121500);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121503 = value121500;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret121503;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_int index121504 = right;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_byte value121505 = tmp;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_byte ret121506;
        {
            
            //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((buf->FMGL(data)).isValid())) {
                
                //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index121504) < (((x10_int)0))) || ((((x10_long) (index121504))) >= (buf->
                                                                                        FMGL(data)->
                                                                                        FMGL(size))))
            {
                
                //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index121504), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
        (buf->FMGL(data)).set(index121504, value121505);
        
        //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret121506 = value121505;
        
        //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
        ret121506;
    }
    
}

//#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::SStringBuilder::size() {
    
    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* this121487 =
          (*this)->FMGL(buffer);
        x10aux::nullCheck(this121487)->FMGL(size);
    }))
    ;
    
}

//#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SStringBuilder::substring(
  x10_int start) {
    
    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::SStringBuilder::substring(
             start, ((x10_int) ((((x10_int) ((__extension__ ({
                 
                 //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
                 org::scalegraph::util::GrowableMemory<x10_byte>* this121488 =
                   (*this)->FMGL(buffer);
                 x10aux::nullCheck(this121488)->FMGL(size);
             }))
             ))) - (start))));
    
}

//#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::util::SStringBuilder::substring(
  x10_int start, x10_int end) {
    
    //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc106148 =  org::scalegraph::util::SString::_alloc();
        
        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10ConstructorCall_c
        (alloc106148)->::org::scalegraph::util::SString::_constructor(
          x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw()->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (start)), ((x10_long) (((x10_int) ((end) - (start)))))));
        alloc106148;
    }))
    ;
    
}

//#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::SStringBuilder::toString(
  ) {
    
    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return x10::lang::String::_make(reinterpret_cast<char*>(((*this)->org::scalegraph::util::SStringBuilder::result()).c_str()), true);
    
}

//#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::trimToSize() {
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck((*this)->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::shrink(
      ((x10_long) (((x10_int)0))));
}

//#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::_helper(int sh) {
 
}

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10::lang::String* org::scalegraph::util::SStringBuilder::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::util::SStringBuilder::hashCode() {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(buffer)))));
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SStringBuilder::equals(
  x10::lang::Any* other) {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::SStringBuilder>(other)))
    {
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SStringBuilder this121490 =
          (*this);
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SStringBuilder other121489 =
          x10aux::class_cast<org::scalegraph::util::SStringBuilder>(other);
        (x10aux::struct_equals(this121490->FMGL(buffer), other121489->
                                                           FMGL(buffer)));
    }))
    ;
    
}

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::SStringBuilder::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::SStringBuilder>(other)))
    {
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SStringBuilder this121492 =
          (*this);
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SStringBuilder other121491 =
          x10aux::class_cast<org::scalegraph::util::SStringBuilder>(other);
        (x10aux::struct_equals(this121492->FMGL(buffer), other121491->
                                                           FMGL(buffer)));
    }))
    ;
    
}

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c

//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::SStringBuilder::__fieldInitializers106027(
  ) {
    
    //#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(buffer) = (__extension__ ({
        
        //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SStringBuilder.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* alloc106149 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc106149)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
          ((x10_long)0ll));
        alloc106149;
    }))
    ;
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

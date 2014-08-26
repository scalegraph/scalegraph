/*************************************************/
/* START of NamedDistData */
#include <org/scalegraph/io/NamedDistData.h>


//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 26 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10_int>* org::scalegraph::io::NamedDistData::createTypeId(
  x10::array::Array<x10::lang::Any*>* data) {
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_int>* typeId = x10::array::Array<x10_int>::_make(x10aux::nullCheck(data)->
                                                                             FMGL(size));
    
    //#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id48753;
        for (
             //#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
             id48753 = x10aux::nullCheck(data)->FMGL(region)->iterator();
             x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id48753));
             ) {
            
            //#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id505 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id48753));
            
            //#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id505)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10Call_c
            typeId->x10::array::Array<x10_int>::__set(i, org::scalegraph::id::Type::typeId(
                                                           x10aux::nullCheck(data)->x10::array::Array<x10::lang::Any*>::__apply(
                                                             i)));
        }
    }
    
    //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return typeId;
    
}

//#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10::lang::String*>* org::scalegraph::io::NamedDistData::createName(
  x10::array::Array<x10::lang::Any*>* data) {
    
    //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::String*>* name = x10::array::Array<x10::lang::String*>::_make(x10aux::nullCheck(data)->
                                                                                                 FMGL(size));
    
    //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id48761;
        for (
             //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
             id48761 = x10aux::nullCheck(data)->FMGL(region)->iterator();
             x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id48761));
             ) {
            
            //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id506 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id48761));
            
            //#line 39 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id506)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 40 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10Call_c
            name->x10::array::Array<x10::lang::String*>::__set(
              i, x10::lang::String::format(x10aux::makeStringLit("column-%d"),(x10::array::Array<x10::lang::Any*>*)(__extension__ ({
                  x10::array::Array<x10::lang::Any*>* __var439__(x10::array::Array<x10::lang::Any*>::_make(1));
                  __var439__->__set(0, 
                  (x10aux::class_cast_unchecked<x10::lang::Any*>(i)));
                  __var439__;
              }))));
        }
    }
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return name;
    
}

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::NamedDistData::_constructor(x10::array::Array<x10::lang::Any*>* data_) {
    
    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::io::NamedDistData::_constructor(
      x10aux::class_cast_unchecked<x10::array::Array<x10::lang::String*>*>(X10_NULL),
      x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL),
      data_, x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
    
}
org::scalegraph::io::NamedDistData* org::scalegraph::io::NamedDistData::_make(
  x10::array::Array<x10::lang::Any*>* data_) {
    org::scalegraph::io::NamedDistData* this_ = new (memset(x10aux::alloc<org::scalegraph::io::NamedDistData>(), 0, sizeof(org::scalegraph::io::NamedDistData))) org::scalegraph::io::NamedDistData();
    this_->_constructor(data_);
    return this_;
}



//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::NamedDistData::_constructor(x10::array::Array<x10::lang::String*>* name_,
                                                      x10::array::Array<x10::lang::Any*>* data_) {
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::io::NamedDistData::_constructor(
      name_, x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL),
      data_, x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
    
}
org::scalegraph::io::NamedDistData* org::scalegraph::io::NamedDistData::_make(
  x10::array::Array<x10::lang::String*>* name_, x10::array::Array<x10::lang::Any*>* data_)
{
    org::scalegraph::io::NamedDistData* this_ = new (memset(x10aux::alloc<org::scalegraph::io::NamedDistData>(), 0, sizeof(org::scalegraph::io::NamedDistData))) org::scalegraph::io::NamedDistData();
    this_->_constructor(name_, data_);
    return this_;
}



//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::NamedDistData::_constructor(x10::array::Array<x10::lang::String*>* name_,
                                                      x10::array::Array<x10::lang::Any*>* data_,
                                                      x10::lang::Any* header_) {
    
    //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::io::NamedDistData::_constructor(
      name_, x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL),
      data_, header_);
    
}
org::scalegraph::io::NamedDistData* org::scalegraph::io::NamedDistData::_make(
  x10::array::Array<x10::lang::String*>* name_, x10::array::Array<x10::lang::Any*>* data_,
  x10::lang::Any* header_) {
    org::scalegraph::io::NamedDistData* this_ = new (memset(x10aux::alloc<org::scalegraph::io::NamedDistData>(), 0, sizeof(org::scalegraph::io::NamedDistData))) org::scalegraph::io::NamedDistData();
    this_->_constructor(name_, data_, header_);
    return this_;
}



//#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::NamedDistData::_constructor(x10::array::Array<x10::lang::String*>* name_,
                                                      x10::array::Array<x10_int>* typeId_,
                                                      x10::array::Array<x10::lang::Any*>* data_,
                                                      x10::lang::Any* header_) {
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Empty_c
    ;
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.AssignPropertyCall_c
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::io::NamedDistData::__fieldInitializers48685();
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(data_, X10_NULL))) {
        
        //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("data may not be null"))));
    }
    
    //#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(name_, X10_NULL))) {
        
        //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10LocalAssign_c
        name_ = org::scalegraph::io::NamedDistData::createName(
                  data_);
    }
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(typeId_, X10_NULL))) {
        
        //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10LocalAssign_c
        typeId_ = org::scalegraph::io::NamedDistData::createTypeId(
                    data_);
    }
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(name) = name_;
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(typeId) = typeId_;
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(data) = data_;
    
    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(header) = header_;
    
    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(datatype) = (x10aux::struct_equals(header_,
                                                  X10_NULL))
      ? (org::scalegraph::io::ID::FMGL(HEADER_NONE__get)())
      : (x10aux::instanceof<org::scalegraph::io::GraphHeader*>(header_)
           ? (org::scalegraph::io::ID::FMGL(HEADER_GRAPH__get)())
           : (x10aux::instanceof<org::scalegraph::io::MatrixHeader*>(header_)
                ? (org::scalegraph::io::ID::FMGL(HEADER_MATRIX__get)())
                : (x10aux::instanceof<org::scalegraph::io::VectorHeader*>(header_)
                     ? (org::scalegraph::io::ID::FMGL(HEADER_VECTOR__get)())
                     : (org::scalegraph::io::ID::FMGL(HEADER_ANY__get)()))));
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(x10aux::nullCheck(this->FMGL(name))->
                                  FMGL(size), x10aux::nullCheck(this->
                                                                  FMGL(typeId))->
                                                FMGL(size))) ||
        (!x10aux::struct_equals(x10aux::nullCheck(this->FMGL(name))->
                                  FMGL(size), x10aux::nullCheck(this->
                                                                  FMGL(data))->
                                                FMGL(size))))
    {
        
        //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Check the array length!"))));
    }
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id48769;
        for (
             //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
             id48769 = x10aux::nullCheck(this->FMGL(name))->
                         FMGL(region)->iterator(); x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id48769));
             ) {
            
            //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id507 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id48769));
            
            //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id507)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
            if (!(org::scalegraph::id::Type::checkType(x10aux::nullCheck(this->
                                                                           FMGL(data))->x10::array::Array<x10::lang::Any*>::__apply(
                                                         i),
                                                       x10aux::nullCheck(this->
                                                                           FMGL(typeId))->x10::array::Array<x10_int>::__apply(
                                                         i))))
            {
                
                //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Type ID is not match to the actual data type."))));
            }
            
        }
    }
    
}
org::scalegraph::io::NamedDistData* org::scalegraph::io::NamedDistData::_make(
  x10::array::Array<x10::lang::String*>* name_, x10::array::Array<x10_int>* typeId_,
  x10::array::Array<x10::lang::Any*>* data_, x10::lang::Any* header_)
{
    org::scalegraph::io::NamedDistData* this_ = new (memset(x10aux::alloc<org::scalegraph::io::NamedDistData>(), 0, sizeof(org::scalegraph::io::NamedDistData))) org::scalegraph::io::NamedDistData();
    this_->_constructor(name_, typeId_, data_, header_);
    return this_;
}



//#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::io::NamedDistData::nameToIndex(org::scalegraph::util::SString name_) {
    
    //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id48777;
        for (
             //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
             id48777 = x10aux::nullCheck(this->FMGL(name))->
                         FMGL(region)->iterator(); x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id48777));
             ) {
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id508 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id48777));
            
            //#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id508)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
            if (name_->org::scalegraph::util::SString::equals(
                  reinterpret_cast<x10::lang::Any*>(x10aux::nullCheck(this->
                                                                        FMGL(name))->x10::array::Array<x10::lang::String*>::__apply(
                                                      i))))
            {
                
                //#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
                return i;
                
            }
            
        }
    }
    
    //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Specified name does not exist"))));
}

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c

//#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c

//#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::io::NamedDistData::size() {
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(name))->FMGL(size);
    
}

//#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10::lang::String*>* org::scalegraph::io::NamedDistData::name(
  ) {
    
    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return this->FMGL(name);
    
}

//#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10::lang::Any*>* org::scalegraph::io::NamedDistData::data(
  ) {
    
    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return this->FMGL(data);
    
}

//#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10_int>* org::scalegraph::io::NamedDistData::typeId(
  ) {
    
    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return this->FMGL(typeId);
    
}

//#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10::lang::Any* org::scalegraph::io::NamedDistData::header(
  ) {
    
    //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return this->FMGL(header);
    
}

//#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10_byte org::scalegraph::io::NamedDistData::datatype() {
    
    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return this->FMGL(datatype);
    
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::NamedDistData* org::scalegraph::io::NamedDistData::org__scalegraph__io__NamedDistData____this__org__scalegraph__io__NamedDistData(
  ) {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::NamedDistData::__fieldInitializers48685(
  ) {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(datatype) = ((x10_byte)0);
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(header) = (x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
}
const x10aux::serialization_id_t org::scalegraph::io::NamedDistData::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::NamedDistData::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::NamedDistData::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(name));
    buf.write(this->FMGL(typeId));
    buf.write(this->FMGL(data));
    buf.write(this->FMGL(datatype));
    buf.write(this->FMGL(header));
    
}

x10::lang::Reference* org::scalegraph::io::NamedDistData::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::NamedDistData* this_ = new (memset(x10aux::alloc<org::scalegraph::io::NamedDistData>(), 0, sizeof(org::scalegraph::io::NamedDistData))) org::scalegraph::io::NamedDistData();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::NamedDistData::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(name) = buf.read<x10::array::Array<x10::lang::String*>*>();
    FMGL(typeId) = buf.read<x10::array::Array<x10_int>*>();
    FMGL(data) = buf.read<x10::array::Array<x10::lang::Any*>*>();
    FMGL(datatype) = buf.read<x10_byte>();
    FMGL(header) = buf.read<x10::lang::Any*>();
}

x10aux::RuntimeType org::scalegraph::io::NamedDistData::rtt;
void org::scalegraph::io::NamedDistData::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.NamedDistData",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of NamedDistData */
/*************************************************/

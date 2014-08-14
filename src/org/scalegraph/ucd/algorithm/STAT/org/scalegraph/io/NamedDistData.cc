/*************************************************/
/* START of NamedDistData */
#include <org/scalegraph/io/NamedDistData.h>


//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10FieldDecl_c

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10_int>* org::scalegraph::io::NamedDistData::createTypeId(
  x10::array::Array<x10::lang::Any*>* data) {
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10_int>* typeId =  ((new (memset(x10aux::alloc<x10::array::Array<x10_int> >(), 0, sizeof(x10::array::Array<x10_int>))) x10::array::Array<x10_int>()))
    ;
    
    //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size84752 = x10aux::nullCheck(data)->FMGL(size);
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg84745 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg84745)->::x10::array::RectRegion1D::_constructor(((x10_int) ((size84752) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg84745);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(size) = size84752;
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(layout_min0) = typeId->FMGL(layout_stride1) = typeId->FMGL(layout_min1) =
      ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    typeId->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10_int >(size84752, 8, false, true);
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id82602;
        for (
             //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
             id82602 = x10aux::nullCheck(data)->FMGL(region)->iterator();
             x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id82602));
             ) {
            
            //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id25 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id82602));
            
            //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id25)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i84746 = i;
            
            //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int v84747 = org::scalegraph::id::Type::typeId(
                               (__extension__ ({
                                   
                                   //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                   x10_int i84748 = i;
                                   
                                   //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                   x10::lang::Any* ret84749;
                                   
                                   //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                   goto __ret84750; __ret84750: {
                                   {
                                       
                                       //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                       if (x10aux::nullCheck(data)->
                                             FMGL(rail)) {
                                           
                                           //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret84749 = (x10aux::nullCheck(data)->
                                                         FMGL(raw))->__apply(i84748);
                                           
                                           //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                           goto __ret84750_end_;
                                       } else {
                                           
                                           //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                           if (true && !(x10aux::nullCheck(data)->
                                                           FMGL(region)->contains(
                                                           i84748)))
                                           {
                                               
                                               //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                               x10::array::Array<void>::raiseBoundsError(
                                                 i84748);
                                           }
                                           
                                           //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                           ret84749 = (x10aux::nullCheck(data)->
                                                         FMGL(raw))->__apply(((x10_int) ((i84748) - (x10aux::nullCheck(data)->
                                                                                                       FMGL(layout_min0)))));
                                           
                                           //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                           goto __ret84750_end_;
                                       }
                                       
                                   }goto __ret84750_end_; __ret84750_end_: ;
                                   }
                                   ret84749;
                                   }))
                                   );
                             
            
            //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int ret84751;
            
            //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (typeId->FMGL(raw))->__set(i84746, v84747);
            
            //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
            ret84751 = v84747;
            
            //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
            ret84751;
            }
        }
        
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return typeId;
    }
    

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
x10::array::Array<x10::lang::String*>* org::scalegraph::io::NamedDistData::createName(
  x10::array::Array<x10::lang::Any*>* data) {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<x10::lang::String*>* name =  ((new (memset(x10aux::alloc<x10::array::Array<x10::lang::String*> >(), 0, sizeof(x10::array::Array<x10::lang::String*>))) x10::array::Array<x10::lang::String*>()))
    ;
    
    //#line 268 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10_int size84757 = x10aux::nullCheck(data)->FMGL(size);
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
    x10::array::RectRegion1D* myReg84753 =  ((new (memset(x10aux::alloc<x10::array::RectRegion1D>(), 0, sizeof(x10::array::RectRegion1D))) x10::array::RectRegion1D()))
    ;
    
    //#line 270 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10ConstructorCall_c
    (myReg84753)->::x10::array::RectRegion1D::_constructor(
      ((x10_int) ((size84757) - (((x10_int)1)))));
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(region) = reinterpret_cast<x10::array::Region*>(myReg84753);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(rank) = ((x10_int)1);
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(rect) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(zeroBased) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(rail) = true;
    
    //#line 271 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(size) = size84757;
    
    //#line 273 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(layout_min0) = name->FMGL(layout_stride1) =
      name->FMGL(layout_min1) = ((x10_int)0);
    
    //#line 274 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(layout) = (x10aux::class_cast_unchecked<x10::array::Array<x10_int>*>(X10_NULL));
    
    //#line 275 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10FieldAssign_c
    name->FMGL(raw) = x10::util::IndexedMemoryChunk<void>::allocate<x10::lang::String* >(size84757, 8, false, true);
    
    //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id82611;
        for (
             //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
             id82611 = x10aux::nullCheck(data)->FMGL(region)->iterator();
             x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id82611));
             ) {
            
            //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id26 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id82611));
            
            //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id26)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10_int i84754 = i;
            
            //#line 554 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* v84755 = x10::lang::String::format(x10aux::makeStringLit("column-%d"),(x10::array::Array<x10::lang::Any*>*)(__extension__ ({
                x10::array::Array<x10::lang::Any*>* __var155__(x10::array::Array<x10::lang::Any*>::_make(1));
                __var155__->__set(0, 
                (x10aux::class_cast_unchecked<x10::lang::Any*>(i)));
                __var155__;
            })));
            
            //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* ret84756;
            
            //#line 557 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
            (name->FMGL(raw))->__set(i84754, v84755);
            
            //#line 564 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
            ret84756 = v84755;
            
            //#line 553 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Local_c
            ret84756;
        }
    }
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return name;
    
}

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::NamedDistData::_constructor(x10::array::Array<x10::lang::Any*>* data_) {
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorCall_c
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



//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::NamedDistData::_constructor(x10::array::Array<x10::lang::String*>* name_,
                                                      x10::array::Array<x10::lang::Any*>* data_) {
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorCall_c
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



//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::NamedDistData::_constructor(x10::array::Array<x10::lang::String*>* name_,
                                                      x10::array::Array<x10::lang::Any*>* data_,
                                                      x10::lang::Any* header_) {
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorCall_c
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



//#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::NamedDistData::_constructor(x10::array::Array<x10::lang::String*>* name_,
                                                      x10::array::Array<x10_int>* typeId_,
                                                      x10::array::Array<x10::lang::Any*>* data_,
                                                      x10::lang::Any* header_) {
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.AssignPropertyCall_c
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::NamedDistData* this84758 = this;
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this84758)->FMGL(datatype) = ((x10_byte)0);
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this84758)->FMGL(header) = (x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL));
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(data_, X10_NULL))) {
        
        //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("data may not be null"))));
    }
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(name_, X10_NULL))) {
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10LocalAssign_c
        name_ = org::scalegraph::io::NamedDistData::createName(
                  data_);
    }
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(typeId_, X10_NULL))) {
        
        //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10LocalAssign_c
        typeId_ = org::scalegraph::io::NamedDistData::createTypeId(
                    data_);
    }
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(name) = name_;
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(typeId) = typeId_;
    
    //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(data) = data_;
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(header) = header_;
    
    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
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
    
    //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(x10aux::nullCheck(this->FMGL(name))->
                                  FMGL(size), x10aux::nullCheck(this->
                                                                  FMGL(typeId))->
                                                FMGL(size))) ||
        (!x10aux::struct_equals(x10aux::nullCheck(this->FMGL(name))->
                                  FMGL(size), x10aux::nullCheck(this->
                                                                  FMGL(data))->
                                                FMGL(size))))
    {
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Check the array length!"))));
    }
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.For_c
    {
        x10::lang::Iterator<x10::array::Point*>* id82620;
        for (
             //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
             id82620 = x10aux::nullCheck(this->FMGL(name))->
                         FMGL(region)->iterator(); x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id82620));
             ) {
            
            //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10::array::Point* id27 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id82620));
            
            //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
            x10_int i = x10aux::nullCheck(id27)->x10::array::Point::__apply(
                          ((x10_int)0));
            
            //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
            if (!(org::scalegraph::id::Type::checkType((__extension__ ({
                                                           
                                                           //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
                                                           x10::array::Array<x10::lang::Any*>* this84407 =
                                                             this->
                                                               FMGL(data);
                                                           
                                                           //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                           x10_int i84406 =
                                                             i;
                                                           
                                                           //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                           x10::lang::Any* ret84408;
                                                           
                                                           //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                           goto __ret84409; __ret84409: {
                                                           {
                                                               
                                                               //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                               if (x10aux::nullCheck(this84407)->
                                                                     FMGL(rail))
                                                               {
                                                                   
                                                                   //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                   ret84408 =
                                                                     (x10aux::nullCheck(this84407)->
                                                                        FMGL(raw))->__apply(i84406);
                                                                   
                                                                   //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                   goto __ret84409_end_;
                                                               }
                                                               else
                                                               {
                                                                   
                                                                   //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                   if (true &&
                                                                       !(x10aux::nullCheck(this84407)->
                                                                           FMGL(region)->contains(
                                                                           i84406)))
                                                                   {
                                                                       
                                                                       //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                       x10::array::Array<void>::raiseBoundsError(
                                                                         i84406);
                                                                   }
                                                                   
                                                                   //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                   ret84408 =
                                                                     (x10aux::nullCheck(this84407)->
                                                                        FMGL(raw))->__apply(((x10_int) ((i84406) - (x10aux::nullCheck(this84407)->
                                                                                                                      FMGL(layout_min0)))));
                                                                   
                                                                   //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                   goto __ret84409_end_;
                                                               }
                                                               
                                                           }goto __ret84409_end_; __ret84409_end_: ;
                                                           }
                                                           ret84408;
                                                           }))
                                                           ,
                                                           (__extension__ ({
                                                               
                                                               //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
                                                               x10::array::Array<x10_int>* this84411 =
                                                                 this->
                                                                   FMGL(typeId);
                                                               
                                                               //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                               x10_int i84410 =
                                                                 i;
                                                               
                                                               //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                               x10_int ret84412;
                                                               
                                                               //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                                               goto __ret84413; __ret84413: {
                                                               {
                                                                   
                                                                   //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                   if (x10aux::nullCheck(this84411)->
                                                                         FMGL(rail))
                                                                   {
                                                                       
                                                                       //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                       ret84412 =
                                                                         (x10aux::nullCheck(this84411)->
                                                                            FMGL(raw))->__apply(i84410);
                                                                       
                                                                       //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                       goto __ret84413_end_;
                                                                   }
                                                                   else
                                                                   {
                                                                       
                                                                       //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                                       if (true &&
                                                                           !(x10aux::nullCheck(this84411)->
                                                                               FMGL(region)->contains(
                                                                               i84410)))
                                                                       {
                                                                           
                                                                           //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                                           x10::array::Array<void>::raiseBoundsError(
                                                                             i84410);
                                                                       }
                                                                       
                                                                       //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                       ret84412 =
                                                                         (x10aux::nullCheck(this84411)->
                                                                            FMGL(raw))->__apply(((x10_int) ((i84410) - (x10aux::nullCheck(this84411)->
                                                                                                                          FMGL(layout_min0)))));
                                                                       
                                                                       //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                                                       goto __ret84413_end_;
                                                                   }
                                                                   
                                                               }goto __ret84413_end_; __ret84413_end_: ;
                                                               }
                                                               ret84412;
                                                               }))
                                                               )))
                  {
                      
                      //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
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
    
    
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::io::NamedDistData::nameToIndex(
      org::scalegraph::util::SString name_) {
        
        //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.For_c
        {
            x10::lang::Iterator<x10::array::Point*>* id82629;
            for (
                 //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
                 id82629 = x10aux::nullCheck(this->FMGL(name))->
                             FMGL(region)->iterator(); x10::lang::Iterator<x10::array::Point*>::hasNext(x10aux::nullCheck(id82629));
                 ) {
                
                //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
                x10::array::Point* id28 = x10::lang::Iterator<x10::array::Point*>::next(x10aux::nullCheck(id82629));
                
                //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
                x10_int i = x10aux::nullCheck(id28)->x10::array::Point::__apply(
                              ((x10_int)0));
                
                //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
                if (name_->org::scalegraph::util::SString::equals(
                      reinterpret_cast<x10::lang::Any*>((__extension__ ({
                          
                          //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
                          x10::array::Array<x10::lang::String*>* this84415 =
                            this->FMGL(name);
                          
                          //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int i84414 = i;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10::lang::String* ret84416;
                          
                          //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                          goto __ret84417; __ret84417: {
                          {
                              
                              //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                              if (x10aux::nullCheck(this84415)->
                                    FMGL(rail)) {
                                  
                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret84416 = (x10aux::nullCheck(this84415)->
                                                FMGL(raw))->__apply(i84414);
                                  
                                  //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                  goto __ret84417_end_;
                              } else {
                                  
                                  //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                  if (true && !(x10aux::nullCheck(this84415)->
                                                  FMGL(region)->contains(
                                                  i84414)))
                                  {
                                      
                                      //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                      x10::array::Array<void>::raiseBoundsError(
                                        i84414);
                                  }
                                  
                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                  ret84416 = (x10aux::nullCheck(this84415)->
                                                FMGL(raw))->__apply(((x10_int) ((i84414) - (x10aux::nullCheck(this84415)->
                                                                                              FMGL(layout_min0)))));
                                  
                                  //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                  goto __ret84417_end_;
                              }
                              
                          }goto __ret84417_end_; __ret84417_end_: ;
                          }
                          ret84416;
                          }))
                          ))) {
                        
                        //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
                        return i;
                        
                    }
                    
                }
            }
            
        
        //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Specified name does not exist"))));
        }
        
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    
    //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    
    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    x10_int org::scalegraph::io::NamedDistData::size() {
        
        //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(this->FMGL(name))->FMGL(size);
        
    }
    
    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    x10::array::Array<x10::lang::String*>* org::scalegraph::io::NamedDistData::name(
      ) {
        
        //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
        return this->FMGL(name);
        
    }
    
    //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    x10::array::Array<x10::lang::Any*>* org::scalegraph::io::NamedDistData::data(
      ) {
        
        //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
        return this->FMGL(data);
        
    }
    
    //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    x10::array::Array<x10_int>* org::scalegraph::io::NamedDistData::typeId(
      ) {
        
        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
        return this->FMGL(typeId);
        
    }
    
    //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    x10::lang::Any* org::scalegraph::io::NamedDistData::header(
      ) {
        
        //#line 111 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
        return this->FMGL(header);
        
    }
    
    //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    x10_byte org::scalegraph::io::NamedDistData::datatype(
      ) {
        
        //#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
        return this->FMGL(datatype);
        
    }
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    org::scalegraph::io::NamedDistData* org::scalegraph::io::NamedDistData::org__scalegraph__io__NamedDistData____this__org__scalegraph__io__NamedDistData(
      ) {
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
        return this;
        
    }
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10MethodDecl_c
    void org::scalegraph::io::NamedDistData::__fieldInitializers82531(
      ) {
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(datatype) = ((x10_byte)0);
        
        //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": Eval of x10.ast.X10FieldAssign_c
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

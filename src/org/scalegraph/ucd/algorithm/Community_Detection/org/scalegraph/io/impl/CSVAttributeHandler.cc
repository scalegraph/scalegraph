/*************************************************/
/* START of CSVAttributeHandler */
#include <org/scalegraph/io/impl/CSVAttributeHandler.h>


//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10FieldDecl_c

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10FieldDecl_c

//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10FieldDecl_c

//#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::CSVAttributeHandler::_constructor() {
    
    //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.AssignPropertyCall_c
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(typeId) = ((x10_int)0);
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(doubleQuoated) = false;
}
org::scalegraph::io::impl::CSVAttributeHandler* org::scalegraph::io::impl::CSVAttributeHandler::_make(
  ) {
    org::scalegraph::io::impl::CSVAttributeHandler* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler))) org::scalegraph::io::impl::CSVAttributeHandler();
    this_->_constructor();
    return this_;
}



//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::CSVAttributeHandler::_constructor(
  x10_int typeId, x10_boolean doubleQuoated) {
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.AssignPropertyCall_c
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(typeId) = typeId;
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(doubleQuoated) = doubleQuoated;
}
org::scalegraph::io::impl::CSVAttributeHandler* org::scalegraph::io::impl::CSVAttributeHandler::_make(
  x10_int typeId, x10_boolean doubleQuoated) {
    org::scalegraph::io::impl::CSVAttributeHandler* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler))) org::scalegraph::io::impl::CSVAttributeHandler();
    this_->_constructor(typeId, doubleQuoated);
    return this_;
}



//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::io::impl::CSVAttributeHandler::isSkip(
  ) {
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return true;
    
}

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
x10_int org::scalegraph::io::impl::CSVAttributeHandler::typeId(
  ) {
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return this->FMGL(typeId);
    
}

//#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::io::impl::CSVAttributeHandler::localSizeOf(
  x10::lang::Any* any) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("Type NULL Handler does not contain any data."))));
}

//#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
x10::lang::Any* org::scalegraph::io::impl::CSVAttributeHandler::createBlockGrowableMemory(
  ) {
    
    //#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return x10aux::class_cast_unchecked<x10::lang::Any*>(X10_NULL);
    
}

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVAttributeHandler::parseElements(
  x10_byte * * elemPtrs, x10_int lines, x10::lang::Any* outBuf) {
 
}

//#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
x10::lang::Any* org::scalegraph::io::impl::CSVAttributeHandler::mergeResult(
  x10::util::Team* team, x10_int nthreads, x10::lang::Fun_0_1<x10_int, org::scalegraph::util::MemoryChunk<x10_long> >* getChunkSize,
  x10::lang::Fun_0_1<x10_int, x10::lang::Any*>* getBuffer) {
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("Type NULL Handler does not contain any data."))));
}

//#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*
  org::scalegraph::io::impl::CSVAttributeHandler::makeStringClosure(
  x10::lang::Any* any) {
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("Type NULL Handler does not contain any data."))));
}

//#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVAttributeHandler::print(
  x10::util::Team* team, x10::lang::Any* any) {
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalOperationException::_make(x10aux::makeStringLit("Type NULL Handler does not contain any data."))));
}

//#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c

//#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::CSVAttributeHandler* org::scalegraph::io::impl::CSVAttributeHandler::create(
  x10_int typeId, x10_boolean doubleQuoated) {
    
    //#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Switch_c
    switch (typeId) {
        
        //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)0): ;
        {
            
            //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler* alloc132151 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler))) org::scalegraph::io::impl::CSVAttributeHandler()))
                ;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133658 = typeId;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133659 = doubleQuoated;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132151->FMGL(typeId) = typeId133658;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132151->FMGL(doubleQuoated) = doubleQuoated133659;
                alloc132151;
            }))
            ;
            
        }
        //#line 189 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)1): ;
        {
            
            //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_boolean>* alloc132152 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_boolean> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_boolean>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_boolean>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133664 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133665 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133662 = typeId133664;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133663 = doubleQuoated133665;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133660 = typeId133662;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133661 = doubleQuoated133663;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132152->FMGL(typeId) = typeId133660;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132152->FMGL(doubleQuoated) = doubleQuoated133661;
                alloc132152;
            }))
            ;
            
        }
        //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)2): ;
        {
            
            //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_byte>* alloc132153 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_byte> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_byte>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_byte>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133670 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133671 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133668 = typeId133670;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133669 = doubleQuoated133671;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133666 = typeId133668;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133667 = doubleQuoated133669;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132153->FMGL(typeId) = typeId133666;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132153->FMGL(doubleQuoated) = doubleQuoated133667;
                alloc132153;
            }))
            ;
            
        }
        //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)3): ;
        {
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_short>* alloc132154 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_short> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_short>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_short>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133676 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133677 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133674 = typeId133676;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133675 = doubleQuoated133677;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133672 = typeId133674;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133673 = doubleQuoated133675;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132154->FMGL(typeId) = typeId133672;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132154->FMGL(doubleQuoated) = doubleQuoated133673;
                alloc132154;
            }))
            ;
            
        }
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)4): ;
        {
            
            //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_int>* alloc132155 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_int> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_int>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_int>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133682 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133683 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133680 = typeId133682;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133681 = doubleQuoated133683;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133678 = typeId133680;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133679 = doubleQuoated133681;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132155->FMGL(typeId) = typeId133678;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132155->FMGL(doubleQuoated) = doubleQuoated133679;
                alloc132155;
            }))
            ;
            
        }
        //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)5): ;
        {
            
            //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_long>* alloc132156 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_long> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_long>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_long>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133688 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133689 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133686 = typeId133688;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133687 = doubleQuoated133689;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133684 = typeId133686;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133685 = doubleQuoated133687;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132156->FMGL(typeId) = typeId133684;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132156->FMGL(doubleQuoated) = doubleQuoated133685;
                alloc132156;
            }))
            ;
            
        }
        //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)6): ;
        {
            
            //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_float>* alloc132157 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_float> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_float>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_float>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133694 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133695 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133692 = typeId133694;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133693 = doubleQuoated133695;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133690 = typeId133692;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133691 = doubleQuoated133693;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132157->FMGL(typeId) = typeId133690;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132157->FMGL(doubleQuoated) = doubleQuoated133691;
                alloc132157;
            }))
            ;
            
        }
        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)7): ;
        {
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_double>* alloc132158 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_double> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_double>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_double>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133700 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133701 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133698 = typeId133700;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133699 = doubleQuoated133701;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133696 = typeId133698;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133697 = doubleQuoated133699;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132158->FMGL(typeId) = typeId133696;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132158->FMGL(doubleQuoated) = doubleQuoated133697;
                alloc132158;
            }))
            ;
            
        }
        //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)8): ;
        {
            
            //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ubyte>* alloc132159 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ubyte> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ubyte>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ubyte>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133706 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133707 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133704 = typeId133706;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133705 = doubleQuoated133707;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133702 = typeId133704;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133703 = doubleQuoated133705;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132159->FMGL(typeId) = typeId133702;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132159->FMGL(doubleQuoated) = doubleQuoated133703;
                alloc132159;
            }))
            ;
            
        }
        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)9): ;
        {
            
            //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ushort>* alloc132160 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ushort> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ushort>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ushort>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133712 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133713 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133710 = typeId133712;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133711 = doubleQuoated133713;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133708 = typeId133710;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133709 = doubleQuoated133711;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132160->FMGL(typeId) = typeId133708;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132160->FMGL(doubleQuoated) = doubleQuoated133709;
                alloc132160;
            }))
            ;
            
        }
        //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)10): ;
        {
            
            //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_uint>* alloc132161 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_uint> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_uint>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_uint>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133718 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133719 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133716 = typeId133718;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133717 = doubleQuoated133719;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133714 = typeId133716;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133715 = doubleQuoated133717;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132161->FMGL(typeId) = typeId133714;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132161->FMGL(doubleQuoated) = doubleQuoated133715;
                alloc132161;
            }))
            ;
            
        }
        //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)11): ;
        {
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ulong>* alloc132162 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ulong> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ulong>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ulong>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133724 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133725 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133722 = typeId133724;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133723 = doubleQuoated133725;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133720 = typeId133722;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133721 = doubleQuoated133723;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132162->FMGL(typeId) = typeId133720;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132162->FMGL(doubleQuoated) = doubleQuoated133721;
                alloc132162;
            }))
            ;
            
        }
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)12): ;
        {
            
            //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_char>* alloc132163 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_char> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_char>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_char>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133730 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133731 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133728 = typeId133730;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133729 = doubleQuoated133731;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133726 = typeId133728;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133727 = doubleQuoated133729;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132163->FMGL(typeId) = typeId133726;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132163->FMGL(doubleQuoated) = doubleQuoated133727;
                alloc132163;
            }))
            ;
            
        }
        //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)13): ;
        {
            
            //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__StringHandler* alloc132164 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__StringHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__StringHandler))) org::scalegraph::io::impl::CSVAttributeHandler__StringHandler()))
                ;
                
                //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133736 = typeId;
                
                //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133737 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133734 = typeId133736;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133735 = doubleQuoated133737;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId133732 = typeId133734;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated133733 = doubleQuoated133735;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132164->FMGL(typeId) = typeId133732;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132164->FMGL(doubleQuoated) = doubleQuoated133733;
                alloc132164;
            }))
            ;
            
        }
        //#line 215 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        default: ;
        {
            
            //#line 216 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("invalid data type"))));
        }
    }
}

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::CSVAttributeHandler* org::scalegraph::io::impl::CSVAttributeHandler::org__scalegraph__io__impl__CSVAttributeHandler____this__org__scalegraph__io__impl__CSVAttributeHandler(
  ) {
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::io::impl::CSVAttributeHandler::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVAttributeHandler::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::CSVAttributeHandler::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(typeId));
    buf.write(this->FMGL(doubleQuoated));
    
}

x10::lang::Reference* org::scalegraph::io::impl::CSVAttributeHandler::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler))) org::scalegraph::io::impl::CSVAttributeHandler();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::CSVAttributeHandler::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(typeId) = buf.read<x10_int>();
    FMGL(doubleQuoated) = buf.read<x10_boolean>();
}

x10aux::RuntimeType org::scalegraph::io::impl::CSVAttributeHandler::rtt;
void org::scalegraph::io::impl::CSVAttributeHandler::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.impl.CSVAttributeHandler",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of CSVAttributeHandler */
/*************************************************/
/*************************************************/
/* START of CSVAttributeHandler$ChunkBuffer */
#include <org/scalegraph/io/impl/CSVAttributeHandler__ChunkBuffer.h>

x10aux::RuntimeType org::scalegraph::io::impl::CSVAttributeHandler__ChunkBuffer<void>::rtt;

/* END of CSVAttributeHandler$ChunkBuffer */
/*************************************************/
/*************************************************/
/* START of CSVAttributeHandler$BaseHandler */
#include <org/scalegraph/io/impl/CSVAttributeHandler__BaseHandler.h>

x10aux::RuntimeType org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<void>::rtt;

/* END of CSVAttributeHandler$BaseHandler */
/*************************************************/
/*************************************************/
/* START of CSVAttributeHandler$PrimitiveHandler */
#include <org/scalegraph/io/impl/CSVAttributeHandler__PrimitiveHandler.h>

x10aux::RuntimeType org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<void>::rtt;

/* END of CSVAttributeHandler$PrimitiveHandler */
/*************************************************/
/*************************************************/
/* START of CSVAttributeHandler$StringHandler */
#include <org/scalegraph/io/impl/CSVAttributeHandler__StringHandler.h>

#include <org/scalegraph/io/impl/CSVAttributeHandler__BaseHandler.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/io/impl/CSVAttributeHandler.h>
#include <org/scalegraph/util/MemoryPointer.h>
#include <x10/lang/Byte.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Any.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/util/SStringBuilder.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#ifndef ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
class org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4 : public x10::lang::Closure {
    public:
    
    static x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::itable<org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4> _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(org::scalegraph::util::SStringBuilder sb, x10_long idx) {
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::StringBuilderAdd_(sb,((x10_char)'\"'));
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::StringBuilderAdd_(sb,(__extension__ ({
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index133487 = idx;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString ret133488;
            {
                
                //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((mc->FMGL(data)).isValid())) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index133487) < (((x10_long) (((x10_int)0))))) || ((index133487) >= (mc->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index133487), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret133488 = (mc->FMGL(data))[index133487];
            ret133488;
        }))
        );
        
        //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::StringBuilderAdd_(sb,((x10_char)'\"'));
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString> mc;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->mc);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4* storage = x10aux::alloc<org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4>();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString> that_mc = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString> >();
        org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4* this_ = new (storage) org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4(that_mc);
        return this_;
    }
    
    org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4(org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString> mc) : mc(mc) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10:180";
    }

};

#endif // ORG_SCALEGRAPH_IO_IMPL_CSVATTRIBUTEHANDLER__STRINGHANDLER__CLOSURE__4_CLOSURE

//#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::_constructor(
  x10_int typeId, x10_boolean doubleQuoated) {
    
    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<org::scalegraph::util::SString>* this133655 =
      this;
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_int typeId133656 = typeId;
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_boolean doubleQuoated133657 = doubleQuoated;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_int typeId133653 = typeId133656;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_boolean doubleQuoated133654 = doubleQuoated133657;
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this133655)->FMGL(typeId) = typeId133653;
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this133655)->FMGL(doubleQuoated) = doubleQuoated133654;
    
    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::impl::CSVAttributeHandler__StringHandler* org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::_make(
  x10_int typeId, x10_boolean doubleQuoated) {
    org::scalegraph::io::impl::CSVAttributeHandler__StringHandler* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__StringHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__StringHandler))) org::scalegraph::io::impl::CSVAttributeHandler__StringHandler();
    this_->_constructor(typeId, doubleQuoated);
    return this_;
}



//#line 169 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c

//#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::parseElements(
  x10_byte * * elemPtrs, x10_int lines, x10::lang::Any* outBuf) {
    
    //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<org::scalegraph::util::SString>* typedOutBuf =
      x10aux::class_cast<org::scalegraph::util::GrowableMemory<org::scalegraph::util::SString>*>(outBuf);
    
    //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::io::impl::CSVParseStringElements(elemPtrs, lines, typedOutBuf, this->
                                                                                      FMGL(doubleQuoated));
}

//#line 177 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*
  org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::makeStringClosure(
  x10::lang::Any* any) {
    
    //#line 178 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> dmc =
      x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString> >(any);
    
    //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString> mc =
      dmc->org::scalegraph::util::DistMemoryChunk<org::scalegraph::util::SString>::__apply();
    
    //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >(sizeof(org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4)))org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4(mc)));
    
}

//#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::CSVAttributeHandler__StringHandler*
  org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::org__scalegraph__io__impl__CSVAttributeHandler__StringHandler____this__org__scalegraph__io__impl__CSVAttributeHandler__StringHandler(
  ) {
    
    //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<org::scalegraph::util::SString>::_serialize_body(buf);
    
}

x10::lang::Reference* org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler__StringHandler* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__StringHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__StringHandler))) org::scalegraph::io::impl::CSVAttributeHandler__StringHandler();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<org::scalegraph::util::SString>::_deserialize_body(buf);
    
}

x10aux::RuntimeType org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::rtt;
void org::scalegraph::io::impl::CSVAttributeHandler__StringHandler::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<org::scalegraph::util::SString> >()};
    rtt.initStageTwo("org.scalegraph.io.impl.CSVAttributeHandler.StringHandler",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long>::itable<org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4>org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4::__apply, &org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4::toString, &x10::lang::Closure::typeName);
x10aux::itable_entry org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<org::scalegraph::util::SStringBuilder, x10_long> >, &org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4::_itable),x10aux::itable_entry(NULL, NULL)};

const x10aux::serialization_id_t org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_io_impl_CSVAttributeHandler__StringHandler__closure__4::_deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

/* END of CSVAttributeHandler$StringHandler */
/*************************************************/

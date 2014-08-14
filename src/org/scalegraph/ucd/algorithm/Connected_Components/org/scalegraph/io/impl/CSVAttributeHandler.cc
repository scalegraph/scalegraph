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
                org::scalegraph::io::impl::CSVAttributeHandler* alloc130602 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler))) org::scalegraph::io::impl::CSVAttributeHandler()))
                ;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132109 = typeId;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132110 = doubleQuoated;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130602->FMGL(typeId) = typeId132109;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130602->FMGL(doubleQuoated) = doubleQuoated132110;
                alloc130602;
            }))
            ;
            
        }
        //#line 189 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)1): ;
        {
            
            //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_boolean>* alloc130603 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_boolean> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_boolean>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_boolean>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132115 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132116 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132113 = typeId132115;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132114 = doubleQuoated132116;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132111 = typeId132113;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132112 = doubleQuoated132114;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130603->FMGL(typeId) = typeId132111;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130603->FMGL(doubleQuoated) = doubleQuoated132112;
                alloc130603;
            }))
            ;
            
        }
        //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)2): ;
        {
            
            //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_byte>* alloc130604 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_byte> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_byte>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_byte>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132121 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132122 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132119 = typeId132121;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132120 = doubleQuoated132122;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132117 = typeId132119;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132118 = doubleQuoated132120;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130604->FMGL(typeId) = typeId132117;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130604->FMGL(doubleQuoated) = doubleQuoated132118;
                alloc130604;
            }))
            ;
            
        }
        //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)3): ;
        {
            
            //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 194 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_short>* alloc130605 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_short> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_short>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_short>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132127 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132128 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132125 = typeId132127;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132126 = doubleQuoated132128;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132123 = typeId132125;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132124 = doubleQuoated132126;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130605->FMGL(typeId) = typeId132123;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130605->FMGL(doubleQuoated) = doubleQuoated132124;
                alloc130605;
            }))
            ;
            
        }
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)4): ;
        {
            
            //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_int>* alloc130606 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_int> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_int>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_int>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132133 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132134 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132131 = typeId132133;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132132 = doubleQuoated132134;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132129 = typeId132131;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132130 = doubleQuoated132132;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130606->FMGL(typeId) = typeId132129;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130606->FMGL(doubleQuoated) = doubleQuoated132130;
                alloc130606;
            }))
            ;
            
        }
        //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)5): ;
        {
            
            //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_long>* alloc130607 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_long> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_long>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_long>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132139 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132140 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132137 = typeId132139;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132138 = doubleQuoated132140;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132135 = typeId132137;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132136 = doubleQuoated132138;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130607->FMGL(typeId) = typeId132135;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130607->FMGL(doubleQuoated) = doubleQuoated132136;
                alloc130607;
            }))
            ;
            
        }
        //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)6): ;
        {
            
            //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 200 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_float>* alloc130608 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_float> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_float>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_float>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132145 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132146 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132143 = typeId132145;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132144 = doubleQuoated132146;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132141 = typeId132143;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132142 = doubleQuoated132144;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130608->FMGL(typeId) = typeId132141;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130608->FMGL(doubleQuoated) = doubleQuoated132142;
                alloc130608;
            }))
            ;
            
        }
        //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)7): ;
        {
            
            //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_double>* alloc130609 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_double> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_double>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_double>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132151 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132152 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132149 = typeId132151;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132150 = doubleQuoated132152;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132147 = typeId132149;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132148 = doubleQuoated132150;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130609->FMGL(typeId) = typeId132147;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130609->FMGL(doubleQuoated) = doubleQuoated132148;
                alloc130609;
            }))
            ;
            
        }
        //#line 203 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)8): ;
        {
            
            //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 204 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ubyte>* alloc130610 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ubyte> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ubyte>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ubyte>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132157 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132158 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132155 = typeId132157;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132156 = doubleQuoated132158;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132153 = typeId132155;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132154 = doubleQuoated132156;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130610->FMGL(typeId) = typeId132153;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130610->FMGL(doubleQuoated) = doubleQuoated132154;
                alloc130610;
            }))
            ;
            
        }
        //#line 205 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)9): ;
        {
            
            //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 206 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ushort>* alloc130611 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ushort> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ushort>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ushort>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132163 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132164 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132161 = typeId132163;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132162 = doubleQuoated132164;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132159 = typeId132161;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132160 = doubleQuoated132162;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130611->FMGL(typeId) = typeId132159;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130611->FMGL(doubleQuoated) = doubleQuoated132160;
                alloc130611;
            }))
            ;
            
        }
        //#line 207 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)10): ;
        {
            
            //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 208 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_uint>* alloc130612 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_uint> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_uint>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_uint>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132169 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132170 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132167 = typeId132169;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132168 = doubleQuoated132170;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132165 = typeId132167;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132166 = doubleQuoated132168;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130612->FMGL(typeId) = typeId132165;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130612->FMGL(doubleQuoated) = doubleQuoated132166;
                alloc130612;
            }))
            ;
            
        }
        //#line 209 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)11): ;
        {
            
            //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 210 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ulong>* alloc130613 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ulong> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ulong>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_ulong>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132175 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132176 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132173 = typeId132175;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132174 = doubleQuoated132176;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132171 = typeId132173;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132172 = doubleQuoated132174;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130613->FMGL(typeId) = typeId132171;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130613->FMGL(doubleQuoated) = doubleQuoated132172;
                alloc130613;
            }))
            ;
            
        }
        //#line 211 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)12): ;
        {
            
            //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 212 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_char>* alloc130614 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_char> >(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_char>))) org::scalegraph::io::impl::CSVAttributeHandler__PrimitiveHandler<x10_char>()))
                ;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132181 = typeId;
                
                //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132182 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132179 = typeId132181;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132180 = doubleQuoated132182;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132177 = typeId132179;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132178 = doubleQuoated132180;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130614->FMGL(typeId) = typeId132177;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130614->FMGL(doubleQuoated) = doubleQuoated132178;
                alloc130614;
            }))
            ;
            
        }
        //#line 213 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": polyglot.ast.Case_c
        case ((x10_int)13): ;
        {
            
            //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 214 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::CSVAttributeHandler__StringHandler* alloc130615 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::CSVAttributeHandler__StringHandler>(), 0, sizeof(org::scalegraph::io::impl::CSVAttributeHandler__StringHandler))) org::scalegraph::io::impl::CSVAttributeHandler__StringHandler()))
                ;
                
                //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132187 = typeId;
                
                //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132188 = doubleQuoated;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132185 = typeId132187;
                
                //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132186 = doubleQuoated132188;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_int typeId132183 = typeId132185;
                
                //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
                x10_boolean doubleQuoated132184 = doubleQuoated132186;
                
                //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130615->FMGL(typeId) = typeId132183;
                
                //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130615->FMGL(doubleQuoated) = doubleQuoated132184;
                alloc130615;
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
            x10_long index131938 = idx;
            
            //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString ret131939;
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
                if (((index131938) < (((x10_long) (((x10_int)0))))) || ((index131938) >= (mc->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index131938), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret131939 = (mc->FMGL(data))[index131938];
            ret131939;
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
    org::scalegraph::io::impl::CSVAttributeHandler__BaseHandler<org::scalegraph::util::SString>* this132106 =
      this;
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_int typeId132107 = typeId;
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_boolean doubleQuoated132108 = doubleQuoated;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_int typeId132104 = typeId132107;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": x10.ast.X10LocalDecl_c
    x10_boolean doubleQuoated132105 = doubleQuoated132108;
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132106)->FMGL(typeId) = typeId132104;
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/CSVAttributeHandler.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132106)->FMGL(doubleQuoated) = doubleQuoated132105;
    
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

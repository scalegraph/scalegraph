/*************************************************/
/* START of FileReader */
#include <org/scalegraph/io/FileReader.h>

#include <org/scalegraph/io/NativeFile.h>
#include <x10/lang/Byte.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/io/EOFException.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/lang/Char.h>

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::io::FileReader::FMGL(BUFFER_SIZE);
void org::scalegraph::io::FileReader::FMGL(BUFFER_SIZE__do_init)() {
    FMGL(BUFFER_SIZE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::io::FileReader.BUFFER_SIZE");
    x10_int __var1611__ = x10aux::class_cast_unchecked<x10_int>(((x10_int) ((((x10_int)128)) * (((x10_int) (((x10_long)1024ll)))))));
    FMGL(BUFFER_SIZE) = __var1611__;
    FMGL(BUFFER_SIZE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::io::FileReader::FMGL(BUFFER_SIZE__init)() {
    x10aux::StaticInitController::initField(&FMGL(BUFFER_SIZE__status), &FMGL(BUFFER_SIZE__do_init), &FMGL(BUFFER_SIZE__exception), "org::scalegraph::io::FileReader.BUFFER_SIZE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::io::FileReader::FMGL(BUFFER_SIZE__status);
x10::lang::CheckedThrowable* org::scalegraph::io::FileReader::FMGL(BUFFER_SIZE__exception);

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10FieldDecl_c

//#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10FieldDecl_c

//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10FieldDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10FieldDecl_c

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10FieldDecl_c

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::FileReader::_constructor(org::scalegraph::util::SString path) {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.AssignPropertyCall_c
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileReader* this134041 = this;
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this134041)->FMGL(offset) = ((x10_long)0ll);
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this134041)->FMGL(length) = ((x10_long)0ll);
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this134041)->FMGL(fileOffset) = ((x10_long)0ll);
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(nf) = org::scalegraph::io::NativeFile::_make(path, ((x10_int)3),
                                                            ((x10_int)0));
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(buffer) = (__extension__ ({
        
        //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* alloc132706 =  ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_byte> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_byte>))) org::scalegraph::util::GrowableMemory<x10_byte>()))
        ;
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
        (alloc132706)->::org::scalegraph::util::GrowableMemory<x10_byte>::_constructor(
          ((x10_long)0ll));
        alloc132706;
    }))
    ;
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setSize(
      ((x10_long) (org::scalegraph::io::FileReader::FMGL(BUFFER_SIZE__get)())));
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offset) = this->FMGL(length) = ((x10_long)0ll);
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fileOffset) = ((x10_long)0ll);
}
org::scalegraph::io::FileReader* org::scalegraph::io::FileReader::_make(
  org::scalegraph::util::SString path) {
    org::scalegraph::io::FileReader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::FileReader>(), 0, sizeof(org::scalegraph::io::FileReader))) org::scalegraph::io::FileReader();
    this_->_constructor(path);
    return this_;
}



//#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileReader::reset() {
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offset) = this->FMGL(length) = ((x10_long)0ll);
    
    //#line 39 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fileOffset) = ((x10_long)0ll);
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
    this->FMGL(nf)->org::scalegraph::io::NativeFile::seek(
      ((x10_long)0ll), 0);
}

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileReader::skip(x10_long n) {
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileReader* x134044 = this;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long y134045 = n;
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x134044)->FMGL(fileOffset) = ((x10_long) ((x10aux::nullCheck(x134044)->
                                                                   FMGL(fileOffset)) + (y134045)));
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long buffered = ((x10_long) ((this->FMGL(length)) - (this->
                                                               FMGL(offset))));
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
    if (((buffered) >= (n)) && ((((x10_long) ((this->FMGL(offset)) + (n)))) >= (((x10_long) (((x10_int)0))))))
    {
        
        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileReader* x134042 = this;
        
        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        x10_long y134043 = n;
        
        //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(x134042)->FMGL(offset) = ((x10_long) ((x10aux::nullCheck(x134042)->
                                                                   FMGL(offset)) + (y134043)));
    } else {
        
        //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(offset) = this->FMGL(length) = ((x10_long)0ll);
        
        //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
        this->FMGL(nf)->org::scalegraph::io::NativeFile::seek(
          ((x10_long) ((n) - (buffered))), 1);
    }
    
}

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::io::FileReader::read(org::scalegraph::util::MemoryChunk<x10_byte> r) {
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long len = (__extension__ ({
        r->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long off = ((x10_long)0ll);
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long buffered = ((x10_long) ((this->FMGL(length)) - (this->
                                                               FMGL(offset))));
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileReader* x134048 = this;
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long y134049 = len;
    
    //#line 59 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x134048)->FMGL(fileOffset) = ((x10_long) ((x10aux::nullCheck(x134048)->
                                                                   FMGL(fileOffset)) + (y134049)));
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
    if (((buffered) >= (len))) {
        
        //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
          x10aux::nullCheck(this->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
          this->FMGL(offset), r, off, len);
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileReader* x134046 = this;
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        x10_long y134047 = len;
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(x134046)->FMGL(offset) = ((x10_long) ((x10aux::nullCheck(x134046)->
                                                                   FMGL(offset)) + (y134047)));
        
        //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
        return len;
        
    } else {
        
        //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
          x10aux::nullCheck(this->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw(),
          this->FMGL(offset), r, off, buffered);
        
        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10LocalAssign_c
        off = ((x10_long) ((off) + (buffered)));
        
        //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10LocalAssign_c
        len = ((x10_long) ((len) - (buffered)));
        
        //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(offset) = this->FMGL(length) = ((x10_long)0ll);
        
        //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        x10_long ret = buffered;
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        x10_long readBytes = this->FMGL(nf)->org::scalegraph::io::NativeFile::read(
                               r->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                 off, len));
        
        //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
        if (((readBytes) > (((x10_long)0ll)))) {
            
            //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10LocalAssign_c
            ret = ((x10_long) ((ret) + (readBytes)));
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
            this->org::scalegraph::io::FileReader::fillBuffer();
        } else 
        //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(ret, ((x10_long)0ll))))
        {
            
            //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::io::EOFException::_make()));
        }
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
        return ret;
        
    }
    
}

//#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
x10_byte org::scalegraph::io::FileReader::read() {
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::FileReader* x134050 = this;
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(x134050)->FMGL(fileOffset) = ((x10_long) ((x10aux::nullCheck(x134050)->
                                                                   FMGL(fileOffset)) + (((x10_long)1ll))));
    
    //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(this->FMGL(length), this->
                                                     FMGL(offset))))
    {
        
        //#line 85 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
        this->FMGL(offset) = this->FMGL(length) = ((x10_long)0ll);
        
        //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
        if (((this->org::scalegraph::io::FileReader::fillBuffer()) <= (((x10_long)0ll))))
        {
            
            //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::io::EOFException::_make()));
        }
        
    }
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* this134016 =
          this->FMGL(buffer);
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        x10_long index134015 = ((x10_long) (((__extension__ ({
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::io::FileReader* x134013 = this;
            
            //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": polyglot.ast.Empty_c
            ;
            x10aux::nullCheck(x134013)->FMGL(offset) = ((x10_long) ((x10aux::nullCheck(x134013)->
                                                                       FMGL(offset)) + (((x10_long)1ll))));
        }))
        ) - (((x10_long)1ll))));
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        x10_byte ret134017;
        {
            
            //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
            if (((index134015) < (((x10_long) (((x10_int)0))))) ||
                ((index134015) >= (x10aux::nullCheck(this134016)->
                                     FMGL(size)))) {
                
                //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index134015), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
        ret134017 = (x10aux::nullCheck(this134016)->FMGL(mc)->
                       FMGL(data))[index134015];
        ret134017;
    }))
    ;
    
}

//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileReader::close() {
    
    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offset) = this->FMGL(length) = ((x10_long)0ll);
    
    //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fileOffset) = ((x10_long)0ll);
    
    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::del();
    
    //#line 95 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
    this->FMGL(nf)->org::scalegraph::io::NativeFile::close();
}

//#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::io::FileReader::available() {
    
    //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
    return ((x10_long) ((this->FMGL(length)) - (this->FMGL(offset))));
    
}

//#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::io::FileReader::fillBuffer() {
    
    //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> fil = x10aux::nullCheck(this->
                                                                           FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw()->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                                                         this->
                                                           FMGL(length),
                                                         ((x10_long) (((__extension__ ({
                                                             
                                                             //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                                                             org::scalegraph::util::GrowableMemory<x10_byte>* this134019 =
                                                               this->
                                                                 FMGL(buffer);
                                                             x10aux::nullCheck(this134019)->
                                                               FMGL(size);
                                                         }))
                                                         ) - (this->
                                                                FMGL(length)))));
    
    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long readBytes = this->FMGL(nf)->org::scalegraph::io::NativeFile::read(
                           fil);
    
    //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
    if (((readBytes) > (((x10_long)0ll)))) {
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileReader* x134051 = this;
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        x10_long y134052 = readBytes;
        
        //#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
        x10aux::nullCheck(x134051)->FMGL(length) = ((x10_long) ((x10aux::nullCheck(x134051)->
                                                                   FMGL(length)) + (y134052)));
    }
    
    //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
    return readBytes;
    
}

//#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::io::FileReader::currentOffset() {
    
    //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
    return this->FMGL(fileOffset);
    
}

//#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileReader::replaceBuffer(x10_long new_size) {
    
    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long buffered = ((x10_long) ((this->FMGL(length)) - (this->
                                                               FMGL(offset))));
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> new_mem =
      org::scalegraph::util::MemoryChunk<x10_byte >::_make(new_size, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> old_mem =
      x10aux::nullCheck(this->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw();
    
    //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
      old_mem, this->FMGL(offset), new_mem, ((x10_long)0ll),
      buffered);
    
    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(this->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::setMemory(
      new_mem);
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offset) = ((x10_long) (((x10_int)0)));
    
    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(length) = buffered;
}

//#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileReader::shrinkBuffer() {
    
    //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long buffered = ((x10_long) ((this->FMGL(length)) - (this->
                                                               FMGL(offset))));
    
    //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
    if (((buffered) <= (((x10_long) (((__extension__ ({
            
            //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<x10_byte>* this134022 =
              this->FMGL(buffer);
            x10aux::nullCheck(this134022)->FMGL(size);
        }))
        ) / x10aux::zeroCheck(((x10_long) (((x10_int)2)))))))))
    {
        
        //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::io::FileReader::replaceBuffer(
          ((x10_long) (((__extension__ ({
              
              //#line 126 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
              org::scalegraph::util::GrowableMemory<x10_byte>* this134023 =
                this->FMGL(buffer);
              x10aux::nullCheck(this134023)->FMGL(size);
          }))
          ) / x10aux::zeroCheck(((x10_long) (((x10_int)2)))))));
    }
    
}

//#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileReader::growBuffer(x10_long request) {
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long buffered = ((x10_long) ((this->FMGL(length)) - (this->
                                                               FMGL(offset))));
    
    //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
    if (((request) > ((__extension__ ({
            
            //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<x10_byte>* this134024 =
              this->FMGL(buffer);
            x10aux::nullCheck(this134024)->FMGL(size);
        }))
        ))) {
        
        //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::io::FileReader::replaceBuffer(
          request);
    }
    
}

//#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_byte> org::scalegraph::io::FileReader::internalReadLine(
  ) {
    
    //#line 139 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long buffered134067 = ((x10_long) ((this->FMGL(length)) - (this->
                                                                     FMGL(offset))));
    
    //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long quater134068 = ((x10_long) (((__extension__ ({
        
        //#line 140 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_byte>* this134069 =
          this->FMGL(buffer);
        x10aux::nullCheck(this134069)->FMGL(size);
    }))
    ) / x10aux::zeroCheck(((x10_long) (((x10_int)4))))));
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
    if (((quater134068) >= (((x10_long) (org::scalegraph::io::FileReader::
                                           FMGL(BUFFER_SIZE__get)())))) &&
        ((buffered134067) <= (quater134068))) {
        
        //#line 142 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::io::FileReader::shrinkBuffer();
    }
    
    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_long cur = ((x10_long) (((x10_int)0)));
    
    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    x10_boolean cr = false;
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_byte> data =
          x10aux::nullCheck(this->FMGL(buffer))->org::scalegraph::util::GrowableMemory<x10_byte>::raw();
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        x10_long i132710min134063 = ((x10_long) ((this->FMGL(offset)) + (cur)));
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        x10_long i132710max134064 = ((x10_long) ((this->FMGL(length)) - (((x10_long) (((x10_int)1))))));
        
        //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": polyglot.ast.For_c
        {
            x10_long i134065;
            for (
                 //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                 i134065 = i132710min134063; ((i134065) <= (i132710max134064));
                 
                 //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10LocalAssign_c
                 i134065 = ((x10_long) ((i134065) + (((x10_long)1ll)))))
            {
                
                //#line 148 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                x10_long i134066 = i134065;
                
                //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                x10_char ch134055 = (x10_char((x10_int)((__extension__ ({
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_long index134056 = i134066;
                    
                    //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
                    x10_byte ret134057;
                    {
                        
                        //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (!((data->FMGL(data)).isValid()))
                        {
                            
                            //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                            }
                            
                        }
                        
                        //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                        if (((index134056) < (((x10_long) (((x10_int)0))))) ||
                            ((index134056) >= (data->FMGL(data)->
                                                 FMGL(size))))
                        {
                            
                            //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index134056), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                            }
                            
                        }
                        
                    }
                    
                    //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
                    ret134057 = (data->FMGL(data))[index134056];
                    ret134057;
                }))
                )));
                
                //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(ch134055, ((x10_char)'\r'))))
                {
                    
                    //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10LocalAssign_c
                    cr = true;
                } else 
                //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
                if ((x10aux::struct_equals(ch134055, ((x10_char)'\n'))))
                {
                    
                    //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                    x10_long cur_offset134058 = this->FMGL(offset);
                    
                    //#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                    x10_long next_offset134059 = ((x10_long) ((i134066) + (((x10_long) (((x10_int)1))))));
                    
                    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                    x10_long line_length134060 = ((x10_long) ((((x10_long) ((i134066) - (cur_offset134058)))) - (((x10_long) (cr
                      ? (((x10_int)1)) : (((x10_int)0)))))));
                    
                    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::io::FileReader* x134053 =
                      this;
                    
                    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                    x10_long y134054 = ((x10_long) ((next_offset134059) - (cur_offset134058)));
                    
                    //#line 155 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
                    x10aux::nullCheck(x134053)->FMGL(fileOffset) =
                      ((x10_long) ((x10aux::nullCheck(x134053)->
                                      FMGL(fileOffset)) + (y134054)));
                    
                    //#line 156 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
                    this->FMGL(offset) = next_offset134059;
                    
                    //#line 157 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
                    return data->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                             cur_offset134058, line_length134060);
                    
                }
                
            }
        }
        
        //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10LocalAssign_c
        cur = ((x10_long) ((this->FMGL(length)) - (this->
                                                     FMGL(offset))));
        
        //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
        if (((cur) < ((__extension__ ({
                
                //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::GrowableMemory<x10_byte>* this134031 =
                  this->FMGL(buffer);
                x10aux::nullCheck(this134031)->FMGL(size);
            }))
            ))) {
            
            //#line 163 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
              data, this->FMGL(offset), data, ((x10_long)0ll),
              cur);
            
            //#line 164 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
            this->FMGL(offset) = ((x10_long) (((x10_int)0)));
            
            //#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
            this->FMGL(length) = cur;
        } else {
            
            //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
            this->org::scalegraph::io::FileReader::growBuffer(
              ((x10_long) (((__extension__ ({
                  
                  //#line 168 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                  org::scalegraph::util::GrowableMemory<x10_byte>* this134032 =
                    this->FMGL(buffer);
                  x10aux::nullCheck(this134032)->FMGL(size);
              }))
              ) * (((x10_long) (((x10_int)2)))))));
        }
        
        //#line 171 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
        if (((this->org::scalegraph::io::FileReader::fillBuffer()) <= (((x10_long)0ll))))
        {
            
            //#line 172 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
            x10_long line_length = this->FMGL(length);
            
            //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::io::FileReader* x134061 = this;
            
            //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
            x10_long y134062 = this->FMGL(length);
            
            //#line 173 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
            x10aux::nullCheck(x134061)->FMGL(fileOffset) =
              ((x10_long) ((x10aux::nullCheck(x134061)->FMGL(fileOffset)) + (y134062)));
            
            //#line 174 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
            this->FMGL(length) = ((x10_long)0ll);
            
            //#line 175 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(line_length, ((x10_long)0ll))))
            {
                
                //#line 176 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::io::EOFException::_make()));
            }
            
            //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(line_length, (__extension__ ({
                                           
                                           //#line 179 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                                           org::scalegraph::util::GrowableMemory<x10_byte>* this134035 =
                                             this->FMGL(buffer);
                                           x10aux::nullCheck(this134035)->
                                             FMGL(size);
                                       }))
                                       ))) {
                
                //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
                this->org::scalegraph::io::FileReader::growBuffer(
                  ((x10_long) (((__extension__ ({
                      
                      //#line 180 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
                      org::scalegraph::util::GrowableMemory<x10_byte>* this134036 =
                        this->FMGL(buffer);
                      x10aux::nullCheck(this134036)->FMGL(size);
                  }))
                  ) * (((x10_long) (((x10_int)2)))))));
            }
            
            //#line 182 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
            return data->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
                     ((x10_long)0ll), line_length);
            
        }
        
    }
    
}

//#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::io::FileReader::readLine(
  ) {
    
    //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> str = this->org::scalegraph::io::FileReader::internalReadLine();
    
    //#line 189 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_byte> ret = org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (((__extension__ ({
        str->FMGL(data)->FMGL(size);
    }))
    ) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::copy<x10_byte >(
      str, ((x10_long)0ll), ret, ((x10_long)0ll), (__extension__ ({
          str->FMGL(data)->FMGL(size);
      }))
      );
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_long index134070 = (__extension__ ({
        str->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
    x10_byte ret134071;
    {
        
        //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (!((ret->FMGL(data)).isValid())) {
            
            //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
            }
            
        }
        
        //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
        if (((index134070) < (((x10_long) (((x10_int)0))))) ||
            ((index134070) >= (ret->FMGL(data)->FMGL(size))))
        {
            
            //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index134070), x10aux::makeStringLit(") not contained in MemoryChunk")))));
            }
            
        }
        
    }
    
    //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (ret->FMGL(data)).set(index134070, ((x10_byte)0));
    
    //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
    ret134071 = ((x10_byte)0);
    
    //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
    ret134071;
    
    //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc132707 =  org::scalegraph::util::SString::_alloc();
        
        //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10ConstructorCall_c
        (alloc132707)->::org::scalegraph::util::SString::_constructor(
          ret->org::scalegraph::util::MemoryChunk<x10_byte>::subpart(
            ((x10_long) (((x10_int)0))), (__extension__ ({
                str->FMGL(data)->FMGL(size);
            }))
            ));
        alloc132707;
    }))
    ;
    
}

//#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::io::FileReader::fastReadLine(
  ) {
    
    //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString alloc132708 =  org::scalegraph::util::SString::_alloc();
        
        //#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10ConstructorCall_c
        (alloc132708)->::org::scalegraph::util::SString::_constructor(
          this->org::scalegraph::io::FileReader::internalReadLine());
        alloc132708;
    }))
    ;
    
}

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::FileReader* org::scalegraph::io::FileReader::org__scalegraph__io__FileReader____this__org__scalegraph__io__FileReader(
  ) {
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::FileReader::__fieldInitializers132360(
  ) {
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(offset) = ((x10_long)0ll);
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(length) = ((x10_long)0ll);
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/FileReader.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(fileOffset) = ((x10_long)0ll);
}
const x10aux::serialization_id_t org::scalegraph::io::FileReader::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::FileReader::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::FileReader::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(buffer));
    buf.write(this->FMGL(offset));
    buf.write(this->FMGL(length));
    buf.write(this->FMGL(fileOffset));
    
}

x10::lang::Reference* org::scalegraph::io::FileReader::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::FileReader* this_ = new (memset(x10aux::alloc<org::scalegraph::io::FileReader>(), 0, sizeof(org::scalegraph::io::FileReader))) org::scalegraph::io::FileReader();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::FileReader::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(buffer) = buf.read<org::scalegraph::util::GrowableMemory<x10_byte>*>();
    FMGL(offset) = buf.read<x10_long>();
    FMGL(length) = buf.read<x10_long>();
    FMGL(fileOffset) = buf.read<x10_long>();
}

x10aux::RuntimeType org::scalegraph::io::FileReader::rtt;
void org::scalegraph::io::FileReader::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.io.FileReader",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of FileReader */
/*************************************************/

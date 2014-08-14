/*************************************************/
/* START of Bitmap */
#include <org/scalegraph/util/Bitmap.h>

#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Zero.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/LongRange.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/compiler/Inline.h>

//#line 18 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::Bitmap::FMGL(BitsPerWord);
void org::scalegraph::util::Bitmap::FMGL(BitsPerWord__do_init)() {
    FMGL(BitsPerWord__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Bitmap.BitsPerWord");
    x10_int __var508__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)64));
    FMGL(BitsPerWord) = __var508__;
    FMGL(BitsPerWord__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Bitmap::FMGL(BitsPerWord__init)() {
    x10aux::StaticInitController::initField(&FMGL(BitsPerWord__status), &FMGL(BitsPerWord__do_init), &FMGL(BitsPerWord__exception), "org::scalegraph::util::Bitmap.BitsPerWord");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Bitmap::FMGL(BitsPerWord__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Bitmap::FMGL(BitsPerWord__exception);

//#line 19 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10FieldDecl_c

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10FieldDecl_c

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Bitmap::_constructor(x10_long size) {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Bitmap* this104104 = this;
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this104104)->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this104104)->FMGL(size) = ((x10_long)0ll);
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long numWords = ((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (((x10_int)64))))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
    //#line 24 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = org::scalegraph::util::MemoryChunk<x10_ulong >::_make(numWords, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = size;
}
org::scalegraph::util::Bitmap* org::scalegraph::util::Bitmap::_make(x10_long size)
{
    org::scalegraph::util::Bitmap* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap();
    this_->_constructor(size);
    return this_;
}



//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Bitmap::_constructor(x10_long size, x10_boolean initv) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Bitmap* this104105 = this;
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this104105)->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this104105)->FMGL(size) = ((x10_long)0ll);
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long numWords = ((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (((x10_int)64))))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = org::scalegraph::util::MemoryChunk<x10_ulong >::_make(numWords, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = size;
    
    //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong value = initv ? (((x10_ulong)0xFFFFFFFFFFFFFFFFllu))
      : (((x10_ulong)0ull));
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i78958domain104110 = (__extension__ ({
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_ulong> this104111 =
          this->FMGL(mc);
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this104111->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long i78958max104112 = i78958domain104110->FMGL(max);
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.For_c
    {
        x10_long i104113;
        for (
             //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
             i104113 = ((x10_long)0ll); ((i104113) <= (i78958max104112));
             
             //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
             i104113 = ((x10_long) ((i104113) + (((x10_long)1ll)))))
        {
            
            //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            x10_long i104114 = i104113;
            
            //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_ulong> this104106 =
              this->FMGL(mc);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index104107 = i104114;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_ulong value104108 = value;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_ulong ret104109;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this104106->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104107) < (((x10_long) (((x10_int)0))))) ||
                    ((index104107) >= (this104106->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104107), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this104106->FMGL(data)).set(index104107, value104108);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104109 = value104108;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret104109;
        }
    }
    
}
org::scalegraph::util::Bitmap* org::scalegraph::util::Bitmap::_make(
  x10_long size, x10_boolean initv) {
    org::scalegraph::util::Bitmap* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap();
    this_->_constructor(size, initv);
    return this_;
}



//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Bitmap::_constructor(org::scalegraph::util::MemoryChunk<x10_ulong> baseMemory) {
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::Bitmap* this104115 = this;
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this104115)->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this104115)->FMGL(size) = ((x10_long)0ll);
    
    //#line 37 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = baseMemory;
    
    //#line 38 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long) (((__extension__ ({
        baseMemory->FMGL(data)->FMGL(size);
    }))
    ) * (((x10_long) (((x10_int)64))))));
}
org::scalegraph::util::Bitmap* org::scalegraph::util::Bitmap::_make(
  org::scalegraph::util::MemoryChunk<x10_ulong> baseMemory)
{
    org::scalegraph::util::Bitmap* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap();
    this_->_constructor(baseMemory);
    return this_;
}



//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::del() {
    
    //#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_ulong> this104116 =
      this->FMGL(mc);
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (this104116->FMGL(data)).del();
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long) (((x10_int)0)));
}

//#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::Bitmap::size() {
    
    //#line 46 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return this->FMGL(size);
    
}

//#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_ulong> org::scalegraph::util::Bitmap::raw(
  ) {
    
    //#line 47 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return this->FMGL(mc);
    
}

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::Bitmap::offset(x10_long i) {
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
}

//#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_ulong org::scalegraph::util::Bitmap::mask(x10_long i) {
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
    
}

//#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::Bitmap::numWords(x10_long length) {
    
    //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return ((x10_long) ((((x10_long) ((((x10_long) ((length) + (((x10_long) (((x10_int)64))))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
}

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_ulong org::scalegraph::util::Bitmap::word(x10_long offset) {
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_ulong> this104071 =
          this->FMGL(mc);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index104070 = offset;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_ulong ret104072;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this104071->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index104070) < (((x10_long) (((x10_int)0))))) ||
                ((index104070) >= (this104071->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104070), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret104072 = (this104071->FMGL(data))[index104070];
        ret104072;
    }))
    ;
    
}

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::clear(x10_boolean initv) {
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong value = initv ? (((x10_ulong)0xFFFFFFFFFFFFFFFFllu))
      : (((x10_ulong)0ull));
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i78977domain104121 = (__extension__ ({
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_ulong> this104122 =
          this->FMGL(mc);
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this104122->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long i78977max104123 = i78977domain104121->FMGL(max);
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.For_c
    {
        x10_long i104124;
        for (
             //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
             i104124 = ((x10_long)0ll); ((i104124) <= (i78977max104123));
             
             //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
             i104124 = ((x10_long) ((i104124) + (((x10_long)1ll)))))
        {
            
            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            x10_long i104125 = i104124;
            
            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_ulong> this104117 =
              this->FMGL(mc);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index104118 = i104125;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_ulong value104119 = value;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_ulong ret104120;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this104117->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index104118) < (((x10_long) (((x10_int)0))))) ||
                    ((index104118) >= (this104117->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index104118), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this104117->FMGL(data)).set(index104118, value104119);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret104120 = value104119;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret104120;
        }
    }
    
}

//#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Bitmap::__apply(x10_long i) {
    {
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 65 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
    //#line 66 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return (!x10aux::struct_equals(((x10_ulong) (((this->
                                                     FMGL(mc)->
                                                     FMGL(data))[wordOffset]) & (mask))),
                                   ((x10_ulong)0ull)));
    
}

//#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::__set(x10_long i, x10_boolean v) {
    {
        
        //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
    //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
    
    //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
    if (v) {
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MCData_Impl<x10_ulong > x104127 =
          this->FMGL(mc)->FMGL(data);
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_long y104128 = wordOffset;
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong z104129 = mask;
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong ret104130;
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong r104126 = ((x10_ulong) (((x104127)[y104128]) | (z104129)));
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
        (x104127).set(y104128, r104126);
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
        ret104130 = r104126;
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
        ret104130;
    } else {
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MCData_Impl<x10_ulong > x104132 =
          this->FMGL(mc)->FMGL(data);
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_long y104133 = wordOffset;
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong z104134 = ((x10_ulong) ~(mask));
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong ret104135;
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong r104131 = ((x10_ulong) (((x104132)[y104133]) & (z104134)));
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
        (x104132).set(y104133, r104131);
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
        ret104135 = r104131;
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
        ret104135;
    }
    
}

//#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::set(x10_long i) {
    {
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 84 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 86 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MCData_Impl<x10_ulong > x104137 =
      this->FMGL(mc)->FMGL(data);
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long y104138 = wordOffset;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong z104139 = mask;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong ret104140;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong r104136 = ((x10_ulong) (((x104137)[y104138]) | (z104139)));
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    (x104137).set(y104138, r104136);
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
    ret104140 = r104136;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
    ret104140;
}

//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::unset(x10_long i) {
    {
        
        //#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MCData_Impl<x10_ulong > x104142 =
      this->FMGL(mc)->FMGL(data);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long y104143 = wordOffset;
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong z104144 = ((x10_ulong) ~(mask));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong ret104145;
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong r104141 = ((x10_ulong) (((x104142)[y104143]) & (z104144)));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    (x104142).set(y104143, r104141);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
    ret104145 = r104141;
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
    ret104145;
}

//#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Bitmap::atomicSet(x10_long i) {
    {
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 106 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
    //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
    
    //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong old = (this->FMGL(mc)->FMGL(data)).atomicOr(wordOffset, mask);
    
    //#line 109 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return (!x10aux::struct_equals(((x10_ulong) ((old) & (mask))),
                                   ((x10_ulong)0ull)));
    
}

//#line 112 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Bitmap::atomicUnset(x10_long i) {
    {
        
        //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (((x10_int)64))))));
    
    //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (((x10_int)64))))))))))));
    
    //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong old = (this->FMGL(mc)->FMGL(data)).atomicAnd(wordOffset, ((x10_ulong) ~(mask)));
    
    //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return (!x10aux::struct_equals(((x10_ulong) ((old) & (mask))),
                                   ((x10_ulong)0ull)));
    
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Bitmap* org::scalegraph::util::Bitmap::org__scalegraph__util__Bitmap____this__org__scalegraph__util__Bitmap(
  ) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::__fieldInitializers78634(
  ) {
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long)0ll);
}
const x10aux::serialization_id_t org::scalegraph::util::Bitmap::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::Bitmap::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::util::Bitmap::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mc));
    buf.write(this->FMGL(size));
    
}

x10::lang::Reference* org::scalegraph::util::Bitmap::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::Bitmap* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::util::Bitmap::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mc) = buf.read<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    FMGL(size) = buf.read<x10_long>();
}

x10aux::RuntimeType org::scalegraph::util::Bitmap::rtt;
void org::scalegraph::util::Bitmap::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("org.scalegraph.util.Bitmap",x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Bitmap */
/*************************************************/

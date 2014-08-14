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
    x10_int __var1084__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)64));
    FMGL(BitsPerWord) = __var1084__;
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
    org::scalegraph::util::Bitmap* this120937 = this;
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this120937)->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this120937)->FMGL(size) = ((x10_long)0ll);
    
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
    org::scalegraph::util::Bitmap* this120938 = this;
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this120938)->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this120938)->FMGL(size) = ((x10_long)0ll);
    
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
    x10::lang::LongRange i76722domain120943 = (__extension__ ({
        
        //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_ulong> this120944 =
          this->FMGL(mc);
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this120944->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long i76722max120945 = i76722domain120943->FMGL(max);
    
    //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.For_c
    {
        x10_long i120946;
        for (
             //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
             i120946 = ((x10_long)0ll); ((i120946) <= (i76722max120945));
             
             //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
             i120946 = ((x10_long) ((i120946) + (((x10_long)1ll)))))
        {
            
            //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            x10_long i120947 = i120946;
            
            //#line 33 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_ulong> this120939 =
              this->FMGL(mc);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index120940 = i120947;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_ulong value120941 = value;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_ulong ret120942;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this120939->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index120940) < (((x10_long) (((x10_int)0))))) ||
                    ((index120940) >= (this120939->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index120940), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this120939->FMGL(data)).set(index120940, value120941);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret120942 = value120941;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret120942;
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
    org::scalegraph::util::Bitmap* this120948 = this;
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this120948)->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    
    //#line 17 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this120948)->FMGL(size) = ((x10_long)0ll);
    
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
    org::scalegraph::util::MemoryChunk<x10_ulong> this120949 =
      this->FMGL(mc);
    
    //#line 170 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
    (this120949->FMGL(data)).del();
    
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
        org::scalegraph::util::MemoryChunk<x10_ulong> this120904 =
          this->FMGL(mc);
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_long index120903 = offset;
        
        //#line 270 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
        x10_ulong ret120905;
        {
            
            //#line 272 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (!((this120904->FMGL(data)).isValid())) {
                
                //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 273 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                }
                
            }
            
            //#line 274 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
            if (((index120903) < (((x10_long) (((x10_int)0))))) ||
                ((index120903) >= (this120904->FMGL(data)->
                                     FMGL(size)))) {
                
                //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 275 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index120903), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                }
                
            }
            
        }
        
        //#line 277 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
        ret120905 = (this120904->FMGL(data))[index120903];
        ret120905;
    }))
    ;
    
}

//#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::clear(x10_boolean initv) {
    
    //#line 56 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong value = initv ? (((x10_ulong)0xFFFFFFFFFFFFFFFFllu))
      : (((x10_ulong)0ull));
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i76741domain120954 = (__extension__ ({
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_ulong> this120955 =
          this->FMGL(mc);
        x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this120955->
                                                                     FMGL(data)->
                                                                     FMGL(size)) - (((x10_long)1ll)))));
    }))
    ;
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long i76741max120956 = i76741domain120954->FMGL(max);
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.For_c
    {
        x10_long i120957;
        for (
             //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
             i120957 = ((x10_long)0ll); ((i120957) <= (i76741max120956));
             
             //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
             i120957 = ((x10_long) ((i120957) + (((x10_long)1ll)))))
        {
            
            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            x10_long i120958 = i120957;
            
            //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_ulong> this120950 =
              this->FMGL(mc);
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_long index120951 = i120958;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_ulong value120952 = value;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_ulong ret120953;
            {
                
                //#line 299 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((this120950->FMGL(data)).isValid()))
                {
                    
                    //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 300 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 301 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index120951) < (((x10_long) (((x10_int)0))))) ||
                    ((index120951) >= (this120950->FMGL(data)->
                                         FMGL(size)))) {
                    
                    //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 302 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index120951), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 304 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (this120950->FMGL(data)).set(index120951, value120952);
            
            //#line 305 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret120953 = value120952;
            
            //#line 297 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret120953;
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
        org::scalegraph::util::MCData_Impl<x10_ulong > x120960 =
          this->FMGL(mc)->FMGL(data);
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_long y120961 = wordOffset;
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong z120962 = mask;
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong ret120963;
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong r120959 = ((x10_ulong) (((x120960)[y120961]) | (z120962)));
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
        (x120960).set(y120961, r120959);
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
        ret120963 = r120959;
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
        ret120963;
    } else {
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MCData_Impl<x10_ulong > x120965 =
          this->FMGL(mc)->FMGL(data);
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_long y120966 = wordOffset;
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong z120967 = ((x10_ulong) ~(mask));
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong ret120968;
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong r120964 = ((x10_ulong) (((x120965)[y120966]) & (z120967)));
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
        (x120965).set(y120966, r120964);
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
        ret120968 = r120964;
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
        ret120968;
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
    org::scalegraph::util::MCData_Impl<x10_ulong > x120970 =
      this->FMGL(mc)->FMGL(data);
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long y120971 = wordOffset;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong z120972 = mask;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong ret120973;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong r120969 = ((x10_ulong) (((x120970)[y120971]) | (z120972)));
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    (x120970).set(y120971, r120969);
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
    ret120973 = r120969;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
    ret120973;
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
    org::scalegraph::util::MCData_Impl<x10_ulong > x120975 =
      this->FMGL(mc)->FMGL(data);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long y120976 = wordOffset;
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong z120977 = ((x10_ulong) ~(mask));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong ret120978;
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong r120974 = ((x10_ulong) (((x120975)[y120976]) & (z120977)));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    (x120975).set(y120976, r120974);
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
    ret120978 = r120974;
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
    ret120978;
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
void org::scalegraph::util::Bitmap::__fieldInitializers76398(
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

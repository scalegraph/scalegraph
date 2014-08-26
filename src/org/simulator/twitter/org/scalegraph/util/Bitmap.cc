/*************************************************/
/* START of Bitmap */
#include <org/scalegraph/util/Bitmap.h>

#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/ULong.h>
#include <x10/lang/Long.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/LongRange.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/compiler/Ifndef.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/Zero.h>

//#line 18 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10FieldDecl_c
x10_int org::scalegraph::util::Bitmap::FMGL(BitsPerWord);
void org::scalegraph::util::Bitmap::FMGL(BitsPerWord__do_init)() {
    FMGL(BitsPerWord__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::Bitmap.BitsPerWord");
    x10_int __var275__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)64));
    FMGL(BitsPerWord) = __var275__;
    FMGL(BitsPerWord__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::Bitmap::FMGL(BitsPerWord__init)() {
    x10aux::StaticInitController::initField(&FMGL(BitsPerWord__status), &FMGL(BitsPerWord__do_init), &FMGL(BitsPerWord__exception), "org::scalegraph::util::Bitmap.BitsPerWord");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::Bitmap::FMGL(BitsPerWord__status);
x10::lang::CheckedThrowable* org::scalegraph::util::Bitmap::FMGL(BitsPerWord__exception);

//#line 19 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10FieldDecl_c

//#line 20 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10FieldDecl_c

//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Bitmap::_constructor(x10_long size) {
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Empty_c
    ;
    
    //#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::Bitmap::__fieldInitializers45980();
    
    //#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long numWords = ((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (org::scalegraph::util::Bitmap::
                                                                                          FMGL(BitsPerWord__get)())))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                                                                               FMGL(BitsPerWord__get)())))));
    
    //#line 24 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = org::scalegraph::util::MemoryChunk<x10_ulong >::_make(numWords, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 25 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = size;
}
org::scalegraph::util::Bitmap* org::scalegraph::util::Bitmap::_make(
  x10_long size) {
    org::scalegraph::util::Bitmap* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap();
    this_->_constructor(size);
    return this_;
}



//#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Bitmap::_constructor(x10_long size,
                                                 x10_boolean initv) {
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Empty_c
    ;
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::Bitmap::__fieldInitializers45980();
    
    //#line 29 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long numWords = ((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (org::scalegraph::util::Bitmap::
                                                                                          FMGL(BitsPerWord__get)())))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                                                                               FMGL(BitsPerWord__get)())))));
    
    //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = org::scalegraph::util::MemoryChunk<x10_ulong >::_make(numWords, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 31 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = size;
    
    //#line 32 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong value = initv ? (((x10_ulong) ~(((x10_ulong)0ull))))
      : (((x10_ulong)0ull));
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i46261domain46318 = this->FMGL(mc)->org::scalegraph::util::MemoryChunk<x10_ulong>::range();
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long i46261min46319 = i46261domain46318->FMGL(min);
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long i46261max46320 = i46261domain46318->FMGL(max);
    
    //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.For_c
    {
        x10_long i46321;
        for (
             //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
             i46321 = i46261min46319; ((i46321) <= (i46261max46320));
             
             //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
             i46321 = ((x10_long) ((i46321) + (((x10_long)1ll)))))
        {
            
            //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            x10_long i46322 = i46321;
            
            //#line 33 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
            this->FMGL(mc)->org::scalegraph::util::MemoryChunk<x10_ulong>::__set(
              i46322, value);
        }
    }
    
}
org::scalegraph::util::Bitmap* org::scalegraph::util::Bitmap::_make(
  x10_long size, x10_boolean initv) {
    org::scalegraph::util::Bitmap* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap();
    this_->_constructor(size, initv);
    return this_;
}



//#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::util::Bitmap::_constructor(org::scalegraph::util::MemoryChunk<x10_ulong> baseMemory) {
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Empty_c
    ;
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.AssignPropertyCall_c
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::Bitmap::__fieldInitializers45980();
    
    //#line 37 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = baseMemory;
    
    //#line 38 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long) ((baseMemory->org::scalegraph::util::MemoryChunk<x10_ulong>::size()) * (((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                          FMGL(BitsPerWord__get)())))));
}
org::scalegraph::util::Bitmap* org::scalegraph::util::Bitmap::_make(
  org::scalegraph::util::MemoryChunk<x10_ulong> baseMemory)
{
    org::scalegraph::util::Bitmap* this_ = new (memset(x10aux::alloc<org::scalegraph::util::Bitmap>(), 0, sizeof(org::scalegraph::util::Bitmap))) org::scalegraph::util::Bitmap();
    this_->_constructor(baseMemory);
    return this_;
}



//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::del() {
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    this->FMGL(mc)->org::scalegraph::util::MemoryChunk<x10_ulong>::del();
    
    //#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long) (((x10_int)0)));
}

//#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::Bitmap::size() {
    
    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return this->FMGL(size);
    
}

//#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::MemoryChunk<x10_ulong> org::scalegraph::util::Bitmap::raw(
  ) {
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return this->FMGL(mc);
    
}

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::Bitmap::offset(x10_long i) {
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                               FMGL(BitsPerWord__get)())))));
    
}

//#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_ulong org::scalegraph::util::Bitmap::mask(x10_long i) {
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                         FMGL(BitsPerWord__get)())))))))))));
    
}

//#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_long org::scalegraph::util::Bitmap::numWords(x10_long length) {
    
    //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return ((x10_long) ((((x10_long) ((((x10_long) ((length) + (((x10_long) (org::scalegraph::util::Bitmap::
                                                                               FMGL(BitsPerWord__get)())))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                                                                    FMGL(BitsPerWord__get)())))));
    
}

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_ulong org::scalegraph::util::Bitmap::word(x10_long offset) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return this->FMGL(mc)->org::scalegraph::util::MemoryChunk<x10_ulong>::__apply(
             offset);
    
}

//#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::clear(x10_boolean initv) {
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong value = initv ? (((x10_ulong) ~(((x10_ulong)0ull))))
      : (((x10_ulong)0ull));
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i46278domain46323 = this->FMGL(mc)->org::scalegraph::util::MemoryChunk<x10_ulong>::range();
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long i46278min46324 = i46278domain46323->FMGL(min);
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long i46278max46325 = i46278domain46323->FMGL(max);
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.For_c
    {
        x10_long i46326;
        for (
             //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
             i46326 = i46278min46324; ((i46326) <= (i46278max46325));
             
             //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
             i46326 = ((x10_long) ((i46326) + (((x10_long)1ll)))))
        {
            
            //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
            x10_long i46327 = i46326;
            
            //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
            this->FMGL(mc)->org::scalegraph::util::MemoryChunk<x10_ulong>::__set(
              i46327, value);
        }
    }
    
}

//#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Bitmap::__apply(x10_long i) {
    {
        
        //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                              FMGL(BitsPerWord__get)())))));
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                   FMGL(BitsPerWord__get)())))))))))));
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return (!x10aux::struct_equals(((x10_ulong) (((this->
                                                     FMGL(mc)->
                                                     FMGL(data))[wordOffset]) & (mask))),
                                   ((x10_ulong)0ull)));
    
}

//#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::__set(x10_long i, x10_boolean v) {
    {
        
        //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                              FMGL(BitsPerWord__get)())))));
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                   FMGL(BitsPerWord__get)())))))))))));
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
    if (v) {
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MCData_Impl<x10_ulong > x46329 =
          this->FMGL(mc)->FMGL(data);
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_long y46330 = wordOffset;
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong z46331 = mask;
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong ret46332;
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong r46328 = ((x10_ulong) (((x46329)[y46330]) | (z46331)));
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
        (x46329).set(y46330, r46328);
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
        ret46332 = r46328;
        
        //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
        ret46332;
    } else {
        
        //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MCData_Impl<x10_ulong > x46334 =
          this->FMGL(mc)->FMGL(data);
        
        //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_long y46335 = wordOffset;
        
        //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong z46336 = ((x10_ulong) ~(mask));
        
        //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong ret46337;
        
        //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
        x10_ulong r46333 = ((x10_ulong) (((x46334)[y46335]) & (z46336)));
        
        //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
        (x46334).set(y46335, r46333);
        
        //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
        ret46337 = r46333;
        
        //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
        ret46337;
    }
    
}

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::set(x10_long i) {
    {
        
        //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 84 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                              FMGL(BitsPerWord__get)())))));
    
    //#line 87 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                   FMGL(BitsPerWord__get)())))))))))));
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MCData_Impl<x10_ulong > x46339 =
      this->FMGL(mc)->FMGL(data);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long y46340 = wordOffset;
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong z46341 = mask;
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong ret46342;
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong r46338 = ((x10_ulong) (((x46339)[y46340]) | (z46341)));
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    (x46339).set(y46340, r46338);
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
    ret46342 = r46338;
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
    ret46342;
}

//#line 91 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::unset(x10_long i) {
    {
        
        //#line 93 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 96 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                              FMGL(BitsPerWord__get)())))));
    
    //#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                   FMGL(BitsPerWord__get)())))))))))));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MCData_Impl<x10_ulong > x46344 =
      this->FMGL(mc)->FMGL(data);
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long y46345 = wordOffset;
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong z46346 = ((x10_ulong) ~(mask));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong ret46347;
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong r46343 = ((x10_ulong) (((x46344)[y46345]) & (z46346)));
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Call_c
    (x46344).set(y46345, r46343);
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10LocalAssign_c
    ret46347 = r46343;
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10Local_c
    ret46347;
}

//#line 101 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Bitmap::atomicSet(x10_long i) {
    {
        
        //#line 103 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                              FMGL(BitsPerWord__get)())))));
    
    //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                   FMGL(BitsPerWord__get)())))))))))));
    
    //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong old = (this->FMGL(mc)->FMGL(data)).atomicOr(wordOffset, mask);
    
    //#line 109 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return (!x10aux::struct_equals(((x10_ulong) ((old) & (mask))),
                                   ((x10_ulong)0ull)));
    
}

//#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::util::Bitmap::atomicUnset(x10_long i) {
    {
        
        //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10If_c
        if (((i) < (((x10_long) (((x10_int)0))))) || ((i) > (this->
                                                               FMGL(size))))
        {
            
            //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("specified range is not contained in MemoryChunk"))));
        }
        
    }
    
    //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_long wordOffset = ((x10_long) ((i) / x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                              FMGL(BitsPerWord__get)())))));
    
    //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong mask = ((x10_ulong) ((((x10_ulong)1ull)) << (0x3f & (((x10_int) (((x10_long) ((i) % x10aux::zeroCheck(((x10_long) (org::scalegraph::util::Bitmap::
                                                                                                                                   FMGL(BitsPerWord__get)())))))))))));
    
    //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10LocalDecl_c
    x10_ulong old = (this->FMGL(mc)->FMGL(data)).atomicAnd(wordOffset, ((x10_ulong) ~(mask)));
    
    //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return (!x10aux::struct_equals(((x10_ulong) ((old) & (mask))),
                                   ((x10_ulong)0ull)));
    
}

//#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::Bitmap* org::scalegraph::util::Bitmap::org__scalegraph__util__Bitmap____this__org__scalegraph__util__Bitmap(
  ) {
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::util::Bitmap::__fieldInitializers45980(
  ) {
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<x10_ulong> >();
    
    //#line 17 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Bitmap.x10": Eval of x10.ast.X10FieldAssign_c
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

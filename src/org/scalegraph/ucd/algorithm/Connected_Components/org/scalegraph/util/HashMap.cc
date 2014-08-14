/*************************************************/
/* START of Pair */
#include <org/scalegraph/util/Pair.h>

x10aux::RuntimeType org::scalegraph::util::Pair<void, void>::rtt;

/* END of Pair */
/*************************************************/
/*************************************************/
/* START of HashMap */
#include <org/scalegraph/util/HashMap.h>

x10aux::RuntimeType org::scalegraph::util::HashMap<void, void>::rtt;
x10_int org::scalegraph::util::HashMap<void, void>::pow2floor(x10_int x) {
                                                                             
                                                                             //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10LocalDecl_c
                                                                             x10_int pow2 =
                                                                               ((x10_int)1);
                                                                             
                                                                             //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10While_c
                                                                             while (((pow2) < (x)))
                                                                             {
                                                                                 
                                                                                 //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": Eval of x10.ast.X10LocalAssign_c
                                                                                 pow2 =
                                                                                   ((x10_int) ((pow2) << (0x1f & (((x10_int)1)))));
                                                                             }
                                                                             
                                                                             //#line 80 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
                                                                             return pow2;
                                                                             
                                                                         }
x10_int org::scalegraph::util::HashMap<void, void>::FMGL(nChunk);
void org::scalegraph::util::HashMap<void, void>::FMGL(nChunk__do_init)() {
    FMGL(nChunk__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::HashMap<void, void>.nChunk");
    x10_int __var1790__ = x10aux::class_cast_unchecked<x10_int>(org::scalegraph::util::HashMap<void, void>::pow2floor(
                                                                  x10::lang::Runtime::
                                                                    FMGL(NTHREADS__get)()));
    FMGL(nChunk) = __var1790__;
    FMGL(nChunk__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::HashMap<void, void>::FMGL(nChunk__init)() {
    x10aux::StaticInitController::initField(&FMGL(nChunk__status), &FMGL(nChunk__do_init), &FMGL(nChunk__exception), "org::scalegraph::util::HashMap<void, void>.nChunk");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::HashMap<void, void>::FMGL(nChunk__status);
x10::lang::CheckedThrowable* org::scalegraph::util::HashMap<void, void>::FMGL(nChunk__exception);
x10_int org::scalegraph::util::HashMap<void, void>::FMGL(nMaskBits);
void org::scalegraph::util::HashMap<void, void>::FMGL(nMaskBits__do_init)() {
    FMGL(nMaskBits__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::HashMap<void, void>.nMaskBits");
    x10_int __var1791__ = x10aux::class_cast_unchecked<x10_int>(63 - __builtin_clzl(((((x10_long) (org::scalegraph::util::HashMap<void, void>::
                                                                                                     FMGL(nChunk__get)()))) << 1) - 1));
    FMGL(nMaskBits) = __var1791__;
    FMGL(nMaskBits__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::HashMap<void, void>::FMGL(nMaskBits__init)() {
    x10aux::StaticInitController::initField(&FMGL(nMaskBits__status), &FMGL(nMaskBits__do_init), &FMGL(nMaskBits__exception), "org::scalegraph::util::HashMap<void, void>.nMaskBits");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::HashMap<void, void>::FMGL(nMaskBits__status);
x10::lang::CheckedThrowable* org::scalegraph::util::HashMap<void, void>::FMGL(nMaskBits__exception);
x10_int org::scalegraph::util::HashMap<void, void>::FMGL(MAX_PROBES);
void org::scalegraph::util::HashMap<void, void>::FMGL(MAX_PROBES__do_init)() {
    FMGL(MAX_PROBES__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::HashMap<void, void>.MAX_PROBES");
    x10_int __var1792__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)3));
    FMGL(MAX_PROBES) = __var1792__;
    FMGL(MAX_PROBES__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::HashMap<void, void>::FMGL(MAX_PROBES__init)() {
    x10aux::StaticInitController::initField(&FMGL(MAX_PROBES__status), &FMGL(MAX_PROBES__do_init), &FMGL(MAX_PROBES__exception), "org::scalegraph::util::HashMap<void, void>.MAX_PROBES");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::HashMap<void, void>::FMGL(MAX_PROBES__status);
x10::lang::CheckedThrowable* org::scalegraph::util::HashMap<void, void>::FMGL(MAX_PROBES__exception);
x10_int org::scalegraph::util::HashMap<void, void>::FMGL(MIN_SIZE);
void org::scalegraph::util::HashMap<void, void>::FMGL(MIN_SIZE__do_init)() {
    FMGL(MIN_SIZE__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::HashMap<void, void>.MIN_SIZE");
    x10_int __var1793__ = x10aux::class_cast_unchecked<x10_int>(((x10_int)4));
    FMGL(MIN_SIZE) = __var1793__;
    FMGL(MIN_SIZE__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::HashMap<void, void>::FMGL(MIN_SIZE__init)() {
    x10aux::StaticInitController::initField(&FMGL(MIN_SIZE__status), &FMGL(MIN_SIZE__do_init), &FMGL(MIN_SIZE__exception), "org::scalegraph::util::HashMap<void, void>.MIN_SIZE");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::HashMap<void, void>::FMGL(MIN_SIZE__status);
x10::lang::CheckedThrowable* org::scalegraph::util::HashMap<void, void>::FMGL(MIN_SIZE__exception);
x10_int org::scalegraph::util::HashMap<void, void>::hashToIndex(x10_int idx,
                                                                x10_int n)
{
    
    //#line 141 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/HashMap.x10": x10.ast.X10Return_c
    return ((x10_int) (((x10_uint) ((((x10_uint) (idx))) >> (0x1f & (((x10_int) ((((x10_int)32)) - (n)))))))));
    
}

/* END of HashMap */
/*************************************************/
/*************************************************/
/* START of HashMap$HashEntry */
#include <org/scalegraph/util/HashMap__HashEntry.h>

x10aux::RuntimeType org::scalegraph::util::HashMap__HashEntry<void, void>::rtt;
x10_byte org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(EMPTY);
void org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(EMPTY__do_init)() {
    FMGL(EMPTY__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::HashMap__HashEntry<void, void>.EMPTY");
    x10_byte __var1804__ = x10aux::class_cast_unchecked<x10_byte>(((x10_byte) (((x10_int)0))));
    FMGL(EMPTY) = __var1804__;
    FMGL(EMPTY__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(EMPTY__init)() {
    x10aux::StaticInitController::initField(&FMGL(EMPTY__status), &FMGL(EMPTY__do_init), &FMGL(EMPTY__exception), "org::scalegraph::util::HashMap__HashEntry<void, void>.EMPTY");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(EMPTY__status);
x10::lang::CheckedThrowable* org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(EMPTY__exception);
x10_byte org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(OCCUPIED);
void org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(OCCUPIED__do_init)() {
    FMGL(OCCUPIED__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::HashMap__HashEntry<void, void>.OCCUPIED");
    x10_byte __var1805__ = x10aux::class_cast_unchecked<x10_byte>(((x10_byte) (((x10_int)1))));
    FMGL(OCCUPIED) = __var1805__;
    FMGL(OCCUPIED__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(OCCUPIED__init)() {
    x10aux::StaticInitController::initField(&FMGL(OCCUPIED__status), &FMGL(OCCUPIED__do_init), &FMGL(OCCUPIED__exception), "org::scalegraph::util::HashMap__HashEntry<void, void>.OCCUPIED");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(OCCUPIED__status);
x10::lang::CheckedThrowable* org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(OCCUPIED__exception);
x10_byte org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(DUMMY);
void org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(DUMMY__do_init)() {
    FMGL(DUMMY__status) = x10aux::StaticInitController::INITIALIZING;
    _SI_("Doing static initialization for field: org::scalegraph::util::HashMap__HashEntry<void, void>.DUMMY");
    x10_byte __var1806__ = x10aux::class_cast_unchecked<x10_byte>(((x10_byte) (((x10_int)2))));
    FMGL(DUMMY) = __var1806__;
    FMGL(DUMMY__status) = x10aux::StaticInitController::INITIALIZED;
}
void org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(DUMMY__init)() {
    x10aux::StaticInitController::initField(&FMGL(DUMMY__status), &FMGL(DUMMY__do_init), &FMGL(DUMMY__exception), "org::scalegraph::util::HashMap__HashEntry<void, void>.DUMMY");
    
}
volatile x10aux::StaticInitController::status org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(DUMMY__status);
x10::lang::CheckedThrowable* org::scalegraph::util::HashMap__HashEntry<void, void>::FMGL(DUMMY__exception);

/* END of HashMap$HashEntry */
/*************************************************/

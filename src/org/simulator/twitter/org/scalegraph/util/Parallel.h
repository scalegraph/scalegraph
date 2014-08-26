#ifndef __ORG_SCALEGRAPH_UTIL_PARALLEL_H
#define __ORG_SCALEGRAPH_UTIL_PARALLEL_H

#include <x10rt.h>


namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace util { 
class Timer;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2), class TPMGL(U)> class Fun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace org { namespace scalegraph { namespace util { 
class MathAppend;
} } } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace compiler { 
class Finalization;
} } 
namespace x10 { namespace compiler { 
class Abort;
} } 
namespace x10 { namespace compiler { 
class CompilerFlags;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Comparable;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class ArrayList;
} } 
namespace x10 { namespace lang { 
class Double;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class Error;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace org { namespace scalegraph { namespace util { 
class ScatterGather;
} } } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(Z2)> class VoidFun_0_2;
} } 
namespace org { namespace scalegraph { namespace util { 
class Algorithm;
} } } 
namespace x10 { namespace lang { 
class IntRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1)> class VoidFun_0_1;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace org { namespace scalegraph { namespace util { 

class Parallel : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10_int FMGL(threashold1);
    static void FMGL(threashold1__do_init)();
    static void FMGL(threashold1__init)();
    static volatile x10aux::StaticInitController::status FMGL(threashold1__status);
    static x10::lang::CheckedThrowable* FMGL(threashold1__exception);
    static x10_int FMGL(threashold1__get)();
    
    static x10_int FMGL(threashold2);
    static void FMGL(threashold2__do_init)();
    static void FMGL(threashold2__init)();
    static volatile x10aux::StaticInitController::status FMGL(threashold2__status);
    static x10::lang::CheckedThrowable* FMGL(threashold2__exception);
    static x10_int FMGL(threashold2__get)();
    
    static x10_boolean FMGL(debug);
    static void FMGL(debug__do_init)();
    static void FMGL(debug__init)();
    static volatile x10aux::StaticInitController::status FMGL(debug__status);
    static x10::lang::CheckedThrowable* FMGL(debug__exception);
    static x10_boolean FMGL(debug__get)();
    
    void _constructor();
    
    static org::scalegraph::util::Parallel* _make();
    
    static void debugln(x10::lang::String* str);
    template<class TPMGL(T)> static void merge(x10::util::IndexedMemoryChunk<TPMGL(T) > a,
                                               x10::util::IndexedMemoryChunk<TPMGL(T) > b,
                                               x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void exch(x10::util::IndexedMemoryChunk<TPMGL(T) > a,
                                              x10_long i,
                                              x10_long j);
    template<class TPMGL(T)> static void exch(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                              x10_long i,
                                              x10_long j);
    template<class TPMGL(T), class TPMGL(U)> static void exch(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long i, x10_long j);
    template<class TPMGL(T)> static void sort(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                              x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void sort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void sort(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                              x10_int proc,
                                              x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void sort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_int proc, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void sort(org::scalegraph::util::MemoryChunk<TPMGL(T)> a);
    template<class TPMGL(T), class TPMGL(U)> static void sort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v);
    template<class TPMGL(T)> static TPMGL(T) getMedian(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                       x10_long lo,
                                                       x10_long hi,
                                                       x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp,
                                                       x10_long skip);
    template<class TPMGL(T)> static void _sort(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                               x10_int proc,
                                               x10_long lo,
                                               x10_long hi,
                                               x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void _sort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_int proc, x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void introSort(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                   x10_long lo,
                                                   x10_long hi,
                                                   x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void introSort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static x10_long unguardedPartition(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
      x10_long hi, TPMGL(T) pivot, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static x10_long
      unguardedPartition(org::scalegraph::util::MemoryChunk<TPMGL(T)> k,
                         org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
                         x10_long lo, x10_long hi, TPMGL(T) pivot,
                         x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void finalInsertionSort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
      x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void finalInsertionSort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void unguardedInsertionSort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
      x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void unguardedInsertionSort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void insertionSort(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                       x10_long lo,
                                                       x10_long hi,
                                                       x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void insertionSort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void unguardedLinearInsert(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long last,
      TPMGL(T) v, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void unguardedLinearInsert(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long last, TPMGL(T) kv, TPMGL(U) vv, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static TPMGL(T) median(TPMGL(T) a,
                                                    TPMGL(T) b,
                                                    TPMGL(T) c,
                                                    x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void makeHeap(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                  x10_long lo,
                                                  x10_long hi,
                                                  x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void makeHeap(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void print_chunk(org::scalegraph::util::MemoryChunk<TPMGL(T)> a);
    template<class TPMGL(T)> static void partial_sort(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                      x10_long lo,
                                                      x10_long hi,
                                                      x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void partial_sort(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void pop_heap(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                  x10_long lo,
                                                  x10_long hi,
                                                  x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void pop_heap(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void push_heap(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                   x10_long lo,
                                                   x10_long hi,
                                                   x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void push_heap(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void push_heap(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                   x10_long lo,
                                                   x10_long holeIndex,
                                                   x10_long topIndex,
                                                   TPMGL(T) value,
                                                   x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void push_heap(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long holeIndex, x10_long topIndex,
      TPMGL(T) valueK, TPMGL(U) valueV, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void adjustHeap(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                    x10_long lo,
                                                    x10_long holeIndex,
                                                    x10_long len,
                                                    TPMGL(T) value,
                                                    x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T), class TPMGL(U)> static void adjustHeap(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long holeIndex, x10_long len, TPMGL(T) valueK,
      TPMGL(U) valueU, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp);
    template<class TPMGL(T)> static void introSortLoop(org::scalegraph::util::MemoryChunk<TPMGL(T)> a,
                                                       x10_long lo,
                                                       x10_long hi,
                                                       x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp,
                                                       x10_int depth_limit);
    template<class TPMGL(T), class TPMGL(U)> static void introSortLoop(
      org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
      x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp,
      x10_int depth_limit);
    template<class TPMGL(V)> static void sort(x10_int rangeScale,
                                              org::scalegraph::util::MemoryChunk<x10_long> key,
                                              org::scalegraph::util::MemoryChunk<TPMGL(V)> v,
                                              org::scalegraph::util::MemoryChunk<x10_long> key_tmp,
                                              org::scalegraph::util::MemoryChunk<TPMGL(V)> v_tmp);
    template<class TPMGL(V)> static void sort_old(x10_int rangeScale,
                                                  org::scalegraph::util::MemoryChunk<x10_long> src_i,
                                                  org::scalegraph::util::MemoryChunk<TPMGL(V)> src_v,
                                                  org::scalegraph::util::MemoryChunk<x10_long> dst_i,
                                                  org::scalegraph::util::MemoryChunk<TPMGL(V)> dst_v);
    template<class TPMGL(V1), class TPMGL(V2)> static void
      sort(x10_int rangeScale, org::scalegraph::util::MemoryChunk<x10_long> key,
           org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1,
           org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2,
           org::scalegraph::util::MemoryChunk<x10_long> key_tmp,
           org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1_tmp,
           org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2_tmp);
    template<class TPMGL(V1), class TPMGL(V2)> static void
      sort_old(x10_int rangeScale, org::scalegraph::util::MemoryChunk<x10_long> src_i,
               org::scalegraph::util::MemoryChunk<TPMGL(V1)> src_v1,
               org::scalegraph::util::MemoryChunk<TPMGL(V2)> src_v2,
               org::scalegraph::util::MemoryChunk<x10_long> dst_i,
               org::scalegraph::util::MemoryChunk<TPMGL(V1)> dst_v1,
               org::scalegraph::util::MemoryChunk<TPMGL(V2)> dst_v2);
    static x10_int binarySearch(x10::lang::IntRange range,
                                x10::lang::Fun_0_1<x10_int, x10_boolean>* func);
    static x10::lang::Any* binarySearch(x10::lang::LongRange range,
                                        x10::lang::Fun_0_1<x10_long, x10_boolean>* func);
    static x10_int search(x10::lang::IntRange range, x10::lang::Fun_0_1<x10_int, x10_boolean>* func);
    template<class TPMGL(T)> static x10::array::Array<TPMGL(T)>*
      appendMap(x10::lang::IntRange range, x10::lang::Fun_0_1<x10_int, x10::array::Array<TPMGL(T)>*>* func);
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> >
      partition(org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
                x10::lang::Fun_0_1<TPMGL(T), x10_int>* func,
                x10_int kinds);
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> >
      partition(org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
                x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>* func,
                x10_int kinds);
    template<class TPMGL(T)> static x10::array::Array<TPMGL(T)>*
      map(x10::array::Region* region, x10::lang::Fun_0_1<x10_int, TPMGL(T)>* func);
    template<class TPMGL(T)> static x10::array::Array<TPMGL(T)>*
      map(x10::lang::IntRange range, x10::lang::Fun_0_1<x10_int, TPMGL(T)>* func);
    static void iter(x10::lang::IntRange range, x10::lang::VoidFun_0_1<x10_int>* func);
    static void iter(x10::lang::LongRange range, x10::lang::VoidFun_0_1<x10_long>* func);
    static void iter(x10::lang::IntRange range, x10::lang::VoidFun_0_2<x10_int, x10::lang::IntRange>* func);
    static void iter(x10::lang::LongRange range, x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>* func);
    template<class TPMGL(U)> static TPMGL(U) reduce(x10::lang::IntRange range,
                                                    x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func,
                                                    x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op);
    template<class TPMGL(U)> static TPMGL(U) reduce(x10::lang::LongRange range,
                                                    x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func,
                                                    x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op);
    template<class TPMGL(U)> static TPMGL(U) reduce(x10::lang::LongRange range,
                                                    x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, TPMGL(U)>* func,
                                                    x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op);
    template<class TPMGL(U)> static TPMGL(U) scan(x10::lang::IntRange range,
                                                  x10::array::Array<TPMGL(U)>* dst,
                                                  TPMGL(U) init,
                                                  x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func,
                                                  x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op);
    template<class TPMGL(U)> static TPMGL(U) scan(x10::lang::LongRange range,
                                                  org::scalegraph::util::MemoryChunk<TPMGL(U)> dst,
                                                  TPMGL(U) init,
                                                  x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func,
                                                  x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op);
    template<class TPMGL(U)> static TPMGL(U) prefixSum(x10::lang::IntRange range,
                                                       x10::array::Array<TPMGL(U)>* arr);
    static void makeOffset(org::scalegraph::util::MemoryChunk<x10_long> sortedIndex,
                           org::scalegraph::util::MemoryChunk<x10_long> offset);
    virtual org::scalegraph::util::Parallel* org__scalegraph__util__Parallel____this__org__scalegraph__util__Parallel(
      );
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H

namespace org { namespace scalegraph { namespace util { 
class Parallel;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/util/Timer.h>
#include <x10/lang/Long.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/compiler/Inline.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Fun_0_2.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <org/scalegraph/util/MathAppend.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Comparable.h>
#include <x10/util/ArrayList.h>
#include <x10/lang/Double.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Math.h>
#include <org/scalegraph/util/ScatterGather.h>
#include <x10/lang/VoidFun_0_2.h>
#include <org/scalegraph/util/Algorithm.h>
#include <x10/lang/IntRange.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/array/Array.h>
#include <x10/array/Region.h>
#include <x10/lang/VoidFun_0_1.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/lang/Zero.h>
#include <x10/lang/Arithmetic.h>
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <org_scalegraph_util_Parallel__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(TPMGL(T) x, TPMGL(T) y) {
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10::lang::Comparable<TPMGL(T) >::compareTo(x10aux::class_cast_unchecked<x10::lang::Comparable<TPMGL(T) >*>(x), y);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_util_Parallel__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__1<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__1() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:102";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <org_scalegraph_util_Parallel__closure__1<TPMGL(T) > >org_scalegraph_util_Parallel__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__1<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >, &org_scalegraph_util_Parallel__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T), class TPMGL(U)> class org_scalegraph_util_Parallel__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(TPMGL(T) x, TPMGL(T) y) {
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10::lang::Comparable<TPMGL(T) >::compareTo(x10aux::class_cast_unchecked<x10::lang::Comparable<TPMGL(T) >*>(x), y);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >();
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__2() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:106";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::template itable <org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) > >org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >, &org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::_sort<TPMGL(T) >(a, ((x10_int) ((proc) - (((x10_int)1)))),
                                                              lo,
                                                              cut,
                                                              cmp);
        }
        catch (x10::lang::CheckedThrowable* __exc681) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc681)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc681);
                {
                    
                    //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc681);
                {
                    
                    //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> a;
    x10_int proc;
    x10_long lo;
    x10_long cut;
    x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->a);
        buf.write(this->proc);
        buf.write(this->lo);
        buf.write(this->cut);
        buf.write(this->cmp);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_a = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        x10_int that_proc = buf.read<x10_int>();
        x10_long that_lo = buf.read<x10_long>();
        x10_long that_cut = buf.read<x10_long>();
        x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* that_cmp = buf.read<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>();
        org_scalegraph_util_Parallel__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__3<TPMGL(T) >(that_a, that_proc, that_lo, that_cut, that_cmp);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__3(org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_int proc, x10_long lo, x10_long cut, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) : a(a), proc(proc), lo(lo), cut(cut), cmp(cmp) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:134";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__3<TPMGL(T) > >org_scalegraph_util_Parallel__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__3<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(T), class TPMGL(U)> class org_scalegraph_util_Parallel__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::_sort<TPMGL(T), TPMGL(U) >(k,
                                                                        v,
                                                                        ((x10_int) ((proc) - (((x10_int)1)))),
                                                                        lo,
                                                                        cut,
                                                                        cmp);
        }
        catch (x10::lang::CheckedThrowable* __exc683) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc683)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc683);
                {
                    
                    //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc683);
                {
                    
                    //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> k;
    org::scalegraph::util::MemoryChunk<TPMGL(U)> v;
    x10_int proc;
    x10_long lo;
    x10_long cut;
    x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->k);
        buf.write(this->v);
        buf.write(this->proc);
        buf.write(this->lo);
        buf.write(this->cut);
        buf.write(this->cmp);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_k = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(U)> that_v = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(U)> >();
        x10_int that_proc = buf.read<x10_int>();
        x10_long that_lo = buf.read<x10_long>();
        x10_long that_cut = buf.read<x10_long>();
        x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* that_cmp = buf.read<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>();
        org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >(that_k, that_v, that_proc, that_lo, that_cut, that_cmp);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__4(org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v, x10_int proc, x10_long lo, x10_long cut, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) : k(k), v(v), proc(proc), lo(lo), cut(cut), cmp(cmp) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:149";
    }

};

template<class TPMGL(T), class TPMGL(U)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) > >org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T), class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T), class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V)> class org_scalegraph_util_Parallel__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__5<TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 501 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> counts = sg->org::scalegraph::util::ScatterGather::counts(
                                                                ((x10_int) (tid)));
        
        //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i55801domain56643 = r;
        
        //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55801min56644 = i55801domain56643->FMGL(min);
        
        //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55801max56645 = i55801domain56643->FMGL(max);
        
        //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56646;
            for (
                 //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56646 = i55801min56644; ((i56646) <= (i55801max56645));
                 
                 //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56646 = ((x10_long) ((i56646) + (((x10_long)1ll)))))
            {
                
                //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56647 = i56646;
                
                //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x56640 =
                  counts;
                
                //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long y56641 = ((x10_long) ((key->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  i56647)) >> (0x3f & (numShift))));
                
                //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
                ;
                
                //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long ret56642;
                
                //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long r56639 = ((x10_long) ((x56640->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  y56641)) + (((x10_long)1ll))));
                
                //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x56640->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  y56641, r56639);
                
                //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                ret56642 = r56639;
                
                //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Local_c
                ret56642;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    org::scalegraph::util::MemoryChunk<x10_long> key;
    x10_int numShift;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->key);
        buf.write(this->numShift);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__5<TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__5<TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<x10_long> that_key = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__5<TPMGL(V) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__5<TPMGL(V) >(that_sg, that_key, that_numShift);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__5(org::scalegraph::util::ScatterGather sg, org::scalegraph::util::MemoryChunk<x10_long> key, x10_int numShift) : sg(sg), key(key), numShift(numShift) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:500-505";
    }

};

template<class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__5<TPMGL(V) > >org_scalegraph_util_Parallel__closure__5<TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__5<TPMGL(V) >::__apply, &org_scalegraph_util_Parallel__closure__5<TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__5<TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__5<TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__5<TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__5<TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V)> class org_scalegraph_util_Parallel__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__6<TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 510 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = sg->org::scalegraph::util::ScatterGather::offsets(
                                                                 ((x10_int) (tid)));
        
        //#line 511 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i55818domain56653 = r;
        
        //#line 511 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55818min56654 = i55818domain56653->FMGL(min);
        
        //#line 511 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55818max56655 = i55818domain56653->FMGL(max);
        
        //#line 511 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56656;
            for (
                 //#line 511 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56656 = i55818min56654; ((i56656) <= (i55818max56655));
                 
                 //#line 511 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56656 = ((x10_long) ((i56656) + (((x10_long)1ll)))))
            {
                
                //#line 511 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56657 = i56656;
                
                //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long dstIndex56649 = ((x10_long) (((__extension__ ({
                    
                    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> x56650 =
                      offsets;
                    
                    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long y56651 = ((x10_long) ((key->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      i56657)) >> (0x3f & (numShift))));
                    
                    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ret56652;
                    
                    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long r56648 = ((x10_long) ((x56650->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      y56651)) + (((x10_long)1ll))));
                    
                    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x56650->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      y56651, r56648);
                    
                    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    ret56652 = r56648;
                    ret56652;
                }))
                ) - (((x10_long)1ll))));
                
                //#line 513 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                key_tmp->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  dstIndex56649, key->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                   i56657));
                
                //#line 514 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                v_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__set(
                  dstIndex56649, v->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__apply(
                                   i56657));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    org::scalegraph::util::MemoryChunk<x10_long> key;
    x10_int numShift;
    org::scalegraph::util::MemoryChunk<x10_long> key_tmp;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> v_tmp;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> v;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->key);
        buf.write(this->numShift);
        buf.write(this->key_tmp);
        buf.write(this->v_tmp);
        buf.write(this->v);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__6<TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__6<TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<x10_long> that_key = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_key_tmp = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_v_tmp = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_v = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org_scalegraph_util_Parallel__closure__6<TPMGL(V) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__6<TPMGL(V) >(that_sg, that_key, that_numShift, that_key_tmp, that_v_tmp, that_v);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__6(org::scalegraph::util::ScatterGather sg, org::scalegraph::util::MemoryChunk<x10_long> key, x10_int numShift, org::scalegraph::util::MemoryChunk<x10_long> key_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V)> v_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V)> v) : sg(sg), key(key), numShift(numShift), key_tmp(key_tmp), v_tmp(v_tmp), v(v) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:509-516";
    }

};

template<class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__6<TPMGL(V) > >org_scalegraph_util_Parallel__closure__6<TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__6<TPMGL(V) >::__apply, &org_scalegraph_util_Parallel__closure__6<TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__6<TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__6<TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__6<TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__6<TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V)> class org_scalegraph_util_Parallel__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__7<TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 527 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int taskNum56658 = ((x10_int)0);
            
            //#line 528 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
            while (true) {
                
                //#line 529 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                taskNum56658 = taskCounter->org::scalegraph::util::MemoryChunk<x10_int>::atomicAdd(
                                 ((x10_long) (((x10_int)0))), ((x10_int)1));
                
                //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (((taskNum56658) >= (numChunks))) {
                    
                    //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Branch_c
                    break;
                }
                
                //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long off56659 = offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      taskNum56658);
                
                //#line 532 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long len56660 = counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      taskNum56658);
                
                //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Algorithm::sort<TPMGL(V) >(
                  numShift, x10::lang::Math::min(((x10_int)7),
                                                 numShift),
                  sg->org::scalegraph::util::ScatterGather::counts(
                    tid56664), sg->org::scalegraph::util::ScatterGather::offsets(
                                 tid56664), key_tmp->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                              off56659, len56660),
                  v_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V)>::subpart(
                    off56659, len56660), key->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                           off56659, len56660),
                  v->org::scalegraph::util::MemoryChunk<TPMGL(V)>::subpart(
                    off56659, len56660));
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc713) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc713)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc713);
                {
                    
                    //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc713);
                {
                    
                    //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> taskCounter;
    x10_int numChunks;
    org::scalegraph::util::MemoryChunk<x10_long> offsets;
    org::scalegraph::util::MemoryChunk<x10_long> counts;
    x10_int numShift;
    org::scalegraph::util::ScatterGather sg;
    x10_int tid56664;
    org::scalegraph::util::MemoryChunk<x10_long> key_tmp;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> v_tmp;
    org::scalegraph::util::MemoryChunk<x10_long> key;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> v;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->taskCounter);
        buf.write(this->numChunks);
        buf.write(this->offsets);
        buf.write(this->counts);
        buf.write(this->numShift);
        buf.write(this->sg);
        buf.write(this->tid56664);
        buf.write(this->key_tmp);
        buf.write(this->v_tmp);
        buf.write(this->key);
        buf.write(this->v);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__7<TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__7<TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_taskCounter = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        x10_int that_numChunks = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        x10_int that_tid56664 = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_key_tmp = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_v_tmp = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_key = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_v = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org_scalegraph_util_Parallel__closure__7<TPMGL(V) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__7<TPMGL(V) >(that_taskCounter, that_numChunks, that_offsets, that_counts, that_numShift, that_sg, that_tid56664, that_key_tmp, that_v_tmp, that_key, that_v);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__7(org::scalegraph::util::MemoryChunk<x10_int> taskCounter, x10_int numChunks, org::scalegraph::util::MemoryChunk<x10_long> offsets, org::scalegraph::util::MemoryChunk<x10_long> counts, x10_int numShift, org::scalegraph::util::ScatterGather sg, x10_int tid56664, org::scalegraph::util::MemoryChunk<x10_long> key_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V)> v_tmp, org::scalegraph::util::MemoryChunk<x10_long> key, org::scalegraph::util::MemoryChunk<TPMGL(V)> v) : taskCounter(taskCounter), numChunks(numChunks), offsets(offsets), counts(counts), numShift(numShift), sg(sg), tid56664(tid56664), key_tmp(key_tmp), v_tmp(v_tmp), key(key), v(v) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:526-537";
    }

};

template<class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__7<TPMGL(V) > >org_scalegraph_util_Parallel__closure__7<TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__7<TPMGL(V) >::__apply, &org_scalegraph_util_Parallel__closure__7<TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__7<TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__7<TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__7<TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__7<TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V)> class org_scalegraph_util_Parallel__closure__8 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__8<TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 554 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> counts = sg->org::scalegraph::util::ScatterGather::counts(
                                                                ((x10_int) (tid)));
        
        //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i55851domain56669 = r;
        
        //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55851min56670 = i55851domain56669->FMGL(min);
        
        //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55851max56671 = i55851domain56669->FMGL(max);
        
        //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56672;
            for (
                 //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56672 = i55851min56670; ((i56672) <= (i55851max56671));
                 
                 //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56672 = ((x10_long) ((i56672) + (((x10_long)1ll)))))
            {
                
                //#line 555 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56673 = i56672;
                
                //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x56666 =
                  counts;
                
                //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long y56667 = ((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  i56673)) >> (0x3f & (numShift))));
                
                //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
                ;
                
                //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long ret56668;
                
                //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long r56665 = ((x10_long) ((x56666->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  y56667)) + (((x10_long)1ll))));
                
                //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x56666->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  y56667, r56665);
                
                //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                ret56668 = r56665;
                
                //#line 556 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Local_c
                ret56668;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    org::scalegraph::util::MemoryChunk<x10_long> src_i;
    x10_int numShift;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->src_i);
        buf.write(this->numShift);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__8<TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__8<TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<x10_long> that_src_i = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__8<TPMGL(V) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__8<TPMGL(V) >(that_sg, that_src_i, that_numShift);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__8(org::scalegraph::util::ScatterGather sg, org::scalegraph::util::MemoryChunk<x10_long> src_i, x10_int numShift) : sg(sg), src_i(src_i), numShift(numShift) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:553-558";
    }

};

template<class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__8<TPMGL(V) > >org_scalegraph_util_Parallel__closure__8<TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__8<TPMGL(V) >::__apply, &org_scalegraph_util_Parallel__closure__8<TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__8<TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__8<TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__8<TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__8<TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V)> class org_scalegraph_util_Parallel__closure__9 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__9<TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 563 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = sg->org::scalegraph::util::ScatterGather::offsets(
                                                                 ((x10_int) (tid)));
        
        //#line 564 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i55868domain56679 = r;
        
        //#line 564 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55868min56680 = i55868domain56679->FMGL(min);
        
        //#line 564 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55868max56681 = i55868domain56679->FMGL(max);
        
        //#line 564 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56682;
            for (
                 //#line 564 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56682 = i55868min56680; ((i56682) <= (i55868max56681));
                 
                 //#line 564 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56682 = ((x10_long) ((i56682) + (((x10_long)1ll)))))
            {
                
                //#line 564 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56683 = i56682;
                
                //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long dstIndex56675 = ((x10_long) (((__extension__ ({
                    
                    //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> x56676 =
                      offsets;
                    
                    //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long y56677 = ((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      i56683)) >> (0x3f & (numShift))));
                    
                    //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ret56678;
                    
                    //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long r56674 = ((x10_long) ((x56676->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      y56677)) + (((x10_long)1ll))));
                    
                    //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x56676->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      y56677, r56674);
                    
                    //#line 565 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    ret56678 = r56674;
                    ret56678;
                }))
                ) - (((x10_long)1ll))));
                
                //#line 566 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                dst_i->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  dstIndex56675, src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                   i56683));
                
                //#line 567 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                dst_v->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__set(
                  dstIndex56675, src_v->org::scalegraph::util::MemoryChunk<TPMGL(V)>::__apply(
                                   i56683));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    org::scalegraph::util::MemoryChunk<x10_long> src_i;
    x10_int numShift;
    org::scalegraph::util::MemoryChunk<x10_long> dst_i;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> dst_v;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> src_v;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->src_i);
        buf.write(this->numShift);
        buf.write(this->dst_i);
        buf.write(this->dst_v);
        buf.write(this->src_v);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__9<TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__9<TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<x10_long> that_src_i = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_dst_i = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_dst_v = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_src_v = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org_scalegraph_util_Parallel__closure__9<TPMGL(V) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__9<TPMGL(V) >(that_sg, that_src_i, that_numShift, that_dst_i, that_dst_v, that_src_v);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__9(org::scalegraph::util::ScatterGather sg, org::scalegraph::util::MemoryChunk<x10_long> src_i, x10_int numShift, org::scalegraph::util::MemoryChunk<x10_long> dst_i, org::scalegraph::util::MemoryChunk<TPMGL(V)> dst_v, org::scalegraph::util::MemoryChunk<TPMGL(V)> src_v) : sg(sg), src_i(src_i), numShift(numShift), dst_i(dst_i), dst_v(dst_v), src_v(src_v) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:562-569";
    }

};

template<class TPMGL(V)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__9<TPMGL(V) > >org_scalegraph_util_Parallel__closure__9<TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__9<TPMGL(V) >::__apply, &org_scalegraph_util_Parallel__closure__9<TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__9<TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__9<TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__9<TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__9<TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V)> class org_scalegraph_util_Parallel__closure__10 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__10<TPMGL(V) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long off56684 = sg->org::scalegraph::util::ScatterGather::offsets()->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                  i56689);
            
            //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long len56685 = sg->org::scalegraph::util::ScatterGather::counts()->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                  i56689);
            
            //#line 576 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Algorithm::sort<x10_long,
            TPMGL(V) >(dst_i->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                         off56684, len56685), dst_v->org::scalegraph::util::MemoryChunk<TPMGL(V)>::subpart(
                                                off56684,
                                                len56685));
        }
        catch (x10::lang::CheckedThrowable* __exc717) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc717)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc717);
                {
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc717);
                {
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    x10_long i56689;
    org::scalegraph::util::MemoryChunk<x10_long> dst_i;
    org::scalegraph::util::MemoryChunk<TPMGL(V)> dst_v;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->i56689);
        buf.write(this->dst_i);
        buf.write(this->dst_v);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__10<TPMGL(V) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__10<TPMGL(V) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        x10_long that_i56689 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<x10_long> that_dst_i = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V)> that_dst_v = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V)> >();
        org_scalegraph_util_Parallel__closure__10<TPMGL(V) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__10<TPMGL(V) >(that_sg, that_i56689, that_dst_i, that_dst_v);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__10(org::scalegraph::util::ScatterGather sg, x10_long i56689, org::scalegraph::util::MemoryChunk<x10_long> dst_i, org::scalegraph::util::MemoryChunk<TPMGL(V)> dst_v) : sg(sg), i56689(i56689), dst_i(dst_i), dst_v(dst_v) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:573-577";
    }

};

template<class TPMGL(V)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__10<TPMGL(V) > >org_scalegraph_util_Parallel__closure__10<TPMGL(V) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__10<TPMGL(V) >::__apply, &org_scalegraph_util_Parallel__closure__10<TPMGL(V) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__10<TPMGL(V) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__10<TPMGL(V) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__10<TPMGL(V) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__10<TPMGL(V) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V1), class TPMGL(V2)> class org_scalegraph_util_Parallel__closure__11 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 601 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> counts = sg->org::scalegraph::util::ScatterGather::counts(
                                                                ((x10_int) (tid)));
        
        //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i55901domain56694 = r;
        
        //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55901min56695 = i55901domain56694->FMGL(min);
        
        //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55901max56696 = i55901domain56694->FMGL(max);
        
        //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56697;
            for (
                 //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56697 = i55901min56695; ((i56697) <= (i55901max56696));
                 
                 //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56697 = ((x10_long) ((i56697) + (((x10_long)1ll)))))
            {
                
                //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56698 = i56697;
                
                //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x56691 =
                  counts;
                
                //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long y56692 = ((x10_long) ((key->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  i56698)) >> (0x3f & (numShift))));
                
                //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
                ;
                
                //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long ret56693;
                
                //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long r56690 = ((x10_long) ((x56691->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  y56692)) + (((x10_long)1ll))));
                
                //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x56691->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  y56692, r56690);
                
                //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                ret56693 = r56690;
                
                //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Local_c
                ret56693;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    org::scalegraph::util::MemoryChunk<x10_long> key;
    x10_int numShift;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->key);
        buf.write(this->numShift);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<x10_long> that_key = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >(that_sg, that_key, that_numShift);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__11(org::scalegraph::util::ScatterGather sg, org::scalegraph::util::MemoryChunk<x10_long> key, x10_int numShift) : sg(sg), key(key), numShift(numShift) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:600-605";
    }

};

template<class TPMGL(V1), class TPMGL(V2)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) > >org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >::__apply, &org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V1), class TPMGL(V2)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V1), class TPMGL(V2)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V1), class TPMGL(V2)> class org_scalegraph_util_Parallel__closure__12 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 614 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = sg->org::scalegraph::util::ScatterGather::offsets(
                                                                 ((x10_int) (tid)));
        
        //#line 615 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i55918domain56704 = r;
        
        //#line 615 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55918min56705 = i55918domain56704->FMGL(min);
        
        //#line 615 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55918max56706 = i55918domain56704->FMGL(max);
        
        //#line 615 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56707;
            for (
                 //#line 615 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56707 = i55918min56705; ((i56707) <= (i55918max56706));
                 
                 //#line 615 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56707 = ((x10_long) ((i56707) + (((x10_long)1ll)))))
            {
                
                //#line 615 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56708 = i56707;
                
                //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long dstIndex56700 = ((x10_long) (((__extension__ ({
                    
                    //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> x56701 =
                      offsets;
                    
                    //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long y56702 = ((x10_long) ((key->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      i56708)) >> (0x3f & (numShift))));
                    
                    //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ret56703;
                    
                    //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long r56699 = ((x10_long) ((x56701->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      y56702)) + (((x10_long)1ll))));
                    
                    //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x56701->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      y56702, r56699);
                    
                    //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    ret56703 = r56699;
                    ret56703;
                }))
                ) - (((x10_long)1ll))));
                
                //#line 617 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                key_tmp->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  dstIndex56700, key->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                   i56708));
                
                //#line 618 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                v1_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::__set(
                  dstIndex56700, v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::__apply(
                                   i56708));
                
                //#line 619 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                v2_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::__set(
                  dstIndex56700, v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::__apply(
                                   i56708));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    org::scalegraph::util::MemoryChunk<x10_long> key;
    x10_int numShift;
    org::scalegraph::util::MemoryChunk<x10_long> key_tmp;
    org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1_tmp;
    org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1;
    org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2_tmp;
    org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->key);
        buf.write(this->numShift);
        buf.write(this->key_tmp);
        buf.write(this->v1_tmp);
        buf.write(this->v1);
        buf.write(this->v2_tmp);
        buf.write(this->v2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<x10_long> that_key = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_key_tmp = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V1)> that_v1_tmp = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V1)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V1)> that_v1 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V1)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V2)> that_v2_tmp = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V2)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V2)> that_v2 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V2)> >();
        org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >(that_sg, that_key, that_numShift, that_key_tmp, that_v1_tmp, that_v1, that_v2_tmp, that_v2);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__12(org::scalegraph::util::ScatterGather sg, org::scalegraph::util::MemoryChunk<x10_long> key, x10_int numShift, org::scalegraph::util::MemoryChunk<x10_long> key_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1, org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2) : sg(sg), key(key), numShift(numShift), key_tmp(key_tmp), v1_tmp(v1_tmp), v1(v1), v2_tmp(v2_tmp), v2(v2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:613-621";
    }

};

template<class TPMGL(V1), class TPMGL(V2)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) > >org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >::__apply, &org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V1), class TPMGL(V2)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V1), class TPMGL(V2)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V1), class TPMGL(V2)> class org_scalegraph_util_Parallel__closure__13 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 635 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int taskNum56709;
            
            //#line 636 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
            while (true) {
                
                //#line 637 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                taskNum56709 = taskCounter->org::scalegraph::util::MemoryChunk<x10_int>::atomicAdd(
                                 ((x10_long) (((x10_int)0))), ((x10_int)1));
                
                //#line 638 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (((taskNum56709) >= (numChunks))) {
                    
                    //#line 638 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Branch_c
                    break;
                }
                
                //#line 639 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long off56710 = offsets->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      taskNum56709);
                
                //#line 640 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long len56711 = counts->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                      taskNum56709);
                
                //#line 641 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Algorithm::sort<TPMGL(V1),
                TPMGL(V2) >(numShift, x10::lang::Math::min(
                                        ((x10_int)7), numShift),
                            sg->org::scalegraph::util::ScatterGather::counts(
                              tid56715), sg->org::scalegraph::util::ScatterGather::offsets(
                                           tid56715), key_tmp->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                                        off56710,
                                                        len56711),
                            v1_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::subpart(
                              off56710, len56711), v2_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::subpart(
                                                     off56710,
                                                     len56711),
                            key->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                              off56710, len56711), v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::subpart(
                                                     off56710,
                                                     len56711),
                            v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::subpart(
                              off56710, len56711));
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc721) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc721)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc721);
                {
                    
                    //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc721);
                {
                    
                    //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_int> taskCounter;
    x10_int numChunks;
    org::scalegraph::util::MemoryChunk<x10_long> offsets;
    org::scalegraph::util::MemoryChunk<x10_long> counts;
    x10_int numShift;
    org::scalegraph::util::ScatterGather sg;
    x10_int tid56715;
    org::scalegraph::util::MemoryChunk<x10_long> key_tmp;
    org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1_tmp;
    org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2_tmp;
    org::scalegraph::util::MemoryChunk<x10_long> key;
    org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1;
    org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->taskCounter);
        buf.write(this->numChunks);
        buf.write(this->offsets);
        buf.write(this->counts);
        buf.write(this->numShift);
        buf.write(this->sg);
        buf.write(this->tid56715);
        buf.write(this->key_tmp);
        buf.write(this->v1_tmp);
        buf.write(this->v2_tmp);
        buf.write(this->key);
        buf.write(this->v1);
        buf.write(this->v2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_int> that_taskCounter = buf.read<org::scalegraph::util::MemoryChunk<x10_int> >();
        x10_int that_numChunks = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_offsets = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_counts = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        x10_int that_tid56715 = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_key_tmp = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V1)> that_v1_tmp = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V1)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V2)> that_v2_tmp = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V2)> >();
        org::scalegraph::util::MemoryChunk<x10_long> that_key = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V1)> that_v1 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V1)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V2)> that_v2 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V2)> >();
        org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >(that_taskCounter, that_numChunks, that_offsets, that_counts, that_numShift, that_sg, that_tid56715, that_key_tmp, that_v1_tmp, that_v2_tmp, that_key, that_v1, that_v2);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__13(org::scalegraph::util::MemoryChunk<x10_int> taskCounter, x10_int numChunks, org::scalegraph::util::MemoryChunk<x10_long> offsets, org::scalegraph::util::MemoryChunk<x10_long> counts, x10_int numShift, org::scalegraph::util::ScatterGather sg, x10_int tid56715, org::scalegraph::util::MemoryChunk<x10_long> key_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2_tmp, org::scalegraph::util::MemoryChunk<x10_long> key, org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1, org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2) : taskCounter(taskCounter), numChunks(numChunks), offsets(offsets), counts(counts), numShift(numShift), sg(sg), tid56715(tid56715), key_tmp(key_tmp), v1_tmp(v1_tmp), v2_tmp(v2_tmp), key(key), v1(v1), v2(v2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:634-645";
    }

};

template<class TPMGL(V1), class TPMGL(V2)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) > >org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >::__apply, &org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V1), class TPMGL(V2)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V1), class TPMGL(V2)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V1), class TPMGL(V2)> class org_scalegraph_util_Parallel__closure__14 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 668 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> counts = sg->org::scalegraph::util::ScatterGather::counts(
                                                                ((x10_int) (tid)));
        
        //#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i55951domain56720 = r;
        
        //#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55951min56721 = i55951domain56720->FMGL(min);
        
        //#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55951max56722 = i55951domain56720->FMGL(max);
        
        //#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56723;
            for (
                 //#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56723 = i55951min56721; ((i56723) <= (i55951max56722));
                 
                 //#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56723 = ((x10_long) ((i56723) + (((x10_long)1ll)))))
            {
                
                //#line 669 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56724 = i56723;
                
                //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_long> x56717 =
                  counts;
                
                //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long y56718 = ((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  i56724)) >> (0x3f & (numShift))));
                
                //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
                ;
                
                //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long ret56719;
                
                //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long r56716 = ((x10_long) ((x56717->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                  y56718)) + (((x10_long)1ll))));
                
                //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x56717->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  y56718, r56716);
                
                //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                ret56719 = r56716;
                
                //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Local_c
                ret56719;
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    org::scalegraph::util::MemoryChunk<x10_long> src_i;
    x10_int numShift;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->src_i);
        buf.write(this->numShift);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<x10_long> that_src_i = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >(that_sg, that_src_i, that_numShift);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__14(org::scalegraph::util::ScatterGather sg, org::scalegraph::util::MemoryChunk<x10_long> src_i, x10_int numShift) : sg(sg), src_i(src_i), numShift(numShift) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:667-672";
    }

};

template<class TPMGL(V1), class TPMGL(V2)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) > >org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >::__apply, &org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V1), class TPMGL(V2)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V1), class TPMGL(V2)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(V1), class TPMGL(V2)> class org_scalegraph_util_Parallel__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long tid, x10::lang::LongRange r) {
        
        //#line 677 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_long> offsets = sg->org::scalegraph::util::ScatterGather::offsets(
                                                                 ((x10_int) (tid)));
        
        //#line 678 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i55968domain56730 = r;
        
        //#line 678 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55968min56731 = i55968domain56730->FMGL(min);
        
        //#line 678 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i55968max56732 = i55968domain56730->FMGL(max);
        
        //#line 678 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56733;
            for (
                 //#line 678 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56733 = i55968min56731; ((i56733) <= (i55968max56732));
                 
                 //#line 678 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56733 = ((x10_long) ((i56733) + (((x10_long)1ll)))))
            {
                
                //#line 678 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56734 = i56733;
                
                //#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long dstIndex56726 = ((x10_long) (((__extension__ ({
                    
                    //#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    org::scalegraph::util::MemoryChunk<x10_long> x56727 =
                      offsets;
                    
                    //#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long y56728 = ((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      i56734)) >> (0x3f & (numShift))));
                    
                    //#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Empty_c
                    ;
                    
                    //#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ret56729;
                    
                    //#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long r56725 = ((x10_long) ((x56727->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                      y56728)) + (((x10_long)1ll))));
                    
                    //#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x56727->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                      y56728, r56725);
                    
                    //#line 679 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    ret56729 = r56725;
                    ret56729;
                }))
                ) - (((x10_long)1ll))));
                
                //#line 680 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                dst_i->org::scalegraph::util::MemoryChunk<x10_long>::__set(
                  dstIndex56726, src_i->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                   i56734));
                
                //#line 681 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                dst_v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::__set(
                  dstIndex56726, src_v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::__apply(
                                   i56734));
                
                //#line 682 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                dst_v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::__set(
                  dstIndex56726, src_v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::__apply(
                                   i56734));
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    org::scalegraph::util::MemoryChunk<x10_long> src_i;
    x10_int numShift;
    org::scalegraph::util::MemoryChunk<x10_long> dst_i;
    org::scalegraph::util::MemoryChunk<TPMGL(V1)> dst_v1;
    org::scalegraph::util::MemoryChunk<TPMGL(V1)> src_v1;
    org::scalegraph::util::MemoryChunk<TPMGL(V2)> dst_v2;
    org::scalegraph::util::MemoryChunk<TPMGL(V2)> src_v2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->src_i);
        buf.write(this->numShift);
        buf.write(this->dst_i);
        buf.write(this->dst_v1);
        buf.write(this->src_v1);
        buf.write(this->dst_v2);
        buf.write(this->src_v2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        org::scalegraph::util::MemoryChunk<x10_long> that_src_i = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        x10_int that_numShift = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_dst_i = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V1)> that_dst_v1 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V1)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V1)> that_src_v1 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V1)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V2)> that_dst_v2 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V2)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V2)> that_src_v2 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V2)> >();
        org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >(that_sg, that_src_i, that_numShift, that_dst_i, that_dst_v1, that_src_v1, that_dst_v2, that_src_v2);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__15(org::scalegraph::util::ScatterGather sg, org::scalegraph::util::MemoryChunk<x10_long> src_i, x10_int numShift, org::scalegraph::util::MemoryChunk<x10_long> dst_i, org::scalegraph::util::MemoryChunk<TPMGL(V1)> dst_v1, org::scalegraph::util::MemoryChunk<TPMGL(V1)> src_v1, org::scalegraph::util::MemoryChunk<TPMGL(V2)> dst_v2, org::scalegraph::util::MemoryChunk<TPMGL(V2)> src_v2) : sg(sg), src_i(src_i), numShift(numShift), dst_i(dst_i), dst_v1(dst_v1), src_v1(src_v1), dst_v2(dst_v2), src_v2(src_v2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:676-684";
    }

};

template<class TPMGL(V1), class TPMGL(V2)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) > >org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >::__apply, &org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V1), class TPMGL(V2)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V1), class TPMGL(V2)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(V1), class TPMGL(V2)> class org_scalegraph_util_Parallel__closure__16 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 689 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long off56735 = sg->org::scalegraph::util::ScatterGather::offsets()->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                  i56740);
            
            //#line 690 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long len56736 = sg->org::scalegraph::util::ScatterGather::counts()->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                  i56740);
            
            //#line 691 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Algorithm::sort<x10_long,
            TPMGL(V1), TPMGL(V2) >(dst_i->org::scalegraph::util::MemoryChunk<x10_long>::subpart(
                                     off56735, len56736),
                                   dst_v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::subpart(
                                     off56735, len56736),
                                   dst_v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::subpart(
                                     off56735, len56736));
        }
        catch (x10::lang::CheckedThrowable* __exc725) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc725)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc725);
                {
                    
                    //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc725);
                {
                    
                    //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::ScatterGather sg;
    x10_int i56740;
    org::scalegraph::util::MemoryChunk<x10_long> dst_i;
    org::scalegraph::util::MemoryChunk<TPMGL(V1)> dst_v1;
    org::scalegraph::util::MemoryChunk<TPMGL(V2)> dst_v2;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->sg);
        buf.write(this->i56740);
        buf.write(this->dst_i);
        buf.write(this->dst_v1);
        buf.write(this->dst_v2);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) > >();
        buf.record_reference(storage);
        org::scalegraph::util::ScatterGather that_sg = buf.read<org::scalegraph::util::ScatterGather>();
        x10_int that_i56740 = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<x10_long> that_dst_i = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V1)> that_dst_v1 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V1)> >();
        org::scalegraph::util::MemoryChunk<TPMGL(V2)> that_dst_v2 = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(V2)> >();
        org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >(that_sg, that_i56740, that_dst_i, that_dst_v1, that_dst_v2);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__16(org::scalegraph::util::ScatterGather sg, x10_int i56740, org::scalegraph::util::MemoryChunk<x10_long> dst_i, org::scalegraph::util::MemoryChunk<TPMGL(V1)> dst_v1, org::scalegraph::util::MemoryChunk<TPMGL(V2)> dst_v2) : sg(sg), i56740(i56740), dst_i(dst_i), dst_v1(dst_v1), dst_v2(dst_v2) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:688-692";
    }

};

template<class TPMGL(V1), class TPMGL(V2)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) > >org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >::__apply, &org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(V1), class TPMGL(V2)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(V1), class TPMGL(V2)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__19_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__19 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_1<x10_int>::template itable <org_scalegraph_util_Parallel__closure__19<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int j56742) {
        
        //#line 749 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        acc->add(x10aux::nullCheck(arr56741)->x10::array::Array<TPMGL(T)>::__apply(
                   j56742));
    }
    
    // captured environment
    x10::util::ArrayList<TPMGL(T)>* acc;
    x10::array::Array<TPMGL(T)>* arr56741;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->acc);
        buf.write(this->arr56741);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__19<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__19<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::util::ArrayList<TPMGL(T)>* that_acc = buf.read<x10::util::ArrayList<TPMGL(T)>*>();
        x10::array::Array<TPMGL(T)>* that_arr56741 = buf.read<x10::array::Array<TPMGL(T)>*>();
        org_scalegraph_util_Parallel__closure__19<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__19<TPMGL(T) >(that_acc, that_arr56741);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__19(x10::util::ArrayList<TPMGL(T)>* acc, x10::array::Array<TPMGL(T)>* arr56741) : acc(acc), arr56741(arr56741) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:748-750";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_1<x10_int>::template itable <org_scalegraph_util_Parallel__closure__19<TPMGL(T) > >org_scalegraph_util_Parallel__closure__19<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__19<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__19<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__19<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >, &org_scalegraph_util_Parallel__closure__19<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__19<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__19<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__19_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__20_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__20 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>::template itable <org_scalegraph_util_Parallel__closure__20<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long id__1414, TPMGL(T) x) {
        
        //#line 756 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10::lang::Fun_0_1<TPMGL(T), x10_int>::__apply(x10aux::nullCheck(func), 
          x);
        
    }
    
    // captured environment
    x10::lang::Fun_0_1<TPMGL(T), x10_int>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__20<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__20<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::lang::Fun_0_1<TPMGL(T), x10_int>* that_func = buf.read<x10::lang::Fun_0_1<TPMGL(T), x10_int>*>();
        org_scalegraph_util_Parallel__closure__20<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__20<TPMGL(T) >(that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__20(x10::lang::Fun_0_1<TPMGL(T), x10_int>* func) : func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:756";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>::template itable <org_scalegraph_util_Parallel__closure__20<TPMGL(T) > >org_scalegraph_util_Parallel__closure__20<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__20<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__20<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__20<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int> >, &org_scalegraph_util_Parallel__closure__20<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__20<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__20<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__20_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__22_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__22_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__22 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::template itable <org_scalegraph_util_Parallel__closure__22<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* __apply(x10_long id__1418) {
        
        //#line 774 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::GrowableMemory<TPMGL(T)>::_make();
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__22<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__22<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_util_Parallel__closure__22<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__22<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__22() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:774";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::template itable <org_scalegraph_util_Parallel__closure__22<TPMGL(T) > >org_scalegraph_util_Parallel__closure__22<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__22<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__22<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__22<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >, &org_scalegraph_util_Parallel__closure__22<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__22<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__22<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__22_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__21_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__21 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::template itable <org_scalegraph_util_Parallel__closure__21<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> __apply(x10_long id__1417) {
        
        //#line 773 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>* >::_make(((x10_long) (kinds)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<TPMGL(T)>*>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >(sizeof(org_scalegraph_util_Parallel__closure__22<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__22<TPMGL(T)>())), (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    x10_int kinds;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->kinds);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__21<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__21<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_kinds = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__21<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__21<TPMGL(T) >(that_kinds);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__21(x10_int kinds) : kinds(kinds) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:773-774";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::template itable <org_scalegraph_util_Parallel__closure__21<TPMGL(T) > >org_scalegraph_util_Parallel__closure__21<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__21<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__21<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__21<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > >, &org_scalegraph_util_Parallel__closure__21<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__21<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__21<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__21_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__23_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__23_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__23 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__23<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_long id__1419, x10::lang::LongRange range) {
        
        //#line 777 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int wid = x10::lang::Runtime::workerId();
        
        //#line 778 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i56018domain56749 = range;
        
        //#line 778 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56018min56750 = i56018domain56749->FMGL(min);
        
        //#line 778 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56018max56751 = i56018domain56749->FMGL(max);
        
        //#line 778 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56752;
            for (
                 //#line 778 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56752 = i56018min56750; ((i56752) <= (i56018max56751));
                 
                 //#line 778 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56752 = ((x10_long) ((i56752) + (((x10_long)1ll))))) {
                
                //#line 778 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56753 = i56752;
                
                //#line 779 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                TPMGL(T) x56748 = array->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                    i56753);
                
                //#line 780 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::__apply(
                                    wid)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply(
                                    x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>::__apply(x10aux::nullCheck(func), 
                                      i56753, x56748)))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
                  x56748);
            }
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(T)> array;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc;
    x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->array);
        buf.write(this->acc);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__23<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__23<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(T)> that_array = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > that_acc = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > >();
        x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>* that_func = buf.read<x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>*>();
        org_scalegraph_util_Parallel__closure__23<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__23<TPMGL(T) >(that_array, that_acc, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__23(org::scalegraph::util::MemoryChunk<TPMGL(T)> array, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc, x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>* func) : array(array), acc(acc), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:776-782";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>::template itable <org_scalegraph_util_Parallel__closure__23<TPMGL(T) > >org_scalegraph_util_Parallel__closure__23<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__23<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__23<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__23<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >, &org_scalegraph_util_Parallel__closure__23<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__23<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__23<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__23_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__24_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__24_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__24 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_util_Parallel__closure__24<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<x10_long> __apply(x10_long id__1420) {
        
        //#line 785 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int) ((x10::lang::Runtime::
                                                                                                FMGL(MAX_THREADS__get)()) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__24<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__24<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_util_Parallel__closure__24<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__24<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__24() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:785";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> >::template itable <org_scalegraph_util_Parallel__closure__24<TPMGL(T) > >org_scalegraph_util_Parallel__closure__24<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__24<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__24<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__24<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> > >, &org_scalegraph_util_Parallel__closure__24<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__24<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__24<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__24_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__25_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__25 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__25<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long i56755) {
        
        //#line 788 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10aux::nullCheck(acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::__apply(
                                   i56755)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply(
                                   k56774))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size();
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc;
    x10_int k56774;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->acc);
        buf.write(this->k56774);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__25<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__25<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > that_acc = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > >();
        x10_int that_k56774 = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__25<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__25<TPMGL(T) >(that_acc, that_k56774);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__25(org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc, x10_int k56774) : acc(acc), k56774(k56774) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:788";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__25<TPMGL(T) > >org_scalegraph_util_Parallel__closure__25<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__25<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__25<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__25<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >, &org_scalegraph_util_Parallel__closure__25<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__25<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__25<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__25_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__26_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__26 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__26<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long i56756, x10_long a56757) {
        
        //#line 791 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return ((x10_long) ((x10aux::nullCheck(acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::__apply(
                                                 i56756)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply(
                                                 k56774))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size()) + (a56757)));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc;
    x10_int k56774;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->acc);
        buf.write(this->k56774);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__26<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__26<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > that_acc = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > >();
        x10_int that_k56774 = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__26<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__26<TPMGL(T) >(that_acc, that_k56774);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__26(org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc, x10_int k56774) : acc(acc), k56774(k56774) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:791";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__26<TPMGL(T) > >org_scalegraph_util_Parallel__closure__26<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__26<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__26<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__26<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >, &org_scalegraph_util_Parallel__closure__26<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__26<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__26<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__26_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__27_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__27 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__27<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long x56758, x10_long y56759) {
        
        //#line 791 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return ((x10_long) ((x56758) + (y56759)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__27<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__27<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_util_Parallel__closure__27<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__27<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__27() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:791";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__27<TPMGL(T) > >org_scalegraph_util_Parallel__closure__27<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__27<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__27<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__27<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >, &org_scalegraph_util_Parallel__closure__27<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__27<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__27<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__27_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__28_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__28 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__28<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long i56761, x10_long a56762) {
        
        //#line 793 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return ((x10_long) ((arr56754->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                               i56761)) + (a56762)));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> arr56754;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->arr56754);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__28<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__28<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_arr56754 = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Parallel__closure__28<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__28<TPMGL(T) >(that_arr56754);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__28(org::scalegraph::util::MemoryChunk<x10_long> arr56754) : arr56754(arr56754) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:793";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__28<TPMGL(T) > >org_scalegraph_util_Parallel__closure__28<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__28<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__28<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__28<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >, &org_scalegraph_util_Parallel__closure__28<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__28<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__28<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__28_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__29_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__29_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__29 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__29<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long x56763, x10_long y56764) {
        
        //#line 793 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return ((x10_long) ((x56763) + (y56764)));
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__29<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__29<TPMGL(T) > >();
        buf.record_reference(storage);
        org_scalegraph_util_Parallel__closure__29<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__29<TPMGL(T) >();
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__29() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:793";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_2<x10_long, x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__29<TPMGL(T) > >org_scalegraph_util_Parallel__closure__29<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__29<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__29<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__29<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >, &org_scalegraph_util_Parallel__closure__29<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__29<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__29<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__29_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__30_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__30_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__30 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_util_Parallel__closure__30<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    org::scalegraph::util::MemoryChunk<TPMGL(T)> __apply(x10_long i) {
        
        //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(resultSizes->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                      i), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_long> resultSizes;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->resultSizes);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__30<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__30<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_long> that_resultSizes = buf.read<org::scalegraph::util::MemoryChunk<x10_long> >();
        org_scalegraph_util_Parallel__closure__30<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__30<TPMGL(T) >(that_resultSizes);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__30(org::scalegraph::util::MemoryChunk<x10_long> resultSizes) : resultSizes(resultSizes) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:802";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<TPMGL(T)> >::template itable <org_scalegraph_util_Parallel__closure__30<TPMGL(T) > >org_scalegraph_util_Parallel__closure__30<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__30<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__30<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__30<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<TPMGL(T)> > >, &org_scalegraph_util_Parallel__closure__30<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__30<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__30<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__30_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__31_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__31_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__31 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__31<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_long __apply(x10_long i) {
        
        //#line 805 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return resultOffsets->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(
                 i)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                 ((x10_int) ((x10::lang::Runtime::FMGL(MAX_THREADS__get)()) - (((x10_int)1)))));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > resultOffsets;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->resultOffsets);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__31<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__31<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > that_resultOffsets = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > >();
        org_scalegraph_util_Parallel__closure__31<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__31<TPMGL(T) >(that_resultOffsets);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__31(org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > resultOffsets) : resultOffsets(resultOffsets) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:805";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_long>::template itable <org_scalegraph_util_Parallel__closure__31<TPMGL(T) > >org_scalegraph_util_Parallel__closure__31<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__31<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__31<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__31<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_long> >, &org_scalegraph_util_Parallel__closure__31<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__31<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__31<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__31_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__32_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__32_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__32 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_1<x10_int>::template itable <org_scalegraph_util_Parallel__closure__32<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int wid56765) {
        
        //#line 808 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long size56766 = x10aux::nullCheck(acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::__apply(
                                                 wid56765)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply(
                                                 k56770))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size();
        
        //#line 809 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if (((size56766) > (((x10_long) (((x10_int)0))))))
        {
            
            //#line 810 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("k: "), k56770), x10aux::makeStringLit(", wid: ")), wid56765));
            
            //#line 811 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("k: "), k56770), x10aux::makeStringLit(", wid: ")), wid56765), x10aux::makeStringLit(", offsets: ")), resultOffsets->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(
                                                                                                                                                                                                                                                                                                                                                                         k56770)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                                                                                                                                                                                                                                                                                                                                                         wid56765)), x10aux::makeStringLit(", size: ")), x10aux::nullCheck(acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                             wid56765)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply(
                                                                                                                                                                                                                                                                                                                                                                                                                                             k56770))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size()));
            
            //#line 812 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::MemoryChunk<void>::copy<TPMGL(T) >(
              x10aux::nullCheck(acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::__apply(
                                  wid56765)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply(
                                  k56770))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw(),
              ((x10_long)0ll), result->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::__apply(
                                 k56770), resultOffsets->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(
                                            k56770)->org::scalegraph::util::MemoryChunk<x10_long>::__apply(
                                            wid56765), x10aux::nullCheck(acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::__apply(
                                                                           wid56765)->org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*>::__apply(
                                                                           k56770))->org::scalegraph::util::GrowableMemory<TPMGL(T)>::size());
        }
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc;
    x10_int k56770;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > resultOffsets;
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> > result;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->acc);
        buf.write(this->k56770);
        buf.write(this->resultOffsets);
        buf.write(this->result);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__32<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__32<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > that_acc = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > >();
        x10_int that_k56770 = buf.read<x10_int>();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > that_resultOffsets = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > >();
        org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> > that_result = buf.read<org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> > >();
        org_scalegraph_util_Parallel__closure__32<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__32<TPMGL(T) >(that_acc, that_k56770, that_resultOffsets, that_result);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__32(org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc, x10_int k56770, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > resultOffsets, org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> > result) : acc(acc), k56770(k56770), resultOffsets(resultOffsets), result(result) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:807-814";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_1<x10_int>::template itable <org_scalegraph_util_Parallel__closure__32<TPMGL(T) > >org_scalegraph_util_Parallel__closure__32<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__32<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__32<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__32<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >, &org_scalegraph_util_Parallel__closure__32<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__32<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__32<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__32_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__33_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__33_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Parallel__closure__33 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_1<x10_int>::template itable <org_scalegraph_util_Parallel__closure__33<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply(x10_int i) {
        
        //#line 827 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        acc->x10::array::Array<TPMGL(T)>::__set(i, x10::lang::Fun_0_1<x10_int, TPMGL(T)>::__apply(x10aux::nullCheck(func), 
                                                  i));
    }
    
    // captured environment
    x10::array::Array<TPMGL(T)>* acc;
    x10::lang::Fun_0_1<x10_int, TPMGL(T)>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->acc);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__33<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__33<TPMGL(T) > >();
        buf.record_reference(storage);
        x10::array::Array<TPMGL(T)>* that_acc = buf.read<x10::array::Array<TPMGL(T)>*>();
        x10::lang::Fun_0_1<x10_int, TPMGL(T)>* that_func = buf.read<x10::lang::Fun_0_1<x10_int, TPMGL(T)>*>();
        org_scalegraph_util_Parallel__closure__33<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__33<TPMGL(T) >(that_acc, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__33(x10::array::Array<TPMGL(T)>* acc, x10::lang::Fun_0_1<x10_int, TPMGL(T)>* func) : acc(acc), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:826-828";
    }

};

template<class TPMGL(T)> typename x10::lang::VoidFun_0_1<x10_int>::template itable <org_scalegraph_util_Parallel__closure__33<TPMGL(T) > >org_scalegraph_util_Parallel__closure__33<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__33<TPMGL(T) >::__apply, &org_scalegraph_util_Parallel__closure__33<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__33<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_1<x10_int> >, &org_scalegraph_util_Parallel__closure__33<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__33<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__33<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__33_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__38_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__38_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__38 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__38<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 887 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 888 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            TPMGL(U) r56823 = x10aux::zeroValue<TPMGL(U) >();
            
            //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::IntRange i56181domain56815 = i_range56822;
            
            //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56181min56816 = i56181domain56815->FMGL(min);
            
            //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56181max56817 = i56181domain56815->FMGL(max);
            
            //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i56818;
                for (
                     //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i56818 = i56181min56816; ((i56818) <= (i56181max56817));
                     
                     //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i56818 = ((x10_int) ((i56818) + (((x10_int)1))))) {
                    
                    //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii56819 = i56818;
                    
                    //#line 889 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    r56823 = x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                      ii56819, r56823);
                }
            }
            
            //#line 890 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            intermid->x10::array::Array<TPMGL(U)>::__set(idx56820,
                                                         r56823);
        }
        catch (x10::lang::CheckedThrowable* __exc755) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc755)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc755);
                {
                    
                    //#line 887 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc755);
                {
                    
                    //#line 887 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::IntRange i_range56822;
    x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func;
    x10::array::Array<TPMGL(U)>* intermid;
    x10_int idx56820;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range56822);
        buf.write(this->func);
        buf.write(this->intermid);
        buf.write(this->idx56820);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__38<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__38<TPMGL(U) > >();
        buf.record_reference(storage);
        x10::lang::IntRange that_i_range56822 = buf.read<x10::lang::IntRange>();
        x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* that_func = buf.read<x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>*>();
        x10::array::Array<TPMGL(U)>* that_intermid = buf.read<x10::array::Array<TPMGL(U)>*>();
        x10_int that_idx56820 = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__38<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__38<TPMGL(U) >(that_i_range56822, that_func, that_intermid, that_idx56820);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__38(x10::lang::IntRange i_range56822, x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func, x10::array::Array<TPMGL(U)>* intermid, x10_int idx56820) : i_range56822(i_range56822), func(func), intermid(intermid), idx56820(idx56820) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:887-891";
    }

};

template<class TPMGL(U)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__38<TPMGL(U) > >org_scalegraph_util_Parallel__closure__38<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__38<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__38<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__38<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__38<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__38<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__38<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__38_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__39_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__39_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__39 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__39<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 907 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 908 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            TPMGL(U) r56840 = x10aux::zeroValue<TPMGL(U) >();
            
            //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::LongRange i56230domain56832 = i_range56839;
            
            //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56230min56833 = i56230domain56832->FMGL(min);
            
            //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56230max56834 = i56230domain56832->FMGL(max);
            
            //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_long i56835;
                for (
                     //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i56835 = i56230min56833; ((i56835) <= (i56230max56834));
                     
                     //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i56835 = ((x10_long) ((i56835) + (((x10_long)1ll)))))
                {
                    
                    //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ii56836 = i56835;
                    
                    //#line 909 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    r56840 = x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                      ii56836, r56840);
                }
            }
            
            //#line 910 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            intermid->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
              idx56837, r56840);
        }
        catch (x10::lang::CheckedThrowable* __exc759) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc759)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc759);
                {
                    
                    //#line 907 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc759);
                {
                    
                    //#line 907 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10::lang::LongRange i_range56839;
    x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func;
    org::scalegraph::util::MemoryChunk<TPMGL(U)> intermid;
    x10_int idx56837;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_range56839);
        buf.write(this->func);
        buf.write(this->intermid);
        buf.write(this->idx56837);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__39<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__39<TPMGL(U) > >();
        buf.record_reference(storage);
        x10::lang::LongRange that_i_range56839 = buf.read<x10::lang::LongRange>();
        x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* that_func = buf.read<x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(U)> that_intermid = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(U)> >();
        x10_int that_idx56837 = buf.read<x10_int>();
        org_scalegraph_util_Parallel__closure__39<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__39<TPMGL(U) >(that_i_range56839, that_func, that_intermid, that_idx56837);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__39(x10::lang::LongRange i_range56839, x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func, org::scalegraph::util::MemoryChunk<TPMGL(U)> intermid, x10_int idx56837) : i_range56839(i_range56839), func(func), intermid(intermid), idx56837(idx56837) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:907-911";
    }

};

template<class TPMGL(U)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__39<TPMGL(U) > >org_scalegraph_util_Parallel__closure__39<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__39<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__39<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__39<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__39<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__39<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__39<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__39_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__40_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__40_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__40 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__40<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 927 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 928 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            intermid->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
              idx56849, x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                ((x10_long) (i56855)), i_range56851));
        }
        catch (x10::lang::CheckedThrowable* __exc763) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc763)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc763);
                {
                    
                    //#line 927 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc763);
                {
                    
                    //#line 927 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<TPMGL(U)> intermid;
    x10_int idx56849;
    x10_int i56855;
    x10::lang::LongRange i_range56851;
    x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, TPMGL(U)>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->intermid);
        buf.write(this->idx56849);
        buf.write(this->i56855);
        buf.write(this->i_range56851);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__40<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__40<TPMGL(U) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<TPMGL(U)> that_intermid = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(U)> >();
        x10_int that_idx56849 = buf.read<x10_int>();
        x10_int that_i56855 = buf.read<x10_int>();
        x10::lang::LongRange that_i_range56851 = buf.read<x10::lang::LongRange>();
        x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, TPMGL(U)>* that_func = buf.read<x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, TPMGL(U)>*>();
        org_scalegraph_util_Parallel__closure__40<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__40<TPMGL(U) >(that_intermid, that_idx56849, that_i56855, that_i_range56851, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__40(org::scalegraph::util::MemoryChunk<TPMGL(U)> intermid, x10_int idx56849, x10_int i56855, x10::lang::LongRange i_range56851, x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, TPMGL(U)>* func) : intermid(intermid), idx56849(idx56849), i56855(i56855), i_range56851(i_range56851), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:927-929";
    }

};

template<class TPMGL(U)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__40<TPMGL(U) > >org_scalegraph_util_Parallel__closure__40<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__40<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__40<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__40<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__40<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__40<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__40<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__40_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__41_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__41_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__41 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__41<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 949 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 950 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            TPMGL(U) r56866 = x10aux::zeroValue<TPMGL(U) >();
            
            //#line 951 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56311min56860 = i_start56864;
            
            //#line 951 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56311max56861 = ((x10_int) ((i_end56865) - (((x10_int)1))));
            
            //#line 951 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i56862;
                for (
                     //#line 951 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i56862 = i56311min56860; ((i56862) <= (i56311max56861));
                     
                     //#line 951 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i56862 = ((x10_int) ((i56862) + (((x10_int)1))))) {
                    
                    //#line 951 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii56863 = i56862;
                    
                    //#line 951 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    r56866 = x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                      ii56863, r56866);
                }
            }
            
            //#line 952 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__set(
              i_end56865, r56866);
        }
        catch (x10::lang::CheckedThrowable* __exc767) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc767)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc767);
                {
                    
                    //#line 949 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc767);
                {
                    
                    //#line 949 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int i_start56864;
    x10_int i_end56865;
    x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func;
    x10::array::Array<TPMGL(U)>* dst;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_start56864);
        buf.write(this->i_end56865);
        buf.write(this->func);
        buf.write(this->dst);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__41<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__41<TPMGL(U) > >();
        buf.record_reference(storage);
        x10_int that_i_start56864 = buf.read<x10_int>();
        x10_int that_i_end56865 = buf.read<x10_int>();
        x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* that_func = buf.read<x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>*>();
        x10::array::Array<TPMGL(U)>* that_dst = buf.read<x10::array::Array<TPMGL(U)>*>();
        org_scalegraph_util_Parallel__closure__41<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__41<TPMGL(U) >(that_i_start56864, that_i_end56865, that_func, that_dst);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__41(x10_int i_start56864, x10_int i_end56865, x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func, x10::array::Array<TPMGL(U)>* dst) : i_start56864(i_start56864), i_end56865(i_end56865), func(func), dst(dst) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:949-953";
    }

};

template<class TPMGL(U)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__41<TPMGL(U) > >org_scalegraph_util_Parallel__closure__41<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__41<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__41<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__41<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__41<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__41<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__41<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__41_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__42_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__42_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__42 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__42<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 968 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 969 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56359min56873 = i_start56877;
            
            //#line 969 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56359max56874 = ((x10_int) ((i_end56878) - (((x10_int)2))));
            
            //#line 969 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_int i56875;
                for (
                     //#line 969 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i56875 = i56359min56873; ((i56875) <= (i56359max56874));
                     
                     //#line 969 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i56875 = ((x10_int) ((i56875) + (((x10_int)1))))) {
                    
                    //#line 969 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_int ii56876 = i56875;
                    
                    //#line 969 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__set(
                      ((x10_int) ((ii56876) + (((x10_int)1)))), x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                        ii56876, x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__apply(
                                   ii56876)));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc770) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc770)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc770);
                {
                    
                    //#line 968 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc770);
                {
                    
                    //#line 968 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_int i_start56877;
    x10_int i_end56878;
    x10::array::Array<TPMGL(U)>* dst;
    x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_start56877);
        buf.write(this->i_end56878);
        buf.write(this->dst);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__42<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__42<TPMGL(U) > >();
        buf.record_reference(storage);
        x10_int that_i_start56877 = buf.read<x10_int>();
        x10_int that_i_end56878 = buf.read<x10_int>();
        x10::array::Array<TPMGL(U)>* that_dst = buf.read<x10::array::Array<TPMGL(U)>*>();
        x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* that_func = buf.read<x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>*>();
        org_scalegraph_util_Parallel__closure__42<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__42<TPMGL(U) >(that_i_start56877, that_i_end56878, that_dst, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__42(x10_int i_start56877, x10_int i_end56878, x10::array::Array<TPMGL(U)>* dst, x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func) : i_start56877(i_start56877), i_end56878(i_end56878), dst(dst), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:968-970";
    }

};

template<class TPMGL(U)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__42<TPMGL(U) > >org_scalegraph_util_Parallel__closure__42<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__42<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__42<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__42<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__42<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__42<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__42<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__42_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__43_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__43_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__43 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__43<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 993 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 994 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            TPMGL(U) r56898 = x10aux::zeroValue<TPMGL(U) >();
            
            //#line 995 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56408min56892 = i_start56896;
            
            //#line 995 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56408max56893 = ((x10_long) ((i_end56897) - (((x10_long) (((x10_int)1))))));
            
            //#line 995 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_long i56894;
                for (
                     //#line 995 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i56894 = i56408min56892; ((i56894) <= (i56408max56893));
                     
                     //#line 995 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i56894 = ((x10_long) ((i56894) + (((x10_long)1ll)))))
                {
                    
                    //#line 995 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ii56895 = i56894;
                    
                    //#line 995 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    r56898 = x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                      ii56895, r56898);
                }
            }
            
            //#line 996 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
              i_end56897, r56898);
        }
        catch (x10::lang::CheckedThrowable* __exc774) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc774)) {
                x10::lang::Error* __lowerer__var__0__ = static_cast<x10::lang::Error*>(__exc774);
                {
                    
                    //#line 993 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__0__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc774);
                {
                    
                    //#line 993 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__1__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long i_start56896;
    x10_long i_end56897;
    x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func;
    org::scalegraph::util::MemoryChunk<TPMGL(U)> dst;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_start56896);
        buf.write(this->i_end56897);
        buf.write(this->func);
        buf.write(this->dst);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__43<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__43<TPMGL(U) > >();
        buf.record_reference(storage);
        x10_long that_i_start56896 = buf.read<x10_long>();
        x10_long that_i_end56897 = buf.read<x10_long>();
        x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* that_func = buf.read<x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>*>();
        org::scalegraph::util::MemoryChunk<TPMGL(U)> that_dst = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(U)> >();
        org_scalegraph_util_Parallel__closure__43<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__43<TPMGL(U) >(that_i_start56896, that_i_end56897, that_func, that_dst);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__43(x10_long i_start56896, x10_long i_end56897, x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func, org::scalegraph::util::MemoryChunk<TPMGL(U)> dst) : i_start56896(i_start56896), i_end56897(i_end56897), func(func), dst(dst) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:993-997";
    }

};

template<class TPMGL(U)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__43<TPMGL(U) > >org_scalegraph_util_Parallel__closure__43<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__43<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__43<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__43<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__43<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__43<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__43<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__43_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__44_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__44_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__44 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__44<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    void __apply() {
        
        //#line 1012 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
        try {
            
            //#line 1013 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56456min56905 = i_start56909;
            
            //#line 1013 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56456max56906 = ((x10_long) ((i_end56910) - (((x10_long) (((x10_int)1))))));
            
            //#line 1013 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
            {
                x10_long i56907;
                for (
                     //#line 1013 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                     i56907 = i56456min56905; ((i56907) <= (i56456max56906));
                     
                     //#line 1013 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                     i56907 = ((x10_long) ((i56907) + (((x10_long)1ll)))))
                {
                    
                    //#line 1013 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                    x10_long ii56908 = i56907;
                    
                    //#line 1013 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
                      ((x10_long) ((ii56908) + (((x10_long) (((x10_int)1)))))),
                      x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                        ii56908, dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                                   ii56908)));
                }
            }
            
        }
        catch (x10::lang::CheckedThrowable* __exc777) {
            if (x10aux::instanceof<x10::lang::Error*>(__exc777)) {
                x10::lang::Error* __lowerer__var__1__ = static_cast<x10::lang::Error*>(__exc777);
                {
                    
                    //#line 1012 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(__lowerer__var__1__));
                }
            } else
            if (true) {
                x10::lang::CheckedThrowable* __lowerer__var__2__ =
                  static_cast<x10::lang::CheckedThrowable*>(__exc777);
                {
                    
                    //#line 1012 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::ensureException(
                                                               reinterpret_cast<x10::lang::CheckedThrowable*>(__lowerer__var__2__))));
                }
            } else
            throw;
        }
    }
    
    // captured environment
    x10_long i_start56909;
    x10_long i_end56910;
    org::scalegraph::util::MemoryChunk<TPMGL(U)> dst;
    x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->i_start56909);
        buf.write(this->i_end56910);
        buf.write(this->dst);
        buf.write(this->func);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__44<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__44<TPMGL(U) > >();
        buf.record_reference(storage);
        x10_long that_i_start56909 = buf.read<x10_long>();
        x10_long that_i_end56910 = buf.read<x10_long>();
        org::scalegraph::util::MemoryChunk<TPMGL(U)> that_dst = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(U)> >();
        x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* that_func = buf.read<x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>*>();
        org_scalegraph_util_Parallel__closure__44<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__44<TPMGL(U) >(that_i_start56909, that_i_end56910, that_dst, that_func);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__44(x10_long i_start56909, x10_long i_end56910, org::scalegraph::util::MemoryChunk<TPMGL(U)> dst, x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func) : i_start56909(i_start56909), i_end56910(i_end56910), dst(dst), func(func) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::VoidFun_0_0>(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:1012-1014";
    }

};

template<class TPMGL(U)> typename x10::lang::VoidFun_0_0::template itable <org_scalegraph_util_Parallel__closure__44<TPMGL(U) > >org_scalegraph_util_Parallel__closure__44<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__44<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__44<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__44<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::VoidFun_0_0>, &org_scalegraph_util_Parallel__closure__44<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__44<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__44<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_SIMPLE_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__44_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__45_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__45_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__45 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>::template itable <org_scalegraph_util_Parallel__closure__45<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    TPMGL(U) __apply(x10_int i, TPMGL(U) v) {
        
        //#line 1025 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10::lang::Arithmetic<TPMGL(U) >::_m4____plus(v, x10aux::nullCheck(arr)->x10::array::Array<TPMGL(U)>::__apply(
                                                                  i));
        
    }
    
    // captured environment
    x10::array::Array<TPMGL(U)>* arr;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->arr);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__45<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__45<TPMGL(U) > >();
        buf.record_reference(storage);
        x10::array::Array<TPMGL(U)>* that_arr = buf.read<x10::array::Array<TPMGL(U)>*>();
        org_scalegraph_util_Parallel__closure__45<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__45<TPMGL(U) >(that_arr);
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__45(x10::array::Array<TPMGL(U)>* arr) : arr(arr) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:1025";
    }

};

template<class TPMGL(U)> typename x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>::template itable <org_scalegraph_util_Parallel__closure__45<TPMGL(U) > >org_scalegraph_util_Parallel__closure__45<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__45<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__45<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__45<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)> >, &org_scalegraph_util_Parallel__closure__45<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__45<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__45<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__45_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__46_CLOSURE
#define ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__46_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_2.h>
template<class TPMGL(U)> class org_scalegraph_util_Parallel__closure__46 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>::template itable <org_scalegraph_util_Parallel__closure__46<TPMGL(U) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    TPMGL(U) __apply(TPMGL(U) v1, TPMGL(U) v2) {
        
        //#line 1025 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10::lang::Arithmetic<TPMGL(U) >::_m4____plus(v1, v2);
        
    }
    
    // captured environment
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Parallel__closure__46<TPMGL(U) >* storage = x10aux::alloc<org_scalegraph_util_Parallel__closure__46<TPMGL(U) > >();
        buf.record_reference(storage);
        org_scalegraph_util_Parallel__closure__46<TPMGL(U) >* this_ = new (storage) org_scalegraph_util_Parallel__closure__46<TPMGL(U) >();
        return this_;
    }
    
    org_scalegraph_util_Parallel__closure__46() { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10:1025";
    }

};

template<class TPMGL(U)> typename x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>::template itable <org_scalegraph_util_Parallel__closure__46<TPMGL(U) > >org_scalegraph_util_Parallel__closure__46<TPMGL(U) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Parallel__closure__46<TPMGL(U) >::__apply, &org_scalegraph_util_Parallel__closure__46<TPMGL(U) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(U)> x10aux::itable_entry org_scalegraph_util_Parallel__closure__46<TPMGL(U) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)> >, &org_scalegraph_util_Parallel__closure__46<TPMGL(U) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(U)> const x10aux::serialization_id_t org_scalegraph_util_Parallel__closure__46<TPMGL(U) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Parallel__closure__46<TPMGL(U) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_PARALLEL__CLOSURE__46_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_GENERICS
inline x10_int org::scalegraph::util::Parallel::FMGL(threashold1__get)() {
    if (FMGL(threashold1__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(threashold1__init)();
    }
    return org::scalegraph::util::Parallel::FMGL(threashold1);
}

inline x10_int org::scalegraph::util::Parallel::FMGL(threashold2__get)() {
    if (FMGL(threashold2__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(threashold2__init)();
    }
    return org::scalegraph::util::Parallel::FMGL(threashold2);
}

inline x10_boolean org::scalegraph::util::Parallel::FMGL(debug__get)() {
    if (FMGL(debug__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(debug__init)();
    }
    return org::scalegraph::util::Parallel::FMGL(debug);
}

#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_merge_657
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_merge_657
template<class TPMGL(T)> void org::scalegraph::util::Parallel::merge(x10::util::IndexedMemoryChunk<TPMGL(T) > a,
                                                                     x10::util::IndexedMemoryChunk<TPMGL(T) > b,
                                                                     x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<TPMGL(T) > arr = x10::util::IndexedMemoryChunk<void>::allocate<TPMGL(T) >(((x10_int) (((a)->length()) + ((b)->length()))), 8, false, false);
    
    //#line 42 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int aSize = (a)->length();
    
    //#line 43 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int bSize = (b)->length();
    
    //#line 44 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) x = (a)->__apply(((x10_int)0));
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) y = (b)->__apply(((x10_int)0));
    
    //#line 46 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long i = ((x10_long) (((x10_int)0)));
    
    //#line 47 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long j = ((x10_long) (((x10_int)0)));
    
    //#line 48 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long k = ((x10_long) (((x10_int)0)));
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 51 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
              x, y)) <= (((x10_int)0)))) {
            
            //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            (arr)->__set(k, x);
            
            //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            i = ((x10_long) ((i) + (((x10_long)1ll))));
            
            //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            k = ((x10_long) ((k) + (((x10_long)1ll))));
            
            //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (((i) >= (((x10_long) (aSize))))) {
                
                //#line 54 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Branch_c
                break;
            }
            
            //#line 55 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            x = (a)->__apply(i);
        } else {
            
            //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            (arr)->__set(k, y);
            
            //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            j = ((x10_long) ((j) + (((x10_long)1ll))));
            
            //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            k = ((x10_long) ((k) + (((x10_long)1ll))));
            
            //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (((j) >= (((x10_long) (bSize))))) {
                
                //#line 59 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Branch_c
                break;
            }
            
            //#line 60 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            y = (b)->__apply(j);
        }
        
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_merge_657
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_658
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_658
template<class TPMGL(T)> void org::scalegraph::util::Parallel::exch(
  x10::util::IndexedMemoryChunk<TPMGL(T) > a, x10_long i,
  x10_long j) {
    
    //#line 65 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) temp = (a)->__apply(i);
    
    //#line 66 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    (a)->__set(i, (a)->__apply(j));
    
    //#line 67 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    (a)->__set(j, temp);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_658
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_659
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_659
template<class TPMGL(T)> void org::scalegraph::util::Parallel::exch(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long i,
  x10_long j) {
    
    //#line 71 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) temp = a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                      i);
    
    //#line 72 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      i, a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
           j));
    
    //#line 73 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      j, temp);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_659
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_660
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_660
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::exch(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long i, x10_long j) {
    
    //#line 77 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) t1 = k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                    i);
    
    //#line 78 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      i, k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
           j));
    
    //#line 79 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      j, t1);
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(U) t2 = v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                    i);
    
    //#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
      i, v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
           j));
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
      j, t2);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_exch_660
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_661
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_661
template<class TPMGL(T)> void org::scalegraph::util::Parallel::sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    {
        
        //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var2 = x10::lang::Runtime::startFinish();
        {
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57025 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::Parallel::template _sort<TPMGL(T) >(
                          a, ((x10_int) ((63 - __builtin_clzl(((((x10_long) (x10::lang::Runtime::
                                                                               FMGL(NTHREADS__get)()))) << 1) - 1)) + (((x10_int)1)))),
                          ((x10_long)0ll), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                          cmp);
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc662) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc662);
                        {
                            
                            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc663) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57026 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc663);
                    {
                        
                        //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57025 = formal57026;
                    }
                } else
                throw;
            }
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57025)))
            {
                
                //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57025))
                {
                    
                    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57025));
                }
                
            }
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var2);
            }
            
            //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57025)))
            {
                
                //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57025)))
                {
                    
                    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57025));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_661
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_664
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_664
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    {
        
        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var3 = x10::lang::Runtime::startFinish();
        {
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57028 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::Parallel::template _sort<TPMGL(T),
                        TPMGL(U) >(k, v, ((x10_int) ((63 - __builtin_clzl(((((x10_long) (x10::lang::Runtime::
                                                                                           FMGL(NTHREADS__get)()))) << 1) - 1)) + (((x10_int)1)))),
                                   ((x10_long)0ll), k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                   cmp);
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc665) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc665);
                        {
                            
                            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc666) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57029 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc666);
                    {
                        
                        //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57028 = formal57029;
                    }
                } else
                throw;
            }
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57028)))
            {
                
                //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57028))
                {
                    
                    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57028));
                }
                
            }
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var3);
            }
            
            //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57028)))
            {
                
                //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57028)))
                {
                    
                    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57028));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_664
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_667
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_667
template<class TPMGL(T)> void org::scalegraph::util::Parallel::sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_int proc,
  x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    {
        
        //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var4 = x10::lang::Runtime::startFinish();
        {
            
            //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57031 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::Parallel::template _sort<TPMGL(T) >(
                          a, proc, ((x10_long)0ll), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                          cmp);
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc668) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc668);
                        {
                            
                            //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc669) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57032 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc669);
                    {
                        
                        //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57031 = formal57032;
                    }
                } else
                throw;
            }
            
            //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57031)))
            {
                
                //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57031))
                {
                    
                    //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57031));
                }
                
            }
            
            //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var4);
            }
            
            //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57031)))
            {
                
                //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57031)))
                {
                    
                    //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57031));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_667
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_670
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_670
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_int proc, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    {
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var5 = x10::lang::Runtime::startFinish();
        {
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57034 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::Parallel::template _sort<TPMGL(T),
                        TPMGL(U) >(k, v, proc, ((x10_long)0ll),
                                   k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                   cmp);
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc671) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc671);
                        {
                            
                            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc672) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57035 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc672);
                    {
                        
                        //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57034 = formal57035;
                    }
                } else
                throw;
            }
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57034)))
            {
                
                //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57034))
                {
                    
                    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57034));
                }
                
            }
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var5);
            }
            
            //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57034)))
            {
                
                //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57034)))
                {
                    
                    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57034));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_670
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_673
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_673
template<class TPMGL(T)> void org::scalegraph::util::Parallel::sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a) {
    {
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var6 = x10::lang::Runtime::startFinish();
        {
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57037 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::Parallel::template sort<TPMGL(T) >(
                          a, reinterpret_cast<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(org_scalegraph_util_Parallel__closure__1<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__1<TPMGL(T)>())));
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc674) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc674);
                        {
                            
                            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc675) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57038 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc675);
                    {
                        
                        //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57037 = formal57038;
                    }
                } else
                throw;
            }
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57037)))
            {
                
                //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57037))
                {
                    
                    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57037));
                }
                
            }
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var6);
            }
            
            //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57037)))
            {
                
                //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57037)))
                {
                    
                    //#line 102 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57037));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_673
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_676
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_676
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v) {
    {
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var7 = x10::lang::Runtime::startFinish();
        {
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57040 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                        org::scalegraph::util::Parallel::template sort<TPMGL(T),
                        TPMGL(U) >(k, v, reinterpret_cast<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int> >(sizeof(org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U)>)))org_scalegraph_util_Parallel__closure__2<TPMGL(T),TPMGL(U)>())));
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc677) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc677);
                        {
                            
                            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc678) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57041 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc678);
                    {
                        
                        //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57040 = formal57041;
                    }
                } else
                throw;
            }
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57040)))
            {
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57040))
                {
                    
                    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57040));
                }
                
            }
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var7);
            }
            
            //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57040)))
            {
                
                //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57040)))
                {
                    
                    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57040));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_676
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_getMedian_679
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_getMedian_679
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::Parallel::getMedian(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp,
  x10_long skip) {
    
    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) < (((x10_long)10000ll))))
    {
        
        //#line 111 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return org::scalegraph::util::Parallel::template median<TPMGL(T) >(
                 a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                   lo), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                          ((x10_long) ((((x10_long) ((lo) + (hi)))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))))),
                 a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                   ((x10_long) ((hi) - (((x10_long) (((x10_int)1))))))),
                 cmp);
        
    }
    
    //#line 113 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long start = x10::lang::RuntimeNatives::nanoTime();
    
    //#line 114 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long cur = lo;
    
    //#line 115 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::util::ArrayList<TPMGL(T)>* sample = x10::util::ArrayList<TPMGL(T)>::_make();
    
    //#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((cur) < (hi))) {
        
        //#line 117 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        sample->add(a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                      cur));
        
        //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        cur = ((x10_long) ((cur) + (skip)));
    }
    
    //#line 120 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sample->sort(cmp);
    
    //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10aux::makeStringLit("time = "), ((((x10_double) (((x10_long) ((x10::lang::RuntimeNatives::nanoTime()) - (start)))))) / (((((1000.0) * (1000.0))) * (1000.0))))));
    
    //#line 122 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return sample->get(((x10_int) ((sample->size()) / x10aux::zeroCheck(((x10_int)2)))));
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_getMedian_679
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H__sort_680
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H__sort_680
template<class TPMGL(T)> void org::scalegraph::util::Parallel::_sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_int proc,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 126 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((lo) >= (((x10_long) ((hi) - (((x10_long) (((x10_int)1)))))))))
    {
        
        //#line 127 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((proc) > (((x10_int)0)))) {
        
        //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) pivot = org::scalegraph::util::Parallel::template median<TPMGL(T) >(
                           a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                             lo), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                    ((x10_long) ((((x10_long) ((lo) + (hi)))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))))),
                           a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                             ((x10_long) ((hi) - (((x10_long) (((x10_int)1))))))),
                           cmp);
        
        //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long cut = org::scalegraph::util::Parallel::template unguardedPartition<TPMGL(T) >(
                         a, lo, hi, pivot, cmp);
        
        //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::runAsync(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__3<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__3<TPMGL(T)>(a, proc, lo, cut, cmp))));
        
        //#line 135 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template _sort<TPMGL(T) >(
          a, ((x10_int) ((proc) - (((x10_int)1)))), cut, hi,
          cmp);
    } else {
        
        //#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template introSort<TPMGL(T) >(
          a, lo, hi, cmp);
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H__sort_680
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H__sort_682
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H__sort_682
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::_sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_int proc, x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 142 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                                   v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((lo) >= (((x10_long) ((hi) - (((x10_long) (((x10_int)1)))))))))
    {
        
        //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((proc) > (((x10_int)0)))) {
        
        //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        TPMGL(T) pivot = org::scalegraph::util::Parallel::template median<TPMGL(T) >(
                           k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                             lo), k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                    ((x10_long) ((((x10_long) ((lo) + (hi)))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))))),
                           k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                             ((x10_long) ((hi) - (((x10_long) (((x10_int)1))))))),
                           cmp);
        
        //#line 148 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long cut = org::scalegraph::util::Parallel::template unguardedPartition<TPMGL(T),
                       TPMGL(U) >(k, v, lo, hi, pivot, cmp);
        
        //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::runAsync(reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U)>)))org_scalegraph_util_Parallel__closure__4<TPMGL(T),TPMGL(U)>(k, v, proc, lo, cut, cmp))));
        
        //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template _sort<TPMGL(T),
        TPMGL(U) >(k, v, ((x10_int) ((proc) - (((x10_int)1)))),
                   cut, hi, cmp);
    } else {
        
        //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template introSort<TPMGL(T),
        TPMGL(U) >(k, v, lo, hi, cmp);
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H__sort_682
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSort_684
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSort_684
template<class TPMGL(T)> void org::scalegraph::util::Parallel::introSort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10aux::makeStringLit("size = "), ((x10_long) ((hi) - (lo)))));
    
    //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(lo, hi))) {
        
        //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template introSortLoop<TPMGL(T) >(
          a, lo, hi, cmp, ((x10_int) ((63 - __builtin_clzl(((((x10_long) ((hi) - (lo)))) << 1) - 1)) * (((x10_int)2)))));
        
        //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template finalInsertionSort<TPMGL(T) >(
          a, lo, hi, cmp);
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSort_684
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSort_685
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSort_685
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::introSort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(lo, hi))) {
        
        //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template introSortLoop<TPMGL(T),
        TPMGL(U) >(k, v, lo, hi, cmp, ((x10_int) ((63 - __builtin_clzl(((((x10_long) ((hi) - (lo)))) << 1) - 1)) * (((x10_int)2)))));
        
        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template finalInsertionSort<TPMGL(T),
        TPMGL(U) >(k, v, lo, hi, cmp);
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSort_685
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedPartition_686
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedPartition_686
template<class TPMGL(T)> x10_long org::scalegraph::util::Parallel::unguardedPartition(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, TPMGL(T) pivot, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long first = lo;
    
    //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long last = hi;
    
    //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
        while (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
                 a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                   first), pivot)) < (((x10_int)0)))) {
            
            //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            first = ((x10_long) ((first) + (((x10_long)1ll))));
        }
        
        //#line 177 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        last = ((x10_long) ((last) - (((x10_long)1ll))));
        
        //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
        while (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
                 pivot, a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                          last))) < (((x10_int)0)))) {
            
            //#line 178 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            last = ((x10_long) ((last) - (((x10_long)1ll))));
        }
        
        //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if (((first) >= (last))) {
            
            //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return first;
            
        }
        
        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template exch<TPMGL(T) >(
          a, first, last);
        
        //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        first = ((x10_long) ((first) + (((x10_long)1ll))));
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedPartition_686
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedPartition_687
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedPartition_687
template<class TPMGL(T), class TPMGL(U)> x10_long org::scalegraph::util::Parallel::unguardedPartition(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, TPMGL(T) pivot, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 188 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long first = lo;
    
    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long last = hi;
    
    //#line 190 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
        while (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
                 k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                   first), pivot)) < (((x10_int)0)))) {
            
            //#line 191 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            first = ((x10_long) ((first) + (((x10_long)1ll))));
        }
        
        //#line 192 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        last = ((x10_long) ((last) - (((x10_long)1ll))));
        
        //#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
        while (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
                 pivot, k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                          last))) < (((x10_int)0)))) {
            
            //#line 193 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            last = ((x10_long) ((last) - (((x10_long)1ll))));
        }
        
        //#line 194 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if (!(((first) < (last)))) {
            
            //#line 195 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return first;
            
        }
        
        //#line 197 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template exch<TPMGL(T),
        TPMGL(U) >(k, v, first, last);
        
        //#line 198 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        first = ((x10_long) ((first) + (((x10_long)1ll))));
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedPartition_687
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_finalInsertionSort_688
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_finalInsertionSort_688
template<class TPMGL(T)> void org::scalegraph::util::Parallel::finalInsertionSort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 203 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((((x10_long) ((hi) - (lo)))) > (((x10_long) (org::scalegraph::util::Parallel::
                                                        FMGL(threashold1__get)())))))
    {
        
        //#line 204 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template insertionSort<TPMGL(T) >(
          a, lo, ((x10_long) ((lo) + (((x10_long) (org::scalegraph::util::Parallel::
                                                     FMGL(threashold1__get)()))))),
          cmp);
        
        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template unguardedInsertionSort<TPMGL(T) >(
          a, ((x10_long) ((lo) + (((x10_long) (org::scalegraph::util::Parallel::
                                                 FMGL(threashold1__get)()))))),
          hi, cmp);
    } else {
        
        //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template insertionSort<TPMGL(T) >(
          a, lo, hi, cmp);
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_finalInsertionSort_688
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_finalInsertionSort_689
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_finalInsertionSort_689
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::finalInsertionSort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((((x10_long) ((hi) - (lo)))) > (((x10_long) (org::scalegraph::util::Parallel::
                                                        FMGL(threashold2__get)())))))
    {
        
        //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template insertionSort<TPMGL(T),
        TPMGL(U) >(k, v, lo, ((x10_long) ((lo) + (((x10_long) (org::scalegraph::util::Parallel::
                                                                 FMGL(threashold2__get)()))))),
                   cmp);
        
        //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template unguardedInsertionSort<TPMGL(T),
        TPMGL(U) >(k, v, ((x10_long) ((lo) + (((x10_long) (org::scalegraph::util::Parallel::
                                                             FMGL(threashold2__get)()))))),
                   hi, cmp);
    } else {
        
        //#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template insertionSort<TPMGL(T),
        TPMGL(U) >(k, v, lo, hi, cmp);
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_finalInsertionSort_689
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedInsertionSort_690
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedInsertionSort_690
template<class TPMGL(T)> void org::scalegraph::util::Parallel::unguardedInsertionSort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i = lo; ((i) < (hi)); 
                                   //#line 221 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                   i = ((x10_long) ((i) + (((x10_long)1ll)))))
        {
            
            //#line 222 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::template unguardedLinearInsert<TPMGL(T) >(
              a, i, a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                      i), cmp);
        }
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedInsertionSort_690
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedInsertionSort_691
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedInsertionSort_691
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::unguardedInsertionSort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i = lo; ((i) < (hi)); 
                                   //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                   i = ((x10_long) ((i) + (((x10_long)1ll)))))
        {
            
            //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::template unguardedLinearInsert<TPMGL(T),
            TPMGL(U) >(k, v, i, k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                  i), v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                                        i), cmp);
        }
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedInsertionSort_691
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_insertionSort_692
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_insertionSort_692
template<class TPMGL(T)> void org::scalegraph::util::Parallel::insertionSort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(lo, hi))) {
        
        //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i = ((x10_long) ((lo) + (((x10_long) (((x10_int)1))))));
             ((i) < (hi)); 
                           //#line 235 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                           i = ((x10_long) ((i) + (((x10_long)1ll)))))
        {
            
            //#line 236 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) v = a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                           i);
            
            //#line 237 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
                  v, a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                       lo))) < (((x10_int)0)))) {
                
                //#line 238 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long j = i;
                
                //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
                while (((j) > (lo))) {
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    j = ((x10_long) ((j) - (((x10_long)1ll))));
                    
                    //#line 239 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                      ((x10_long) ((j) + (((x10_long) (((x10_int)1)))))),
                      a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                        j));
                }
                
                //#line 240 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                  lo, v);
            } else {
                
                //#line 242 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Parallel::template unguardedLinearInsert<TPMGL(T) >(
                  a, i, v, cmp);
            }
            
        }
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_insertionSort_692
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_insertionSort_693
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_insertionSort_693
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::insertionSort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(lo, hi))) {
        
        //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_long i;
        for (
             //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i = ((x10_long) ((lo) + (((x10_long) (((x10_int)1))))));
             ((i) < (hi)); 
                           //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                           i = ((x10_long) ((i) + (((x10_long)1ll)))))
        {
            
            //#line 251 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            TPMGL(T) kv = k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                            i);
            
            //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            TPMGL(U) vv = v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                            i);
            
            //#line 253 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
                  kv, k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                        lo))) < (((x10_int)0)))) {
                
                //#line 254 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long j = i;
                
                //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
                while (((j) > (lo))) {
                    
                    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                    j = ((x10_long) ((j) - (((x10_long)1ll))));
                    
                    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                      ((x10_long) ((j) + (((x10_long) (((x10_int)1)))))),
                      k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                        j));
                    
                    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
                      ((x10_long) ((j) + (((x10_long) (((x10_int)1)))))),
                      v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                        j));
                }
                
                //#line 256 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
                  lo, kv);
                
                //#line 257 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
                  lo, vv);
            } else {
                
                //#line 259 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Parallel::template unguardedLinearInsert<TPMGL(T),
                TPMGL(U) >(k, v, i, kv, vv, cmp);
            }
            
        }
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_insertionSort_693
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedLinearInsert_694
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedLinearInsert_694
template<class TPMGL(T)> void org::scalegraph::util::Parallel::unguardedLinearInsert(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long last,
  TPMGL(T) v, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 265 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long last_ = last;
    
    //#line 266 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long next = last_;
    
    //#line 267 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
    next = ((x10_long) ((next) - (((x10_long)1ll))));
    
    //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
             v, a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                  next))) < (((x10_int)0)))) {
        
        //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          last_, a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                   next));
        
        //#line 270 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        last_ = next;
        
        //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        next = ((x10_long) ((next) - (((x10_long)1ll))));
    }
    
    //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      last_, v);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedLinearInsert_694
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedLinearInsert_695
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedLinearInsert_695
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::unguardedLinearInsert(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long last, TPMGL(T) kv, TPMGL(U) vv, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 277 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long last_ = last;
    
    //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long next = last_;
    
    //#line 279 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
    next = ((x10_long) ((next) - (((x10_long)1ll))));
    
    //#line 280 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
             kv, k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                   next))) < (((x10_int)0)))) {
        
        //#line 281 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          last_, k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                   next));
        
        //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
          last_, v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                   next));
        
        //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        last_ = next;
        
        //#line 284 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        next = ((x10_long) ((next) - (((x10_long)1ll))));
    }
    
    //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      last_, kv);
    
    //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
      last_, vv);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_unguardedLinearInsert_695
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_median_696
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_median_696
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::Parallel::median(
  TPMGL(T) a, TPMGL(T) b, TPMGL(T) c, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 292 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
          a, b)) < (((x10_int)0)))) {
        
        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
              b, c)) < (((x10_int)0)))) {
            
            //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return b;
            
        } else 
        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
              a, c)) < (((x10_int)0)))) {
            
            //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return c;
            
        } else {
            
            //#line 298 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return a;
            
        }
        
    } else 
    //#line 300 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
          a, c)) < (((x10_int)0)))) {
        
        //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return a;
        
    } else 
    //#line 302 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
          b, c)) < (((x10_int)0)))) {
        
        //#line 303 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return c;
        
    } else {
        
        //#line 305 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return b;
        
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_median_696
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_makeHeap_697
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_makeHeap_697
template<class TPMGL(T)> void org::scalegraph::util::Parallel::makeHeap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 310 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((((x10_long) ((hi) - (lo)))) < (((x10_long) (((x10_int)2))))))
    {
        
        //#line 311 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 313 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long len = ((x10_long) ((hi) - (lo)));
    
    //#line 314 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long parent = ((x10_long) ((((x10_long) ((len) - (((x10_long)2ll))))) / x10aux::zeroCheck(((x10_long)2ll))));
    
    //#line 316 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template adjustHeap<TPMGL(T) >(
          a, lo, parent, len, a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                ((x10_long) ((lo) + (parent)))),
          cmp);
        
        //#line 318 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(parent, ((x10_long)0ll))))
        {
            
            //#line 319 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return;
        }
        
        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        parent = ((x10_long) ((parent) - (((x10_long)1ll))));
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_makeHeap_697
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_makeHeap_698
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_makeHeap_698
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::makeHeap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((((x10_long) ((hi) - (lo)))) < (((x10_long) (((x10_int)2))))))
    {
        
        //#line 327 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 329 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long len = ((x10_long) ((hi) - (lo)));
    
    //#line 330 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long parent = ((x10_long) ((((x10_long) ((len) - (((x10_long)2ll))))) / x10aux::zeroCheck(((x10_long)2ll))));
    
    //#line 332 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 333 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template adjustHeap<TPMGL(T),
        TPMGL(U) >(k, v, lo, parent, len, k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                            ((x10_long) ((lo) + (parent)))),
                   v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                     ((x10_long) ((lo) + (parent)))), cmp);
        
        //#line 334 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(parent, ((x10_long)0ll))))
        {
            
            //#line 335 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return;
        }
        
        //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        parent = ((x10_long) ((parent) - (((x10_long)1ll))));
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_makeHeap_698
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_print_chunk_699
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_print_chunk_699
template<class TPMGL(T)> void org::scalegraph::util::Parallel::print_chunk(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a) {
    
    //#line 342 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("chunk")));
    
    //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i55784domain56634 = a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range();
    
    //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long i55784min56635 = i55784domain56634->FMGL(min);
    
    //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long i55784max56636 = i55784domain56634->FMGL(max);
    
    //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_long i56637;
        for (
             //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i56637 = i55784min56635; ((i56637) <= (i55784max56636));
             
             //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
             i56637 = ((x10_long) ((i56637) + (((x10_long)1ll)))))
        {
            
            //#line 343 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_long i56638 = i56637;
            
            //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT__get)()->printf(x10aux::makeStringLit("%s "),
                                                       reinterpret_cast<x10::lang::Any*>(x10aux::to_string(a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                                                                             i56638))));
        }
    }
    
    //#line 346 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
      reinterpret_cast<x10::lang::Any*>(x10aux::makeStringLit("")));
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_print_chunk_699
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_partial_sort_700
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_partial_sort_700
template<class TPMGL(T)> void org::scalegraph::util::Parallel::partial_sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 350 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10aux::makeStringLit("partial_sort called"));
    
    //#line 351 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long hi_ = hi;
    
    //#line 352 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template makeHeap<TPMGL(T) >(
      a, lo, hi, cmp);
    
    //#line 353 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((((x10_long) ((hi_) - (lo)))) > (((x10_long) (((x10_int)1))))))
    {
        
        //#line 354 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template pop_heap<TPMGL(T) >(
          a, lo, hi_, cmp);
        
        //#line 355 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        hi_ = ((x10_long) ((hi_) - (((x10_long)1ll))));
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_partial_sort_700
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_partial_sort_701
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_partial_sort_701
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::partial_sort(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 360 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10aux::makeStringLit("partial_sort called"));
    
    //#line 361 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long hi_ = hi;
    
    //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template makeHeap<TPMGL(T),
    TPMGL(U) >(k, v, lo, hi, cmp);
    
    //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((((x10_long) ((hi_) - (lo)))) > (((x10_long) (((x10_int)1))))))
    {
        
        //#line 364 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template pop_heap<TPMGL(T),
        TPMGL(U) >(k, v, lo, hi_, cmp);
        
        //#line 365 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        hi_ = ((x10_long) ((hi_) - (((x10_long)1ll))));
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_partial_sort_701
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_pop_heap_702
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_pop_heap_702
template<class TPMGL(T)> void org::scalegraph::util::Parallel::pop_heap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 370 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) value = a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                       ((x10_long) ((hi) - (((x10_long) (((x10_int)1)))))));
    
    //#line 371 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      ((x10_long) ((hi) - (((x10_long) (((x10_int)1)))))),
      a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
        lo));
    
    //#line 372 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template adjustHeap<TPMGL(T) >(
      a, lo, ((x10_long)0ll), ((x10_long) ((((x10_long) ((hi) - (lo)))) - (((x10_long) (((x10_int)1)))))),
      value, cmp);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_pop_heap_702
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_pop_heap_703
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_pop_heap_703
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::pop_heap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 376 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(T) valueK = k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                        ((x10_long) ((hi) - (((x10_long) (((x10_int)1)))))));
    
    //#line 377 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(U) valueV = v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                        ((x10_long) ((hi) - (((x10_long) (((x10_int)1)))))));
    
    //#line 378 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      ((x10_long) ((hi) - (((x10_long) (((x10_int)1)))))),
      k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
        lo));
    
    //#line 379 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
      ((x10_long) ((hi) - (((x10_long) (((x10_int)1)))))),
      v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
        lo));
    
    //#line 380 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template adjustHeap<TPMGL(T),
    TPMGL(U) >(k, v, lo, ((x10_long)0ll), ((x10_long) ((((x10_long) ((hi) - (lo)))) - (((x10_long) (((x10_int)1)))))),
               valueK, valueV, cmp);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_pop_heap_703
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_704
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_704
template<class TPMGL(T)> void org::scalegraph::util::Parallel::push_heap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 384 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template push_heap<TPMGL(T) >(
      a, lo, ((x10_long) ((((x10_long) ((hi) - (lo)))) - (((x10_long) (((x10_int)1)))))),
      ((x10_long) (((x10_int)0))), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                     ((x10_long) ((hi) - (((x10_long) (((x10_int)1))))))),
      cmp);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_704
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_705
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_705
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::push_heap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 388 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template push_heap<TPMGL(T),
    TPMGL(U) >(k, v, lo, ((x10_long) ((((x10_long) ((hi) - (lo)))) - (((x10_long) (((x10_int)1)))))),
               ((x10_long) (((x10_int)0))), k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                              ((x10_long) ((hi) - (((x10_long) (((x10_int)1))))))),
               v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                 ((x10_long) ((hi) - (((x10_long) (((x10_int)1))))))),
               cmp);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_705
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_706
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_706
template<class TPMGL(T)> void org::scalegraph::util::Parallel::push_heap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long holeIndex, x10_long topIndex, TPMGL(T) value, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 392 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long parent = ((x10_long) ((((x10_long) ((holeIndex) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))));
    
    //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long _holeIndex = holeIndex;
    
    //#line 394 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((_holeIndex) > (topIndex)) && ((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
             a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
               ((x10_long) ((lo) + (parent)))), value)) < (((x10_int)0))))
    {
        
        //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                ((x10_long) ((lo) + (parent)))));
        
        //#line 396 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        _holeIndex = parent;
        
        //#line 397 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        parent = ((x10_long) ((((x10_long) ((_holeIndex) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))));
    }
    
    //#line 399 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      ((x10_long) ((lo) + (_holeIndex))), value);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_706
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_707
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_707
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::push_heap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long holeIndex, x10_long topIndex, TPMGL(T) valueK,
  TPMGL(U) valueV, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 403 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long parent = ((x10_long) ((((x10_long) ((holeIndex) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))));
    
    //#line 404 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long _holeIndex = holeIndex;
    
    //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((_holeIndex) > (topIndex)) && ((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
             k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
               ((x10_long) ((lo) + (parent)))), valueK)) < (((x10_int)0))))
    {
        
        //#line 406 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                ((x10_long) ((lo) + (parent)))));
        
        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                                                ((x10_long) ((lo) + (parent)))));
        
        //#line 408 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        _holeIndex = parent;
        
        //#line 409 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        parent = ((x10_long) ((((x10_long) ((_holeIndex) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))));
    }
    
    //#line 411 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      ((x10_long) ((lo) + (_holeIndex))), valueK);
    
    //#line 412 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
      ((x10_long) ((lo) + (_holeIndex))), valueV);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_push_heap_707
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_adjustHeap_708
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_adjustHeap_708
template<class TPMGL(T)> void org::scalegraph::util::Parallel::adjustHeap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long holeIndex, x10_long len, TPMGL(T) value, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 416 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long _holeIndex = holeIndex;
    
    //#line 417 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long topIndex = holeIndex;
    
    //#line 418 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long secondChild = ((x10_long) ((((x10_long) ((((x10_long)2ll)) * (holeIndex)))) + (((x10_long)2ll))));
    
    //#line 420 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((secondChild) < (len))) {
        
        //#line 421 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
              a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                ((x10_long) ((lo) + (secondChild)))), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                        ((x10_long) ((((x10_long) ((lo) + (secondChild)))) - (((x10_long) (((x10_int)1))))))))) < (((x10_int)0))))
        {
            
            //#line 422 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            secondChild = ((x10_long) ((secondChild) - (((x10_long)1ll))));
        }
        
        //#line 425 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                ((x10_long) ((lo) + (secondChild)))));
        
        //#line 426 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        _holeIndex = secondChild;
        
        //#line 427 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        secondChild = ((x10_long) ((((x10_long) (((x10_int)2)))) * (((x10_long) ((secondChild) + (((x10_long) (((x10_int)1)))))))));
    }
    
    //#line 429 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(secondChild, len))) {
        
        //#line 430 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                ((x10_long) ((((x10_long) ((lo) + (secondChild)))) - (((x10_long) (((x10_int)1))))))));
        
        //#line 431 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        _holeIndex = ((x10_long) ((secondChild) - (((x10_long) (((x10_int)1))))));
    }
    
    //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template push_heap<TPMGL(T) >(
      a, lo, _holeIndex, topIndex, value, cmp);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_adjustHeap_708
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_adjustHeap_709
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_adjustHeap_709
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::adjustHeap(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long holeIndex, x10_long len, TPMGL(T) valueK,
  TPMGL(U) valueU, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp) {
    
    //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long _holeIndex = holeIndex;
    
    //#line 438 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long topIndex = holeIndex;
    
    //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long secondChild = ((x10_long) ((((x10_long) ((((x10_long)2ll)) * (holeIndex)))) + (((x10_long)2ll))));
    
    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((secondChild) < (len))) {
        
        //#line 442 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if (((x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>::__apply(x10aux::nullCheck(cmp), 
              k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                ((x10_long) ((lo) + (secondChild)))), k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                        ((x10_long) ((((x10_long) ((lo) + (secondChild)))) - (((x10_long) (((x10_int)1))))))))) < (((x10_int)0))))
        {
            
            //#line 443 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            secondChild = ((x10_long) ((secondChild) - (((x10_long)1ll))));
        }
        
        //#line 445 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                ((x10_long) ((lo) + (secondChild)))));
        
        //#line 446 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                                                ((x10_long) ((lo) + (secondChild)))));
        
        //#line 447 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        _holeIndex = secondChild;
        
        //#line 448 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        secondChild = ((x10_long) ((((x10_long) (((x10_int)2)))) * (((x10_long) ((secondChild) + (((x10_long) (((x10_int)1)))))))));
    }
    
    //#line 450 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(secondChild, len))) {
        
        //#line 451 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                ((x10_long) ((((x10_long) ((lo) + (secondChild)))) - (((x10_long) (((x10_int)1))))))));
        
        //#line 452 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
          ((x10_long) ((lo) + (_holeIndex))), v->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                                                ((x10_long) ((((x10_long) ((lo) + (secondChild)))) - (((x10_long) (((x10_int)1))))))));
        
        //#line 453 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        _holeIndex = ((x10_long) ((secondChild) - (((x10_long) (((x10_int)1))))));
    }
    
    //#line 455 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::template push_heap<TPMGL(T),
    TPMGL(U) >(k, v, lo, _holeIndex, topIndex, valueK, valueU,
               cmp);
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_adjustHeap_709
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSortLoop_710
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSortLoop_710
template<class TPMGL(T)> void org::scalegraph::util::Parallel::introSortLoop(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> a, x10_long lo,
  x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp,
  x10_int depth_limit) {
    
    //#line 459 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int depth_limit_ = depth_limit;
    
    //#line 460 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long hi_ = hi;
    
    //#line 461 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((((x10_long) ((hi_) - (lo)))) > (((x10_long) (org::scalegraph::util::Parallel::
                                                            FMGL(threashold1__get)())))))
    {
        
        //#line 462 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(depth_limit_, ((x10_int)0))))
        {
            
            //#line 463 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::template partial_sort<TPMGL(T) >(
              a, lo, hi_, cmp);
            
            //#line 464 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return;
        }
        
        //#line 466 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        depth_limit_ = ((x10_int) ((depth_limit_) - (((x10_int)1))));
        
        //#line 467 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long cut = org::scalegraph::util::Parallel::template unguardedPartition<TPMGL(T) >(
                         a, lo, hi_, org::scalegraph::util::Parallel::template median<TPMGL(T) >(
                                       a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                         lo), a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                ((x10_long) ((((x10_long) ((lo) + (hi_)))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))))),
                                       a->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                         ((x10_long) ((hi_) - (((x10_long) (((x10_int)1))))))),
                                       cmp), cmp);
        
        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template introSortLoop<TPMGL(T) >(
          a, cut, hi_, cmp, depth_limit_);
        
        //#line 469 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        hi_ = cut;
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSortLoop_710
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSortLoop_711
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSortLoop_711
template<class TPMGL(T), class TPMGL(U)> void org::scalegraph::util::Parallel::introSortLoop(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> k, org::scalegraph::util::MemoryChunk<TPMGL(U)> v,
  x10_long lo, x10_long hi, x10::lang::Fun_0_2<TPMGL(T), TPMGL(T), x10_int>* cmp,
  x10_int depth_limit) {
    
    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int depth_limit_ = depth_limit;
    
    //#line 475 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long hi_ = hi;
    
    //#line 476 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10While_c
    while (((((x10_long) ((hi_) - (lo)))) > (((x10_long) (org::scalegraph::util::Parallel::
                                                            FMGL(threashold2__get)())))))
    {
        
        //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
        if ((x10aux::struct_equals(depth_limit_, ((x10_int)0))))
        {
            
            //#line 478 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::template partial_sort<TPMGL(T),
            TPMGL(U) >(k, v, lo, hi_, cmp);
            
            //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
            return;
        }
        
        //#line 481 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        depth_limit_ = ((x10_int) ((depth_limit_) - (((x10_int)1))));
        
        //#line 482 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long cut = org::scalegraph::util::Parallel::template unguardedPartition<TPMGL(T),
                       TPMGL(U) >(k, v, lo, hi_, org::scalegraph::util::Parallel::template median<TPMGL(T) >(
                                                   k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                     lo),
                                                   k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                     ((x10_long) ((((x10_long) ((lo) + (hi_)))) / x10aux::zeroCheck(((x10_long) (((x10_int)2))))))),
                                                   k->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                     ((x10_long) ((hi_) - (((x10_long) (((x10_int)1))))))),
                                                   cmp), cmp);
        
        //#line 483 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Parallel::template introSortLoop<TPMGL(T),
        TPMGL(U) >(k, v, cut, hi_, cmp, depth_limit_);
        
        //#line 484 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
        hi_ = cut;
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_introSortLoop_711
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_712
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_712
template<class TPMGL(V)> void org::scalegraph::util::Parallel::sort(
  x10_int rangeScale, org::scalegraph::util::MemoryChunk<x10_long> key,
  org::scalegraph::util::MemoryChunk<TPMGL(V)> v, org::scalegraph::util::MemoryChunk<x10_long> key_tmp,
  org::scalegraph::util::MemoryChunk<TPMGL(V)> v_tmp) {
    
    //#line 490 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 491 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int logChunks = x10::lang::Math::min(((x10_int)7),
                                             rangeScale);
    
    //#line 492 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numChunks = ((x10_int) ((((x10_int)1)) << (0x1f & (logChunks))));
    
    //#line 493 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numShift = ((x10_int) ((rangeScale) - (logChunks)));
    
    //#line 494 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ScatterGather sg = org::scalegraph::util::ScatterGather::_make(((x10_long) (numChunks)));
    
    //#line 496 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(key->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   v->org::scalegraph::util::MemoryChunk<TPMGL(V)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 497 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(key->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   key_tmp->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 498 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(key->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   v_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 500 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((key->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__5<TPMGL(V)>)))org_scalegraph_util_Parallel__closure__5<TPMGL(V)>(sg, key, numShift))));
    
    //#line 507 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sg->org::scalegraph::util::ScatterGather::sum();
    
    //#line 509 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((key->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__6<TPMGL(V)>)))org_scalegraph_util_Parallel__closure__6<TPMGL(V)>(sg, key, numShift, key_tmp, v_tmp, v))));
    
    //#line 518 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sg->org::scalegraph::util::ScatterGather::check(((x10_int) (key->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    
    //#line 521 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> taskCounter =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 522 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    taskCounter->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)0), ((x10_int)0));
    
    //#line 524 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets =
      sg->org::scalegraph::util::ScatterGather::offsets();
    
    //#line 525 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> counts =
      sg->org::scalegraph::util::ScatterGather::counts();
    {
        
        //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var8 = x10::lang::Runtime::startFinish();
        {
            
            //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57043 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i55835min56661 = ((x10_int)0);
                        
                        //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i55835max56662 = ((x10_int) ((numThreads) - (((x10_int)1))));
                        
                        //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56663;
                            for (
                                 //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56663 = i55835min56661;
                                 ((i56663) <= (i55835max56662));
                                 
                                 //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56663 = ((x10_int) ((i56663) + (((x10_int)1)))))
                            {
                                
                                //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int tid56664 = i56663;
                                
                                //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__7<TPMGL(V)>)))org_scalegraph_util_Parallel__closure__7<TPMGL(V)>(taskCounter, numChunks, offsets, counts, numShift, sg, tid56664, key_tmp, v_tmp, key, v))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc714) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc714);
                        {
                            
                            //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc715) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57044 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc715);
                    {
                        
                        //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57043 = formal57044;
                    }
                } else
                throw;
            }
            
            //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57043)))
            {
                
                //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57043))
                {
                    
                    //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57043));
                }
                
            }
            
            //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var8);
            }
            
            //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57043)))
            {
                
                //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57043)))
                {
                    
                    //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57043));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_712
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_old_716
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_old_716
template<class TPMGL(V)> void org::scalegraph::util::Parallel::sort_old(
  x10_int rangeScale, org::scalegraph::util::MemoryChunk<x10_long> src_i,
  org::scalegraph::util::MemoryChunk<TPMGL(V)> src_v, org::scalegraph::util::MemoryChunk<x10_long> dst_i,
  org::scalegraph::util::MemoryChunk<TPMGL(V)> dst_v) {
    
    //#line 543 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long numThreads = ((x10_long) (x10::lang::Runtime::
                                         FMGL(NTHREADS__get)()));
    
    //#line 544 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int logChunks = 63 - __builtin_clzl(((((x10_long) ((numThreads) * (((x10_long)4ll))))) << 1) - 1);
    
    //#line 545 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long numChunks = ((x10_long) ((((x10_long)1ll)) << (0x3f & (logChunks))));
    
    //#line 546 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numShift = ((x10_int) ((rangeScale) - (logChunks)));
    
    //#line 547 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ScatterGather sg = org::scalegraph::util::ScatterGather::_make(numChunks);
    
    //#line 549 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(src_i->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   src_v->org::scalegraph::util::MemoryChunk<TPMGL(V)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 550 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(src_i->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   dst_i->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 551 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(src_i->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   dst_v->org::scalegraph::util::MemoryChunk<TPMGL(V)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__8<TPMGL(V)>)))org_scalegraph_util_Parallel__closure__8<TPMGL(V)>(sg, src_i, numShift))));
    
    //#line 560 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sg->org::scalegraph::util::ScatterGather::sum();
    
    //#line 562 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__9<TPMGL(V)>)))org_scalegraph_util_Parallel__closure__9<TPMGL(V)>(sg, src_i, numShift, dst_i, dst_v, src_v))));
    
    //#line 571 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sg->org::scalegraph::util::ScatterGather::check(((x10_int) (src_i->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    {
        
        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var9 = x10::lang::Runtime::startFinish();
        {
            
            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57046 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_long i55885min56686 = ((x10_long) (((x10_int)0)));
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_long i55885max56687 = ((x10_long) ((numChunks) - (((x10_long) (((x10_int)1))))));
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_long i56688;
                            for (
                                 //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56688 = i55885min56686;
                                 ((i56688) <= (i55885max56687));
                                 
                                 //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56688 = ((x10_long) ((i56688) + (((x10_long)1ll)))))
                            {
                                
                                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i56689 = i56688;
                                
                                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__10<TPMGL(V)>)))org_scalegraph_util_Parallel__closure__10<TPMGL(V)>(sg, i56689, dst_i, dst_v))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc718) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc718);
                        {
                            
                            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc719) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57047 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc719);
                    {
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57046 = formal57047;
                    }
                } else
                throw;
            }
            
            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57046)))
            {
                
                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57046))
                {
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57046));
                }
                
            }
            
            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var9);
            }
            
            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57046)))
            {
                
                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57046)))
                {
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57046));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_old_716
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_720
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_720
template<class TPMGL(V1), class TPMGL(V2)> void org::scalegraph::util::Parallel::sort(
  x10_int rangeScale, org::scalegraph::util::MemoryChunk<x10_long> key,
  org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1, org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2,
  org::scalegraph::util::MemoryChunk<x10_long> key_tmp, org::scalegraph::util::MemoryChunk<TPMGL(V1)> v1_tmp,
  org::scalegraph::util::MemoryChunk<TPMGL(V2)> v2_tmp) {
    
    //#line 585 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 586 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int logChunks = x10::lang::Math::min(((x10_int)7),
                                             rangeScale);
    
    //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numChunks = ((x10_int) ((((x10_int)1)) << (0x1f & (logChunks))));
    
    //#line 588 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numShift = ((x10_int) ((rangeScale) - (logChunks)));
    
    //#line 590 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ScatterGather sg = org::scalegraph::util::ScatterGather::_make(((x10_long) (numChunks)));
    
    //#line 592 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(key->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 593 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(key->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 594 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(key->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   key_tmp->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 595 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(key->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   v1_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 596 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(key->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   v2_tmp->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 600 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((key->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2)>)))org_scalegraph_util_Parallel__closure__11<TPMGL(V1),TPMGL(V2)>(sg, key, numShift))));
    
    //#line 609 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sg->org::scalegraph::util::ScatterGather::sum();
    
    //#line 613 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((key->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2)>)))org_scalegraph_util_Parallel__closure__12<TPMGL(V1),TPMGL(V2)>(sg, key, numShift, key_tmp, v1_tmp, v1, v2_tmp, v2))));
    
    //#line 625 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sg->org::scalegraph::util::ScatterGather::check(((x10_int) (key->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    
    //#line 629 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> taskCounter =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 630 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    taskCounter->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)0), ((x10_int)0));
    
    //#line 632 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> offsets =
      sg->org::scalegraph::util::ScatterGather::offsets();
    
    //#line 633 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> counts =
      sg->org::scalegraph::util::ScatterGather::counts();
    {
        
        //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var10 = x10::lang::Runtime::startFinish();
        {
            
            //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57049 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i55935min56712 = ((x10_int)0);
                        
                        //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i55935max56713 = ((x10_int) ((numThreads) - (((x10_int)1))));
                        
                        //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56714;
                            for (
                                 //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56714 = i55935min56712;
                                 ((i56714) <= (i55935max56713));
                                 
                                 //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56714 = ((x10_int) ((i56714) + (((x10_int)1)))))
                            {
                                
                                //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int tid56715 = i56714;
                                
                                //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2)>)))org_scalegraph_util_Parallel__closure__13<TPMGL(V1),TPMGL(V2)>(taskCounter, numChunks, offsets, counts, numShift, sg, tid56715, key_tmp, v1_tmp, v2_tmp, key, v1, v2))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc722) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc722);
                        {
                            
                            //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc723) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57050 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc723);
                    {
                        
                        //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57049 = formal57050;
                    }
                } else
                throw;
            }
            
            //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57049)))
            {
                
                //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57049))
                {
                    
                    //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57049));
                }
                
            }
            
            //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var10);
            }
            
            //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57049)))
            {
                
                //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57049)))
                {
                    
                    //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57049));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_720
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_old_724
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_old_724
template<class TPMGL(V1), class TPMGL(V2)> void org::scalegraph::util::Parallel::sort_old(
  x10_int rangeScale, org::scalegraph::util::MemoryChunk<x10_long> src_i,
  org::scalegraph::util::MemoryChunk<TPMGL(V1)> src_v1, org::scalegraph::util::MemoryChunk<TPMGL(V2)> src_v2,
  org::scalegraph::util::MemoryChunk<x10_long> dst_i, org::scalegraph::util::MemoryChunk<TPMGL(V1)> dst_v1,
  org::scalegraph::util::MemoryChunk<TPMGL(V2)> dst_v2) {
    
    //#line 655 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numThreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 656 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int logChunks = 63 - __builtin_clzl(((((x10_long) (((x10_int) ((numThreads) * (((x10_int)4))))))) << 1) - 1);
    
    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numChunks = ((x10_int) ((((x10_int)1)) << (0x1f & (logChunks))));
    
    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int numShift = ((x10_int) ((rangeScale) - (logChunks)));
    
    //#line 659 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::ScatterGather sg = org::scalegraph::util::ScatterGather::_make(((x10_long) (numChunks)));
    
    //#line 661 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(src_i->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   src_v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 662 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(src_i->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   src_v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 663 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(src_i->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   dst_i->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 664 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(src_i->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   dst_v1->org::scalegraph::util::MemoryChunk<TPMGL(V1)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 665 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Assert_c
    #ifndef NO_ASSERTIONS
    if (x10aux::x10__assertions_enabled)
        x10aux::x10__assert((x10aux::struct_equals(src_i->org::scalegraph::util::MemoryChunk<x10_long>::size(),
                                                   dst_v2->org::scalegraph::util::MemoryChunk<TPMGL(V2)>::size())));
    #endif//NO_ASSERTIONS
    
    //#line 667 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2)>)))org_scalegraph_util_Parallel__closure__14<TPMGL(V1),TPMGL(V2)>(sg, src_i, numShift))));
    
    //#line 674 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sg->org::scalegraph::util::ScatterGather::sum();
    
    //#line 676 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(x10::lang::LongRange::_make(((x10_long) (((x10_int)0))), ((x10_long) ((src_i->org::scalegraph::util::MemoryChunk<x10_long>::size()) - (((x10_long) (((x10_int)1))))))),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2)>)))org_scalegraph_util_Parallel__closure__15<TPMGL(V1),TPMGL(V2)>(sg, src_i, numShift, dst_i, dst_v1, src_v1, dst_v2, src_v2))));
    
    //#line 686 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    sg->org::scalegraph::util::ScatterGather::check(((x10_int) (src_i->org::scalegraph::util::MemoryChunk<x10_long>::size())));
    {
        
        //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var11 = x10::lang::Runtime::startFinish();
        {
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57052 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i55985min56737 = ((x10_int)0);
                        
                        //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i55985max56738 = ((x10_int) ((numChunks) - (((x10_int)1))));
                        
                        //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56739;
                            for (
                                 //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56739 = i55985min56737;
                                 ((i56739) <= (i55985max56738));
                                 
                                 //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56739 = ((x10_int) ((i56739) + (((x10_int)1)))))
                            {
                                
                                //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i56740 = i56739;
                                
                                //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2)>)))org_scalegraph_util_Parallel__closure__16<TPMGL(V1),TPMGL(V2)>(sg, i56740, dst_i, dst_v1, dst_v2))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc726) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc726);
                        {
                            
                            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc727) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57053 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc727);
                    {
                        
                        //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57052 = formal57053;
                    }
                } else
                throw;
            }
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57052)))
            {
                
                //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57052))
                {
                    
                    //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57052));
                }
                
            }
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var11);
            }
            
            //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57052)))
            {
                
                //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57052)))
                {
                    
                    //#line 688 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57052));
                }
                
            }
            
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_sort_old_724
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_appendMap_731
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_appendMap_731
template<class TPMGL(T)> x10::array::Array<TPMGL(T)>* org::scalegraph::util::Parallel::appendMap(
  x10::lang::IntRange range, x10::lang::Fun_0_1<x10_int, x10::array::Array<TPMGL(T)>*>* func) {
    
    //#line 744 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::util::ArrayList<TPMGL(T)>* acc = x10::util::ArrayList<TPMGL(T)>::_make();
    
    //#line 745 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::lang::IntRange i56001domain56743 = range;
    
    //#line 745 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56001min56744 = i56001domain56743->FMGL(min);
    
    //#line 745 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56001max56745 = i56001domain56743->FMGL(max);
    
    //#line 745 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_int i56746;
        for (
             //#line 745 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i56746 = i56001min56744; ((i56746) <= (i56001max56745));
             
             //#line 745 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
             i56746 = ((x10_int) ((i56746) + (((x10_int)1)))))
        {
            
            //#line 745 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56747 = i56746;
            
            //#line 746 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::array::Array<TPMGL(T)>* arr56741 = x10::lang::Fun_0_1<x10_int, x10::array::Array<TPMGL(T)>*>::__apply(x10aux::nullCheck(func), 
              i56747);
            
            //#line 747 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (((x10aux::nullCheck(arr56741)->FMGL(size)) > (((x10_int)0))))
            {
                
                //#line 748 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Parallel::iter(x10::lang::IntRange::_make(x10aux::nullCheck(arr56741)->
                                                                                   FMGL(region)->min(
                                                                                   ((x10_int)0)), x10aux::nullCheck(arr56741)->
                                                                                                    FMGL(region)->max(
                                                                                                    ((x10_int)0))),
                                                      reinterpret_cast<x10::lang::VoidFun_0_1<x10_int>*>((new (x10aux::alloc<x10::lang::VoidFun_0_1<x10_int> >(sizeof(org_scalegraph_util_Parallel__closure__19<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__19<TPMGL(T)>(acc, arr56741))));
            }
            
        }
    }
    
    //#line 753 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return acc->toArray();
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_appendMap_731
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_partition_732
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_partition_732
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> >
  org::scalegraph::util::Parallel::partition(org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
                                             x10::lang::Fun_0_1<TPMGL(T), x10_int>* func,
                                             x10_int kinds) {
    
    //#line 756 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return org::scalegraph::util::Parallel::template partition<TPMGL(T) >(
             array, reinterpret_cast<x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int> >(sizeof(org_scalegraph_util_Parallel__closure__20<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__20<TPMGL(T)>(func))),
             kinds);
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_partition_732
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_partition_733
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_partition_733
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> >
  org::scalegraph::util::Parallel::partition(org::scalegraph::util::MemoryChunk<TPMGL(T)> array,
                                             x10::lang::Fun_0_2<x10_long, TPMGL(T), x10_int>* func,
                                             x10_int kinds) {
    
    //#line 771 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("partition: "), x10aux::makeStringLit(", size: ")), array->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()), x10aux::makeStringLit(" kinds:")), kinds));
    
    //#line 772 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > acc =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::_make(((x10_long) (x10::lang::Runtime::
                                                                                                                                                      FMGL(MAX_THREADS__get)())), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> > >(sizeof(org_scalegraph_util_Parallel__closure__21<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__21<TPMGL(T)>(kinds))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 775 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10aux::makeStringLit("before acc"));
    
    //#line 776 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(array->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range(),
                                          reinterpret_cast<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange>*>((new (x10aux::alloc<x10::lang::VoidFun_0_2<x10_long, x10::lang::LongRange> >(sizeof(org_scalegraph_util_Parallel__closure__23<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__23<TPMGL(T)>(array, acc, func))));
    
    //#line 783 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10aux::makeStringLit("acc: "), acc));
    
    //#line 784 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_long> resultSizes =
      org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (kinds)), ((x10_int)0), true, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 785 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> > resultOffsets =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::_make(((x10_long) (kinds)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<x10_long> > >(sizeof(org_scalegraph_util_Parallel__closure__24<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__24<TPMGL(T)>())), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 786 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10aux::makeStringLit("before scan"));
    
    //#line 787 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56035min56771 = ((x10_int)0);
    
    //#line 787 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56035max56772 = ((x10_int) ((kinds) - (((x10_int)1))));
    
    //#line 787 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_int i56773;
        for (
             //#line 787 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i56773 = i56035min56771; ((i56773) <= (i56035max56772));
             
             //#line 787 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
             i56773 = ((x10_int) ((i56773) + (((x10_int)1)))))
        {
            
            //#line 787 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int k56774 = i56773;
            
            //#line 788 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> arr56754 =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (x10::lang::Runtime::
                                                                                  FMGL(MAX_THREADS__get)())), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_long> >(sizeof(org_scalegraph_util_Parallel__closure__25<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__25<TPMGL(T)>(acc, k56774))), (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 789 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("k: "), k56774), x10aux::makeStringLit(" arr: ")), arr56754));
            
            //#line 790 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            resultOffsets->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(
              k56774)->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              ((x10_int)0), ((x10_long)0ll));
            
            //#line 791 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            resultSizes->org::scalegraph::util::MemoryChunk<x10_long>::__set(
              k56774, org::scalegraph::util::Parallel::template scan<x10_long >(
                        acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::range(),
                        resultOffsets->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(
                          k56774), ((x10_long)0ll), reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(sizeof(org_scalegraph_util_Parallel__closure__26<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__26<TPMGL(T)>(acc, k56774))),
                        reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(sizeof(org_scalegraph_util_Parallel__closure__27<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__27<TPMGL(T)>()))));
            
            //#line 792 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_long> truescan56760 =
              org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (((x10_int) ((x10::lang::Runtime::
                                                                                               FMGL(MAX_THREADS__get)()) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 793 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::template scan<x10_long >(
              acc->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<org::scalegraph::util::GrowableMemory<TPMGL(T)>*> >::range(),
              truescan56760, ((x10_long)0ll), reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(sizeof(org_scalegraph_util_Parallel__closure__28<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__28<TPMGL(T)>(arr56754))),
              reinterpret_cast<x10::lang::Fun_0_2<x10_long, x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_long, x10_long, x10_long> >(sizeof(org_scalegraph_util_Parallel__closure__29<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__29<TPMGL(T)>())));
            
            //#line 794 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("k: "), k56774), x10aux::makeStringLit("truescan: ")), truescan56760));
            
            //#line 795 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("k: "), k56774), x10aux::makeStringLit("resultOffsets: ")), resultOffsets->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(
                                                                                                                                                                                                                       k56774)));
            
            //#line 796 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            resultOffsets->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::__set(
              k56774, truescan56760);
        }
    }
    
    //#line 798 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10aux::makeStringLit("after scan"));
    
    //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56051min56775 = ((x10_int)0);
    
    //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56051max56776 = ((x10_int) ((kinds) - (((x10_int)1))));
    
    //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_int i56777;
        for (
             //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i56777 = i56051min56775; ((i56777) <= (i56051max56776));
             
             //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
             i56777 = ((x10_int) ((i56777) + (((x10_int)1)))))
        {
            
            //#line 799 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int k56778 = i56777;
            
            //#line 800 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("k: "), k56778), x10aux::makeStringLit(", resultOffsets: ")), resultOffsets->org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<x10_long> >::__apply(
                                                                                                                                                                                                                         k56778)));
        }
    }
    
    //#line 802 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> > result =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::MemoryChunk<TPMGL(T)> >::_make(((x10_long) (kinds)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<TPMGL(T)> >*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, org::scalegraph::util::MemoryChunk<TPMGL(T)> > >(sizeof(org_scalegraph_util_Parallel__closure__30<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__30<TPMGL(T)>(resultSizes))), (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 803 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10aux::makeStringLit("before copy"));
    
    //#line 804 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10aux::makeStringLit("sizes"), resultSizes));
    
    //#line 805 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10::lang::String::__plus(x10aux::makeStringLit("sizes"), org::scalegraph::util::MemoryChunk<x10_long >::_make(((x10_long) (kinds)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_long>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_long> >(sizeof(org_scalegraph_util_Parallel__closure__31<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__31<TPMGL(T)>(resultOffsets))), (x10_byte*)(void*)__FILE__, __LINE__)));
    {
        
        //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var12 = x10::lang::Runtime::startFinish();
        {
            
            //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57055 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56067min56767 = ((x10_int)0);
                        
                        //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56067max56768 = ((x10_int) ((kinds) - (((x10_int)1))));
                        
                        //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56769;
                            for (
                                 //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56769 = i56067min56767;
                                 ((i56769) <= (i56067max56768));
                                 
                                 //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56769 = ((x10_int) ((i56769) + (((x10_int)1)))))
                            {
                                
                                //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int k56770 = i56769;
                                
                                //#line 807 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Parallel::iter(
                                  x10::lang::IntRange::_make(((x10_int)0), ((x10_int) ((x10::lang::Runtime::
                                                                                          FMGL(MAX_THREADS__get)()) - (((x10_int)1))))),
                                  reinterpret_cast<x10::lang::VoidFun_0_1<x10_int>*>((new (x10aux::alloc<x10::lang::VoidFun_0_1<x10_int> >(sizeof(org_scalegraph_util_Parallel__closure__32<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__32<TPMGL(T)>(acc, k56770, resultOffsets, result))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc734) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc734);
                        {
                            
                            //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc735) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57056 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc735);
                    {
                        
                        //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57055 = formal57056;
                    }
                } else
                throw;
            }
            
            //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57055)))
            {
                
                //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57055))
                {
                    
                    //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57055));
                }
                
            }
            
            //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var12);
            }
            
            //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57055)))
            {
                
                //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57055)))
                {
                    
                    //#line 806 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57055));
                }
                
            }
            
        }
    }
    
    //#line 816 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::debugln(x10aux::makeStringLit("after copy"));
    
    //#line 817 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return result;
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_partition_733
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_map_736
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_map_736
template<class TPMGL(T)> x10::array::Array<TPMGL(T)>* org::scalegraph::util::Parallel::map(
  x10::array::Region* region, x10::lang::Fun_0_1<x10_int, TPMGL(T)>* func) {
    
    //#line 820 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return org::scalegraph::util::Parallel::template map<TPMGL(T) >(
             x10::lang::IntRange::_make(x10aux::nullCheck(region)->min(
                                          ((x10_int)0)), x10aux::nullCheck(region)->max(
                                                           ((x10_int)0))),
             func);
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_map_736
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_map_737
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_map_737
template<class TPMGL(T)> x10::array::Array<TPMGL(T)>* org::scalegraph::util::Parallel::map(
  x10::lang::IntRange range, x10::lang::Fun_0_1<x10_int, TPMGL(T)>* func) {
    
    //#line 823 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((((x10_int) ((range->FMGL(max)) - (range->
                                                                    FMGL(min))))) + (((x10_int)1))));
    
    //#line 824 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::util::IndexedMemoryChunk<TPMGL(T) > store = x10::util::IndexedMemoryChunk<void>::allocate<TPMGL(T) >(size, 8, false, false);
    
    //#line 825 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<TPMGL(T)>* acc = x10::array::Array<TPMGL(T)>::_make(x10::array::Region::make(
                                                                            range->
                                                                              FMGL(min),
                                                                            range->
                                                                              FMGL(max)),
                                                                          store);
    
    //#line 826 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Parallel::iter(range, reinterpret_cast<x10::lang::VoidFun_0_1<x10_int>*>((new (x10aux::alloc<x10::lang::VoidFun_0_1<x10_int> >(sizeof(org_scalegraph_util_Parallel__closure__33<TPMGL(T)>)))org_scalegraph_util_Parallel__closure__33<TPMGL(T)>(acc, func))));
    
    //#line 829 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return acc;
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_map_737
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_754
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_754
template<class TPMGL(U)> TPMGL(U) org::scalegraph::util::Parallel::reduce(
  x10::lang::IntRange range, x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func,
  x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op) {
    
    //#line 879 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((((x10_int) ((range->FMGL(max)) - (range->
                                                                    FMGL(min))))) + (((x10_int)1))));
    
    //#line 880 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 881 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size = x10::lang::Math::max(((x10_int) ((((x10_int) ((((x10_int) ((size) + (nthreads)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads))),
                                              ((x10_int)1));
    
    //#line 882 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10::array::Array<TPMGL(U)>* intermid = x10::array::Array<TPMGL(U)>::_make(nthreads);
    {
        
        //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var17 = x10::lang::Runtime::startFinish();
        {
            
            //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57070 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56198min56824 = ((x10_int)0);
                        
                        //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56198max56825 = ((x10_int) ((nthreads) - (((x10_int)1))));
                        
                        //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56826;
                            for (
                                 //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56826 = i56198min56824;
                                 ((i56826) <= (i56198max56825));
                                 
                                 //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56826 = ((x10_int) ((i56826) + (((x10_int)1)))))
                            {
                                
                                //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i56827 = i56826;
                                
                                //#line 884 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx56820 = i56827;
                                
                                //#line 885 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i_start56821 = x10::lang::Math::min(
                                                         ((x10_int) ((range->
                                                                        FMGL(max)) + (((x10_int)1)))),
                                                         ((x10_int) ((range->
                                                                        FMGL(min)) + (((x10_int) ((i56827) * (chunk_size)))))));
                                
                                //#line 886 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::IntRange i_range56822 =
                                  x10::lang::IntRange::_make(i_start56821, x10::lang::Math::min(
                                                                             range->
                                                                               FMGL(max),
                                                                             ((x10_int) ((((x10_int) ((i_start56821) + (chunk_size)))) - (((x10_int)1))))));
                                
                                //#line 887 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__38<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__38<TPMGL(U)>(i_range56822, func, intermid, idx56820))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc756) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc756);
                        {
                            
                            //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc757) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57071 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc757);
                    {
                        
                        //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57070 = formal57071;
                    }
                } else
                throw;
            }
            
            //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57070)))
            {
                
                //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57070))
                {
                    
                    //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57070));
                }
                
            }
            
            //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var17);
            }
            
            //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57070)))
            {
                
                //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57070)))
                {
                    
                    //#line 883 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57070));
                }
                
            }
            
        }
    }
    
    //#line 893 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(U) r = x10aux::zeroValue<TPMGL(U) >();
    
    //#line 894 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56214min56828 = ((x10_int)0);
    
    //#line 894 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56214max56829 = ((x10_int) ((nthreads) - (((x10_int)1))));
    
    //#line 894 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_int i56830;
        for (
             //#line 894 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i56830 = i56214min56828; ((i56830) <= (i56214max56829));
             
             //#line 894 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
             i56830 = ((x10_int) ((i56830) + (((x10_int)1)))))
        {
            
            //#line 894 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56831 = i56830;
            
            //#line 894 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            r = x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(op), 
              r, intermid->x10::array::Array<TPMGL(U)>::__apply(
                   i56831));
        }
    }
    
    //#line 895 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return r;
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_754
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_758
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_758
template<class TPMGL(U)> TPMGL(U) org::scalegraph::util::Parallel::reduce(
  x10::lang::LongRange range, x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func,
  x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op) {
    
    //#line 899 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size = ((x10_long) ((((x10_long) ((range->FMGL(max)) - (range->
                                                                       FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 900 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 901 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10::lang::Math::max(((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (nthreads)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads))))),
                                               ((x10_long)1ll));
    
    //#line 902 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(U)> intermid =
      org::scalegraph::util::MemoryChunk<TPMGL(U) >::_make(((x10_long) (nthreads)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var18 = x10::lang::Runtime::startFinish();
        {
            
            //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57073 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56247min56841 = ((x10_int)0);
                        
                        //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56247max56842 = ((x10_int) ((nthreads) - (((x10_int)1))));
                        
                        //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56843;
                            for (
                                 //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56843 = i56247min56841;
                                 ((i56843) <= (i56247max56842));
                                 
                                 //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56843 = ((x10_int) ((i56843) + (((x10_int)1)))))
                            {
                                
                                //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i56844 = i56843;
                                
                                //#line 904 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx56837 = i56844;
                                
                                //#line 905 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start56838 = x10::lang::Math::min(
                                                          ((x10_long) ((range->
                                                                          FMGL(max)) + (((x10_long) (((x10_int)1)))))),
                                                          ((x10_long) ((range->
                                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i56844))) * (chunk_size)))))));
                                
                                //#line 906 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range56839 =
                                  x10::lang::LongRange::_make(i_start56838, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start56838) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 907 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__39<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__39<TPMGL(U)>(i_range56839, func, intermid, idx56837))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc760) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc760);
                        {
                            
                            //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc761) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57074 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc761);
                    {
                        
                        //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57073 = formal57074;
                    }
                } else
                throw;
            }
            
            //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57073)))
            {
                
                //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57073))
                {
                    
                    //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57073));
                }
                
            }
            
            //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var18);
            }
            
            //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57073)))
            {
                
                //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57073)))
                {
                    
                    //#line 903 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57073));
                }
                
            }
            
        }
    }
    
    //#line 913 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(U) r = x10aux::zeroValue<TPMGL(U) >();
    
    //#line 914 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56263min56845 = ((x10_int)0);
    
    //#line 914 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56263max56846 = ((x10_int) ((nthreads) - (((x10_int)1))));
    
    //#line 914 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_int i56847;
        for (
             //#line 914 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i56847 = i56263min56845; ((i56847) <= (i56263max56846));
             
             //#line 914 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
             i56847 = ((x10_int) ((i56847) + (((x10_int)1)))))
        {
            
            //#line 914 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56848 = i56847;
            
            //#line 914 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            r = x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(op), 
              r, intermid->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                   i56848));
        }
    }
    
    //#line 915 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return r;
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_758
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_762
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_762
template<class TPMGL(U)> TPMGL(U) org::scalegraph::util::Parallel::reduce(
  x10::lang::LongRange range, x10::lang::Fun_0_2<x10_long, x10::lang::LongRange, TPMGL(U)>* func,
  x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op) {
    
    //#line 919 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size = ((x10_long) ((((x10_long) ((range->FMGL(max)) - (range->
                                                                       FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 920 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 921 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10::lang::Math::max(((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (nthreads)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads))))),
                                               ((x10_long)1ll));
    
    //#line 922 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(U)> intermid =
      org::scalegraph::util::MemoryChunk<TPMGL(U) >::_make(((x10_long) (nthreads)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    {
        
        //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
        x10::lang::Runtime::ensureNotInAtomic();
        
        //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::FinishState* x10____var19 = x10::lang::Runtime::startFinish();
        {
            
            //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::CheckedThrowable* throwable57076 =
              x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
            
            //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
            try {
                
                //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    {
                        
                        //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56279min56852 = ((x10_int)0);
                        
                        //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                        x10_int i56279max56853 = ((x10_int) ((nthreads) - (((x10_int)1))));
                        
                        //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                        {
                            x10_int i56854;
                            for (
                                 //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                 i56854 = i56279min56852;
                                 ((i56854) <= (i56279max56853));
                                 
                                 //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                 i56854 = ((x10_int) ((i56854) + (((x10_int)1)))))
                            {
                                
                                //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int i56855 = i56854;
                                
                                //#line 924 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_int idx56849 = i56855;
                                
                                //#line 925 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10_long i_start56850 = x10::lang::Math::min(
                                                          ((x10_long) ((range->
                                                                          FMGL(max)) + (((x10_long) (((x10_int)1)))))),
                                                          ((x10_long) ((range->
                                                                          FMGL(min)) + (((x10_long) ((((x10_long) (i56855))) * (chunk_size)))))));
                                
                                //#line 926 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                x10::lang::LongRange i_range56851 =
                                  x10::lang::LongRange::_make(i_start56850, x10::lang::Math::min(
                                                                              range->
                                                                                FMGL(max),
                                                                              ((x10_long) ((((x10_long) ((i_start56850) + (chunk_size)))) - (((x10_long) (((x10_int)1))))))));
                                
                                //#line 927 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::runAsync(
                                  reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__40<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__40<TPMGL(U)>(intermid, idx56849, i56855, i_range56851, func))));
                            }
                        }
                        
                    }
                }
                catch (x10::lang::CheckedThrowable* __exc764) {
                    if (true) {
                        x10::lang::CheckedThrowable* __lowerer__var__0__ =
                          static_cast<x10::lang::CheckedThrowable*>(__exc764);
                        {
                            
                            //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::pushException(
                              __lowerer__var__0__);
                            
                            //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                        }
                    } else
                    throw;
                }
                
                //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::compiler::Finalization::plausibleThrow();
            }
            catch (x10::lang::CheckedThrowable* __exc765) {
                if (true) {
                    x10::lang::CheckedThrowable* formal57077 =
                      static_cast<x10::lang::CheckedThrowable*>(__exc765);
                    {
                        
                        //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                        throwable57076 = formal57077;
                    }
                } else
                throw;
            }
            
            //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57076)))
            {
                
                //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (x10aux::instanceof<x10::compiler::Abort*>(throwable57076))
                {
                    
                    //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57076));
                }
                
            }
            
            //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if (true) {
                
                //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::stopFinish(x10____var19);
            }
            
            //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals(X10_NULL, throwable57076)))
            {
                
                //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57076)))
                {
                    
                    //#line 923 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                    x10aux::throwException(x10aux::nullCheck(throwable57076));
                }
                
            }
            
        }
    }
    
    //#line 931 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    TPMGL(U) r = x10aux::zeroValue<TPMGL(U) >();
    
    //#line 932 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56295min56856 = ((x10_int)0);
    
    //#line 932 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int i56295max56857 = ((x10_int) ((nthreads) - (((x10_int)1))));
    
    //#line 932 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
    {
        x10_int i56858;
        for (
             //#line 932 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
             i56858 = i56295min56856; ((i56858) <= (i56295max56857));
             
             //#line 932 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
             i56858 = ((x10_int) ((i56858) + (((x10_int)1)))))
        {
            
            //#line 932 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10_int i56859 = i56858;
            
            //#line 932 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
            r = x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(op), 
              r, intermid->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                   i56859));
        }
    }
    
    //#line 933 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return r;
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_reduce_762
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_scan_766
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_scan_766
template<class TPMGL(U)> TPMGL(U) org::scalegraph::util::Parallel::scan(
  x10::lang::IntRange range, x10::array::Array<TPMGL(U)>* dst,
  TPMGL(U) init, x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>* func,
  x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op) {
    
    //#line 937 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int size = ((x10_int) ((((x10_int) ((range->FMGL(max)) - (range->
                                                                    FMGL(min))))) + (((x10_int)1))));
    
    //#line 938 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(size, ((x10_int)0)))) {
        
        //#line 938 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10aux::zeroValue<TPMGL(U) >();
        
    }
    
    //#line 939 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 940 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int chunk_size = x10::lang::Math::max(((x10_int) ((((x10_int) ((((x10_int) ((size) + (nthreads)))) - (((x10_int)1))))) / x10aux::zeroCheck(nthreads))),
                                              ((x10_int)1));
    
    //#line 941 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__set(
      range->FMGL(min), init);
    
    //#line 943 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((nthreads) >= (((x10_int)2)))) {
        {
            
            //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var20 = x10::lang::Runtime::startFinish();
            {
                
                //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable57079 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 945 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i56327min56867 = ((x10_int)0);
                            
                            //#line 945 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i56327max56868 = ((x10_int) ((nthreads) - (((x10_int)1))));
                            
                            //#line 945 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i56869;
                                for (
                                     //#line 945 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i56869 = i56327min56867;
                                     ((i56869) <= (i56327max56868));
                                     
                                     //#line 945 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i56869 = ((x10_int) ((i56869) + (((x10_int)1)))))
                                {
                                    
                                    //#line 945 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i56870 = i56869;
                                    
                                    //#line 946 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i_start56864 =
                                      ((x10_int) ((range->
                                                     FMGL(min)) + (((x10_int) ((i56870) * (chunk_size))))));
                                    
                                    //#line 947 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i_end56865 = ((x10_int) ((i_start56864) + (chunk_size)));
                                    
                                    //#line 948 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                                    if (((i_end56865) <= (((x10_int) ((range->
                                                                         FMGL(max)) + (((x10_int)1)))))))
                                    {
                                        
                                        //#line 949 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__41<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__41<TPMGL(U)>(i_start56864, i_end56865, func, dst))));
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc768) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc768);
                            {
                                
                                //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc769) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal57080 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc769);
                        {
                            
                            //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable57079 = formal57080;
                        }
                    } else
                    throw;
                }
                
                //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57079)))
                {
                    
                    //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable57079))
                    {
                        
                        //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57079));
                    }
                    
                }
                
                //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var20);
                }
                
                //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57079)))
                {
                    
                    //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57079)))
                    {
                        
                        //#line 944 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57079));
                    }
                    
                }
                
            }
        }
        
        //#line 957 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int i56343min56883 = ((x10_int)0);
        
        //#line 957 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int i56343max56884 = ((x10_int) ((nthreads) - (((x10_int)1))));
        
        //#line 957 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_int i56885;
            for (
                 //#line 957 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56885 = i56343min56883; ((i56885) <= (i56343max56884));
                 
                 //#line 957 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56885 = ((x10_int) ((i56885) + (((x10_int)1)))))
            {
                
                //#line 957 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_int i56886 = i56885;
                
                //#line 958 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_int i_start56871 = ((x10_int) ((range->
                                                      FMGL(min)) + (((x10_int) ((i56886) * (chunk_size))))));
                
                //#line 959 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_int i_end56872 = ((x10_int) ((i_start56871) + (chunk_size)));
                
                //#line 960 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (((i_end56872) <= (((x10_int) ((range->
                                                     FMGL(max)) + (((x10_int)1)))))))
                {
                    
                    //#line 961 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__set(
                      i_end56872, x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(op), 
                        x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__apply(
                          i_end56872), x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__apply(
                                         i_start56871)));
                }
                
            }
        }
        {
            
            //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var21 = x10::lang::Runtime::startFinish();
            {
                
                //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable57082 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 965 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i56375min56879 = ((x10_int)0);
                            
                            //#line 965 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i56375max56880 = ((x10_int) ((nthreads) - (((x10_int)1))));
                            
                            //#line 965 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i56881;
                                for (
                                     //#line 965 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i56881 = i56375min56879;
                                     ((i56881) <= (i56375max56880));
                                     
                                     //#line 965 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i56881 = ((x10_int) ((i56881) + (((x10_int)1)))))
                                {
                                    
                                    //#line 965 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i56882 = i56881;
                                    
                                    //#line 966 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i_start56877 =
                                      ((x10_int) ((range->
                                                     FMGL(min)) + (((x10_int) ((i56882) * (chunk_size))))));
                                    
                                    //#line 967 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i_end56878 = x10::lang::Math::min(
                                                           ((x10_int) ((range->
                                                                          FMGL(max)) + (((x10_int)1)))),
                                                           ((x10_int) ((i_start56877) + (chunk_size))));
                                    
                                    //#line 968 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__42<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__42<TPMGL(U)>(i_start56877, i_end56878, dst, func))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc771) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__1__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc771);
                            {
                                
                                //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__1__);
                                
                                //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc772) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal57083 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc772);
                        {
                            
                            //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable57082 = formal57083;
                        }
                    } else
                    throw;
                }
                
                //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57082)))
                {
                    
                    //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable57082))
                    {
                        
                        //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57082));
                    }
                    
                }
                
                //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var21);
                }
                
                //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57082)))
                {
                    
                    //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57082)))
                    {
                        
                        //#line 964 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57082));
                    }
                    
                }
                
            }
        }
    } else {
        
        //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::IntRange i56391domain56887 = range;
        
        //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int i56391min56888 = i56391domain56887->FMGL(min);
        
        //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int i56391max56889 = i56391domain56887->FMGL(max);
        
        //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_int i56890;
            for (
                 //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56890 = i56391min56888; ((i56890) <= (i56391max56889));
                 
                 //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56890 = ((x10_int) ((i56890) + (((x10_int)1)))))
            {
                
                //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_int i56891 = i56890;
                
                //#line 975 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__set(
                  ((x10_int) ((i56891) + (((x10_int)1)))),
                  x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                    i56891, x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__apply(
                              i56891)));
            }
        }
        
    }
    
    //#line 977 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(dst)->x10::array::Array<TPMGL(U)>::__apply(
             range->FMGL(max));
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_scan_766
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_scan_773
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_scan_773
template<class TPMGL(U)> TPMGL(U) org::scalegraph::util::Parallel::scan(
  x10::lang::LongRange range, org::scalegraph::util::MemoryChunk<TPMGL(U)> dst,
  TPMGL(U) init, x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>* func,
  x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>* op) {
    
    //#line 981 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long size = ((x10_long) ((((x10_long) ((range->FMGL(max)) - (range->
                                                                       FMGL(min))))) + (((x10_long) (((x10_int)1))))));
    
    //#line 982 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(size, ((x10_long)0ll)))) {
        
        //#line 982 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
        return x10aux::zeroValue<TPMGL(U) >();
        
    }
    
    //#line 983 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_int nthreads = x10::lang::Runtime::FMGL(NTHREADS__get)();
    
    //#line 984 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
    x10_long chunk_size = x10::lang::Math::max(((x10_long) ((((x10_long) ((((x10_long) ((size) + (((x10_long) (nthreads)))))) - (((x10_long) (((x10_int)1))))))) / x10aux::zeroCheck(((x10_long) (nthreads))))),
                                               ((x10_long)1ll));
    
    //#line 985 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
    dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
      range->FMGL(min), init);
    
    //#line 987 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
    if (((nthreads) >= (((x10_int)2)))) {
        {
            
            //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var22 = x10::lang::Runtime::startFinish();
            {
                
                //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable57085 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 989 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i56424min56899 = ((x10_int)0);
                            
                            //#line 989 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i56424max56900 = ((x10_int) ((nthreads) - (((x10_int)1))));
                            
                            //#line 989 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i56901;
                                for (
                                     //#line 989 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i56901 = i56424min56899;
                                     ((i56901) <= (i56424max56900));
                                     
                                     //#line 989 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i56901 = ((x10_int) ((i56901) + (((x10_int)1)))))
                                {
                                    
                                    //#line 989 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i56902 = i56901;
                                    
                                    //#line 990 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start56896 =
                                      ((x10_long) ((range->
                                                      FMGL(min)) + (((x10_long) ((((x10_long) (i56902))) * (chunk_size))))));
                                    
                                    //#line 991 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_end56897 =
                                      ((x10_long) ((i_start56896) + (chunk_size)));
                                    
                                    //#line 992 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                                    if (((i_end56897) <= (((x10_long) ((range->
                                                                          FMGL(max)) + (((x10_long) (((x10_int)1)))))))))
                                    {
                                        
                                        //#line 993 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::runAsync(
                                          reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__43<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__43<TPMGL(U)>(i_start56896, i_end56897, func, dst))));
                                    }
                                    
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc775) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc775);
                            {
                                
                                //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc776) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal57086 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc776);
                        {
                            
                            //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable57085 = formal57086;
                        }
                    } else
                    throw;
                }
                
                //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57085)))
                {
                    
                    //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable57085))
                    {
                        
                        //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57085));
                    }
                    
                }
                
                //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var22);
                }
                
                //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57085)))
                {
                    
                    //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57085)))
                    {
                        
                        //#line 988 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57085));
                    }
                    
                }
                
            }
        }
        
        //#line 1001 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int i56440min56915 = ((x10_int)0);
        
        //#line 1001 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_int i56440max56916 = ((x10_int) ((nthreads) - (((x10_int)1))));
        
        //#line 1001 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_int i56917;
            for (
                 //#line 1001 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56917 = i56440min56915; ((i56917) <= (i56440max56916));
                 
                 //#line 1001 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56917 = ((x10_int) ((i56917) + (((x10_int)1)))))
            {
                
                //#line 1001 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_int i56918 = i56917;
                
                //#line 1002 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i_start56903 = ((x10_long) ((range->
                                                        FMGL(min)) + (((x10_long) ((((x10_long) (i56918))) * (chunk_size))))));
                
                //#line 1003 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i_end56904 = ((x10_long) ((i_start56903) + (chunk_size)));
                
                //#line 1004 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (((i_end56904) <= (((x10_long) ((range->
                                                      FMGL(max)) + (((x10_long) (((x10_int)1)))))))))
                {
                    
                    //#line 1005 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
                      i_end56904, x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(op), 
                        dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                          i_end56904), dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                                         i_start56903)));
                }
                
            }
        }
        {
            
            //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var23 = x10::lang::Runtime::startFinish();
            {
                
                //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable57088 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 1009 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i56472min56911 = ((x10_int)0);
                            
                            //#line 1009 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                            x10_int i56472max56912 = ((x10_int) ((nthreads) - (((x10_int)1))));
                            
                            //#line 1009 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
                            {
                                x10_int i56913;
                                for (
                                     //#line 1009 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                     i56913 = i56472min56911;
                                     ((i56913) <= (i56472max56912));
                                     
                                     //#line 1009 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                                     i56913 = ((x10_int) ((i56913) + (((x10_int)1)))))
                                {
                                    
                                    //#line 1009 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_int i56914 = i56913;
                                    
                                    //#line 1010 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_start56909 =
                                      ((x10_long) ((range->
                                                      FMGL(min)) + (((x10_long) ((((x10_long) (i56914))) * (chunk_size))))));
                                    
                                    //#line 1011 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                                    x10_long i_end56910 =
                                      x10::lang::Math::min(
                                        ((x10_long) ((range->
                                                        FMGL(max)) + (((x10_long) (((x10_int)1)))))),
                                        ((x10_long) ((i_start56909) + (chunk_size))));
                                    
                                    //#line 1012 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::runAsync(
                                      reinterpret_cast<x10::lang::VoidFun_0_0*>((new (x10aux::alloc<x10::lang::VoidFun_0_0>(sizeof(org_scalegraph_util_Parallel__closure__44<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__44<TPMGL(U)>(i_start56909, i_end56910, dst, func))));
                                }
                            }
                            
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc778) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__1__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc778);
                            {
                                
                                //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__1__);
                                
                                //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc779) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal57089 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc779);
                        {
                            
                            //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable57088 = formal57089;
                        }
                    } else
                    throw;
                }
                
                //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57088)))
                {
                    
                    //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable57088))
                    {
                        
                        //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57088));
                    }
                    
                }
                
                //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var23);
                }
                
                //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57088)))
                {
                    
                    //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57088)))
                    {
                        
                        //#line 1008 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57088));
                    }
                    
                }
                
            }
        }
    } else {
        
        //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i56488domain56919 = range;
        
        //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56488min56920 = i56488domain56919->FMGL(min);
        
        //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
        x10_long i56488max56921 = i56488domain56919->FMGL(max);
        
        //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": polyglot.ast.For_c
        {
            x10_long i56922;
            for (
                 //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                 i56922 = i56488min56920; ((i56922) <= (i56488max56921));
                 
                 //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10LocalAssign_c
                 i56922 = ((x10_long) ((i56922) + (((x10_long)1ll)))))
            {
                
                //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10LocalDecl_c
                x10_long i56923 = i56922;
                
                //#line 1019 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": Eval of x10.ast.X10Call_c
                dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__set(
                  ((x10_long) ((i56923) + (((x10_long) (((x10_int)1)))))),
                  x10::lang::Fun_0_2<x10_long, TPMGL(U), TPMGL(U)>::__apply(x10aux::nullCheck(func), 
                    i56923, dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
                              i56923)));
            }
        }
        
    }
    
    //#line 1021 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return dst->org::scalegraph::util::MemoryChunk<TPMGL(U)>::__apply(
             range->FMGL(max));
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_scan_773
#ifndef ORG_SCALEGRAPH_UTIL_PARALLEL_H_prefixSum_780
#define ORG_SCALEGRAPH_UTIL_PARALLEL_H_prefixSum_780
template<class TPMGL(U)> TPMGL(U) org::scalegraph::util::Parallel::prefixSum(
  x10::lang::IntRange range, x10::array::Array<TPMGL(U)>* arr) {
    
    //#line 1025 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Parallel.x10": x10.ast.X10Return_c
    return org::scalegraph::util::Parallel::template scan<TPMGL(U) >(
             range, arr, x10aux::zeroValue<TPMGL(U) >(), reinterpret_cast<x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)>*>((new (x10aux::alloc<x10::lang::Fun_0_2<x10_int, TPMGL(U), TPMGL(U)> >(sizeof(org_scalegraph_util_Parallel__closure__45<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__45<TPMGL(U)>(arr))),
             reinterpret_cast<x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)>*>((new (x10aux::alloc<x10::lang::Fun_0_2<TPMGL(U), TPMGL(U), TPMGL(U)> >(sizeof(org_scalegraph_util_Parallel__closure__46<TPMGL(U)>)))org_scalegraph_util_Parallel__closure__46<TPMGL(U)>())));
    
}
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_prefixSum_780
#endif // ORG_SCALEGRAPH_UTIL_PARALLEL_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_PARALLEL_H_NODEPS

#ifndef __ORG_SCALEGRAPH_UTIL_TEAM2_H
#define __ORG_SCALEGRAPH_UTIL_TEAM2_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Runtime;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace org { namespace scalegraph { namespace util { 
class Serialization;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(Z1), class TPMGL(U)> class Fun_0_1;
} } 
namespace x10 { namespace lang { 
class Byte;
} } 
namespace x10 { namespace lang { 
class FinishState;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
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
namespace x10 { namespace compiler { 
class Ifdef;
} } 
namespace org { namespace scalegraph { namespace util { namespace tuple { 
template<class TPMGL(T1), class TPMGL(T2)> class Tuple2;
} } } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Arithmetic;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace org { namespace scalegraph { namespace util { 

class Team2   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::Team2* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::Team2 > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::Team2 _alloc(){org::scalegraph::util::Team2 t; return t; }
    
    x10::util::Team* FMGL(base);
    
    void _constructor(x10::util::Team* baseTeam);
    
    static org::scalegraph::util::Team2 _make(x10::util::Team* baseTeam);
    
    x10_int role();
    x10_int size();
    x10::array::Array<x10::lang::Place>* places();
    x10::array::PlaceGroup* placeGroup();
    void barrier();
    template<class TPMGL(T)> static void nativeScatter(x10_int id, x10_int role,
                                                       x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                       org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                       x10_int count);
    template<class TPMGL(T)> static void nativeScatterv(x10_int id,
                                                        x10_int role,
                                                        x10_int root,
                                                        org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                        org::scalegraph::util::MemoryChunk<x10_int> src_offs,
                                                        org::scalegraph::util::MemoryChunk<x10_int> src_counts,
                                                        org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                        x10_int dst_count);
    template<class TPMGL(T)> static void nativeGather(x10_int id,
                                                      x10_int role,
                                                      x10_int root,
                                                      org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                      org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                      x10_int count);
    template<class TPMGL(T)> static void nativeGatherv(x10_int id,
                                                       x10_int role,
                                                       x10_int root,
                                                       org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                       x10_int src_count,
                                                       org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                       org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
                                                       org::scalegraph::util::MemoryChunk<x10_int> dst_counts);
    template<class TPMGL(T)> static void nativeReduce(x10_int id,
                                                      x10_int role,
                                                      x10_int root,
                                                      org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                      org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                      x10_int count,
                                                      x10_int op);
    template<class TPMGL(T)> static void nativeBcast(x10_int id,
                                                     x10_int role,
                                                     x10_int root,
                                                     org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                     org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                     x10_int count);
    template<class TPMGL(T)> static void nativeAllgather(
      x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
      org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count);
    template<class TPMGL(T)> static void nativeAllgatherv(
      x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
      x10_int src_count, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
      org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
      org::scalegraph::util::MemoryChunk<x10_int> dst_counts);
    template<class TPMGL(T)> static void nativeAlltoall(x10_int id,
                                                        x10_int role,
                                                        org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                                        org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                                        x10_int count);
    template<class TPMGL(T)> static void nativeAlltoallv(
      x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
      org::scalegraph::util::MemoryChunk<x10_int> src_offs,
      org::scalegraph::util::MemoryChunk<x10_int> src_counts,
      org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
      org::scalegraph::util::MemoryChunk<x10_int> dst_counts);
    template<class TPMGL(T)> static void nativeAllreduce(
      x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
      org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count,
      x10_int op);
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      nullChunk();
    template<class TPMGL(T)> void scatter(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                          org::scalegraph::util::MemoryChunk<TPMGL(T)> dst);
    template<class TPMGL(T)> void scatterv(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                           org::scalegraph::util::MemoryChunk<x10_int> src_offs,
                                           org::scalegraph::util::MemoryChunk<x10_int> src_counts,
                                           org::scalegraph::util::MemoryChunk<TPMGL(T)> dst);
    template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
      scatterv(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
               org::scalegraph::util::MemoryChunk<x10_int> src_counts);
    template<class TPMGL(T)> void gather(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                         org::scalegraph::util::MemoryChunk<TPMGL(T)> dst);
    template<class TPMGL(T)> void gatherv(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                          org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                          org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
                                          org::scalegraph::util::MemoryChunk<x10_int> dst_counts);
    template<class TPMGL(T)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >
      gatherv(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src);
    template<class TPMGL(T)> void bcast(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                        org::scalegraph::util::MemoryChunk<TPMGL(T)> dst);
    template<class TPMGL(T)> void allgather(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                            org::scalegraph::util::MemoryChunk<TPMGL(T)> dst);
    template<class TPMGL(T)> void allgatherv(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                             org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                             org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
                                             org::scalegraph::util::MemoryChunk<x10_int> dst_counts);
    template<class TPMGL(T)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >
      allgatherv(org::scalegraph::util::MemoryChunk<TPMGL(T)> src);
    template<class TPMGL(T)> void alltoall(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                           org::scalegraph::util::MemoryChunk<TPMGL(T)> dst);
    template<class TPMGL(T)> void alltoallv(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                            org::scalegraph::util::MemoryChunk<x10_int> src_offs,
                                            org::scalegraph::util::MemoryChunk<x10_int> src_counts,
                                            org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                            org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
                                            org::scalegraph::util::MemoryChunk<x10_int> dst_counts);
    template<class TPMGL(T)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >
      alltoallv(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                org::scalegraph::util::MemoryChunk<x10_int> src_counts);
    template<class TPMGL(T)> void allreduce(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                            org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                            x10_int op);
    template<class TPMGL(T)> TPMGL(T) allreduce(TPMGL(T) src,
                                                x10_int op);
    template<class TPMGL(T)> void reduce(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                         org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
                                         x10_int op);
    template<class TPMGL(T)> TPMGL(T) reduce(x10_int root,
                                             TPMGL(T) src,
                                             x10_int op);
    void printMemoryConsumption() {
     
    }
    template<class TPMGL(T)> static void countOffsets(org::scalegraph::util::MemoryChunk<TPMGL(T)> counts,
                                                      org::scalegraph::util::MemoryChunk<TPMGL(T)> offsets,
                                                      TPMGL(T) initialValue);
    template<class TPMGL(T)> static org::scalegraph::util::MemoryChunk<TPMGL(T)>
      getCounts(org::scalegraph::util::MemoryChunk<TPMGL(T)> offsets);
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::Team2 other) {
        
        //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(base),
                                      other->FMGL(base)));
        
    }
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::Team2 other) {
        
        //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return (x10aux::struct_equals((*this)->FMGL(base),
                                      other->FMGL(base)));
        
    }
    org::scalegraph::util::Team2 org__scalegraph__util__Team2____this__org__scalegraph__util__Team2(
      ) {
        
        //#line 30 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return (*this);
        
    }
    
    static void _serialize(org::scalegraph::util::Team2 this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::Team2 _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::Team2 this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H

namespace org { namespace scalegraph { namespace util { 
class Team2;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/util/Team.h>
#include <x10/lang/Int.h>
#include <x10/array/Array.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Place.h>
#include <x10/array/PlaceGroup.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Runtime.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Long.h>
#include <x10/lang/IllegalArgumentException.h>
#include <org/scalegraph/util/Serialization.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Fun_0_1.h>
#include <x10/lang/Byte.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/compiler/Ifdef.h>
#include <org/scalegraph/util/tuple/Tuple2.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Arithmetic.h>
#include <x10/lang/String.h>
#include <x10/compiler/NonEscaping.h>
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__1_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__1 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__1<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (((x10_long) ((i) * (((x10_long) (count)))))));
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__1<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__1<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__1<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__1<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__1(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:160";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__1<TPMGL(T) > >org_scalegraph_util_Team2__closure__1<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__1<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__1<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__1<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__1<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__1<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__1<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__1_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__2_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__2 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__2<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return count;
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__2<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__2<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__2<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__2<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__2(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:161";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__2<TPMGL(T) > >org_scalegraph_util_Team2__closure__2<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__2<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__2<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__2<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__2<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__2<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__2<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__2_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__3_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__3_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__3 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__3<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::size()));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_byte> ser_src;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ser_src);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__3<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__3<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_src = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org_scalegraph_util_Team2__closure__3<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__3<TPMGL(T) >(that_ser_src);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__3(org::scalegraph::util::MemoryChunk<x10_byte> ser_src) : ser_src(ser_src) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:271";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__3<TPMGL(T) > >org_scalegraph_util_Team2__closure__3<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__3<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__3<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__3<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__3<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__3<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__3<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__3_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__4_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__4_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__4 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__4<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 279 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return count;
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__4<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__4<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__4<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__4<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__4(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:279";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__4<TPMGL(T) > >org_scalegraph_util_Team2__closure__4<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__4<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__4<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__4<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__4<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__4<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__4<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__4_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__5_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__5_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__5 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__5<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 280 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (((x10_long) ((i) * (((x10_long) (count)))))));
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__5<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__5<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__5<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__5<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__5(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:280";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__5<TPMGL(T) > >org_scalegraph_util_Team2__closure__5<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__5<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__5<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__5<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__5<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__5<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__5<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__5_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__6_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__6_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__6 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__6<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::size()));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_byte> ser_src;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ser_src);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__6<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__6<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_src = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org_scalegraph_util_Team2__closure__6<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__6<TPMGL(T) >(that_ser_src);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__6(org::scalegraph::util::MemoryChunk<x10_byte> ser_src) : ser_src(ser_src) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:293";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__6<TPMGL(T) > >org_scalegraph_util_Team2__closure__6<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__6<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__6<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__6<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__6<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__6<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__6<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__6_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__7_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__7 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__7<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 319 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::size()));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_byte> ser_src;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ser_src);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__7<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__7<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_src = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org_scalegraph_util_Team2__closure__7<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__7<TPMGL(T) >(that_ser_src);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__7(org::scalegraph::util::MemoryChunk<x10_byte> ser_src) : ser_src(ser_src) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:319";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__7<TPMGL(T) > >org_scalegraph_util_Team2__closure__7<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__7<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__7<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__7<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__7<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__7<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__7<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__7_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__8_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__8_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__8 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__8<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 336 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::size()));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_byte> ser_src;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ser_src);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__8<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__8<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_src = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org_scalegraph_util_Team2__closure__8<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__8<TPMGL(T) >(that_ser_src);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__8(org::scalegraph::util::MemoryChunk<x10_byte> ser_src) : ser_src(ser_src) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:336";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__8<TPMGL(T) > >org_scalegraph_util_Team2__closure__8<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__8<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__8<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__8<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__8<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__8<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__8<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__8_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__9_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__9_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__9 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__9<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 391 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::size()));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_byte> ser_src;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ser_src);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__9<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__9<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_src = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org_scalegraph_util_Team2__closure__9<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__9<TPMGL(T) >(that_ser_src);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__9(org::scalegraph::util::MemoryChunk<x10_byte> ser_src) : ser_src(ser_src) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:391";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__9<TPMGL(T) > >org_scalegraph_util_Team2__closure__9<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__9<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__9<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__9<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__9<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__9<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__9<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__9_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__10_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__10_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__10 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__10<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 434 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::size()));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_byte> ser_src;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ser_src);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__10<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__10<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_src = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org_scalegraph_util_Team2__closure__10<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__10<TPMGL(T) >(that_ser_src);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__10(org::scalegraph::util::MemoryChunk<x10_byte> ser_src) : ser_src(ser_src) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:434";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__10<TPMGL(T) > >org_scalegraph_util_Team2__closure__10<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__10<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__10<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__10<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__10<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__10<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__10<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__10_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__11_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__11_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__11 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__11<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 442 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (((x10_long) ((i) * (((x10_long) (count)))))));
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__11<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__11<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__11<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__11<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__11(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:442";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__11<TPMGL(T) > >org_scalegraph_util_Team2__closure__11<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__11<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__11<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__11<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__11<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__11<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__11<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__11_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__12_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__12_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__12 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__12<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 443 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return count;
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__12<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__12<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__12<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__12<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__12(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:443";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__12<TPMGL(T) > >org_scalegraph_util_Team2__closure__12<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__12<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__12<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__12<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__12<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__12<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__12<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__12_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__13_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__13_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__13 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__13<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 472 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::size()));
        
    }
    
    // captured environment
    org::scalegraph::util::MemoryChunk<x10_byte> ser_src;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->ser_src);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__13<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__13<TPMGL(T) > >();
        buf.record_reference(storage);
        org::scalegraph::util::MemoryChunk<x10_byte> that_ser_src = buf.read<org::scalegraph::util::MemoryChunk<x10_byte> >();
        org_scalegraph_util_Team2__closure__13<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__13<TPMGL(T) >(that_ser_src);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__13(org::scalegraph::util::MemoryChunk<x10_byte> ser_src) : ser_src(ser_src) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:472";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__13<TPMGL(T) > >org_scalegraph_util_Team2__closure__13<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__13<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__13<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__13<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__13<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__13<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__13<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__13_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__14_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__14_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__14 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__14<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 524 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return count;
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__14<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__14<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__14<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__14<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__14(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:524";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__14<TPMGL(T) > >org_scalegraph_util_Team2__closure__14<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__14<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__14<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__14<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__14<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__14<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__14<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__14_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__15_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__15_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__15 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__15<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 525 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return ((x10_int) (((x10_long) ((i) * (((x10_long) (count)))))));
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__15<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__15<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__15<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__15<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__15(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:525";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__15<TPMGL(T) > >org_scalegraph_util_Team2__closure__15<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__15<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__15<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__15<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__15<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__15<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__15<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__15_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__16_CLOSURE
#define ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__16_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_1.h>
template<class TPMGL(T)> class org_scalegraph_util_Team2__closure__16 : public x10::lang::Closure {
    public:
    
    static typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__16<TPMGL(T) > > _itable;
    static x10aux::itable_entry _itables[2];
    
    virtual x10aux::itable_entry* _getITables() { return _itables; }
    
    // closure body
    x10_int __apply(x10_long i) {
        
        //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return count;
        
    }
    
    // captured environment
    x10_int count;
    
    x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(x10aux::serialization_buffer &buf) {
        buf.write(this->count);
    }
    
    template<class __T> static __T* _deserialize(x10aux::deserialization_buffer &buf) {
        org_scalegraph_util_Team2__closure__16<TPMGL(T) >* storage = x10aux::alloc<org_scalegraph_util_Team2__closure__16<TPMGL(T) > >();
        buf.record_reference(storage);
        x10_int that_count = buf.read<x10_int>();
        org_scalegraph_util_Team2__closure__16<TPMGL(T) >* this_ = new (storage) org_scalegraph_util_Team2__closure__16<TPMGL(T) >(that_count);
        return this_;
    }
    
    org_scalegraph_util_Team2__closure__16(x10_int count) : count(count) { }
    
    static const x10aux::serialization_id_t _serialization_id;
    
    static const x10aux::RuntimeType* getRTT() { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    virtual const x10aux::RuntimeType *_type() const { return x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >(); }
    
    x10::lang::String* toString() {
        return x10aux::makeStringLit(this->toNativeString());
    }
    
    const char* toNativeString() {
        return "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10:536";
    }

};

template<class TPMGL(T)> typename x10::lang::Fun_0_1<x10_long, x10_int>::template itable <org_scalegraph_util_Team2__closure__16<TPMGL(T) > >org_scalegraph_util_Team2__closure__16<TPMGL(T) >::_itable(&x10::lang::Reference::equals, &x10::lang::Closure::hashCode, &org_scalegraph_util_Team2__closure__16<TPMGL(T) >::__apply, &org_scalegraph_util_Team2__closure__16<TPMGL(T) >::toString, &x10::lang::Closure::typeName);
template<class TPMGL(T)> x10aux::itable_entry org_scalegraph_util_Team2__closure__16<TPMGL(T) >::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Fun_0_1<x10_long, x10_int> >, &org_scalegraph_util_Team2__closure__16<TPMGL(T) >::_itable),x10aux::itable_entry(NULL, NULL)};

template<class TPMGL(T)> const x10aux::serialization_id_t org_scalegraph_util_Team2__closure__16<TPMGL(T) >::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org_scalegraph_util_Team2__closure__16<TPMGL(T) >::template _deserialize<x10::lang::Reference>,x10aux::CLOSURE_KIND_NOT_ASYNC);

#endif // ORG_SCALEGRAPH_UTIL_TEAM2__CLOSURE__16_CLOSURE
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeScatter_788
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeScatter_788
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeScatter(
  x10_int id, x10_int role, x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count) {
    
    //#line 50 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_scatter(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 52 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeScatter_788
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeScatterv_789
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeScatterv_789
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeScatterv(
  x10_int id, x10_int role, x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<x10_int> src_offs, org::scalegraph::util::MemoryChunk<x10_int> src_counts,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int dst_count) {
    
    //#line 56 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_scatterv(id, role, root, src->pointer(), src_offs->pointer(), src_counts->pointer(), dst->pointer(), dst_count, sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 58 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeScatterv_789
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeGather_790
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeGather_790
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeGather(
  x10_int id, x10_int role, x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count) {
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_gather(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 64 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeGather_790
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeGatherv_791
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeGatherv_791
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeGatherv(
  x10_int id, x10_int role, x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  x10_int src_count, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
  org::scalegraph::util::MemoryChunk<x10_int> dst_offs, org::scalegraph::util::MemoryChunk<x10_int> dst_counts) {
    
    //#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_gatherv(id, role, root, src->pointer(), src_count, dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 70 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeGatherv_791
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeReduce_792
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeReduce_792
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeReduce(
  x10_int id, x10_int role, x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count,
  x10_int op) {
    
    //#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_reduce(id, role, root, src->pointer(), dst->pointer(), (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), count, x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 76 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeReduce_792
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeBcast_793
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeBcast_793
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeBcast(
  x10_int id, x10_int role, x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count) {
    
    //#line 80 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_bcast(id, role, root, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeBcast_793
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllgather_794
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllgather_794
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeAllgather(
  x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count) {
    
    //#line 86 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_allgather(id, role, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 88 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllgather_794
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllgatherv_795
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllgatherv_795
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeAllgatherv(
  x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  x10_int src_count, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
  org::scalegraph::util::MemoryChunk<x10_int> dst_offs, org::scalegraph::util::MemoryChunk<x10_int> dst_counts) {
    
    //#line 92 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_allgatherv(id, role, src->pointer(), src_count, dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 94 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllgatherv_795
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAlltoall_796
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAlltoall_796
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeAlltoall(
  x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_alltoall(id, role, src->pointer(), dst->pointer(), sizeof(TPMGL(T)), count, x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 100 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAlltoall_796
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAlltoallv_797
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAlltoallv_797
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeAlltoallv(
  x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<x10_int> src_offs, org::scalegraph::util::MemoryChunk<x10_int> src_counts,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
  org::scalegraph::util::MemoryChunk<x10_int> dst_counts) {
    
    //#line 104 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_alltoallv(id, role, src->pointer(), src_offs->pointer(), src_counts->pointer(), dst->pointer(), dst_offs->pointer(), dst_counts->pointer(), sizeof(TPMGL(T)), x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 106 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAlltoallv_797
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllreduce_798
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllreduce_798
template<class TPMGL(T)> void org::scalegraph::util::Team2::nativeAllreduce(
  x10_int id, x10_int role, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int count,
  x10_int op) {
    
    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::increaseParallelism();
    x10rt_allreduce(id, role, src->pointer(), dst->pointer(), (x10rt_red_op_type)op, x10rt_get_red_type<TPMGL(T)>(), count, x10aux::coll_handler, x10aux::coll_enter());
    
    //#line 112 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    x10::lang::Runtime::decreaseParallelism(((x10_int)1));
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nativeAllreduce_798
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_nullChunk_799
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_nullChunk_799
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::Team2::nullChunk() {
    
    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return org::scalegraph::util::MemoryChunk<TPMGL(T)>::_make();
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_nullChunk_799
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_scatter_800
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_scatter_800
template<class TPMGL(T)> void org::scalegraph::util::Team2::scatter(
  x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst) {
    
    //#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, root)) && (!x10aux::struct_equals(src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                                                       ((x10_long) ((dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) * (((x10_long) (x10aux::nullCheck((*this)->
                                                                                                                                                                                    FMGL(base))->size()))))))))
    {
        
        //#line 153 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("src.size() != dst.size()"))));
    }
    {
        
        //#line 156 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 157 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(role, root))) {
                
                //#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int places = (*this)->org::scalegraph::util::Team2::size();
                
                //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int count = ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()));
                
                //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> src_offs =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__1<TPMGL(T)>)))org_scalegraph_util_Team2__closure__1<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> src_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__2<TPMGL(T)>)))org_scalegraph_util_Team2__closure__2<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_offs =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 163 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 164 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
                  org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                    src, src_offs, src_counts, ser_offs, ser_counts);
                
                //#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var24 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57748 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeScatter<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_counts,
                                      deser_counts, ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc801) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc801);
                                    {
                                        
                                        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc802) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57749 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc802);
                                {
                                    
                                    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57748 = formal57749;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57748)))
                        {
                            
                            //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57748))
                            {
                                
                                //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57748));
                            }
                            
                        }
                        
                        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var24);
                        }
                        
                        //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57748)))
                        {
                            
                            //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57748)))
                            {
                                
                                //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57748));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
                  org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      ((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var25 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57751 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeScatterv<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_src,
                                      ser_offs, ser_counts,
                                      deser_dst, deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   ((x10_int)0)));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc803) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc803);
                                    {
                                        
                                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc804) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57752 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc804);
                                {
                                    
                                    //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57751 = formal57752;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57751)))
                        {
                            
                            //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57751))
                            {
                                
                                //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57751));
                            }
                            
                        }
                        
                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var25);
                        }
                        
                        //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57751)))
                        {
                            
                            //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57751)))
                            {
                                
                                //#line 168 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57751));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 169 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
                  dst, ((x10_int)0), count, deser_dst, ((x10_int)0),
                  deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                    ((x10_int)0)));
                
                //#line 170 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                src_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 171 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                src_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 172 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 173 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 174 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
                
                //#line 175 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 176 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            } else {
                
                //#line 179 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var26 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57754 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeScatter<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      deser_counts, ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc805) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc805);
                                    {
                                        
                                        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc806) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57755 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc806);
                                {
                                    
                                    //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57754 = formal57755;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57754)))
                        {
                            
                            //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57754))
                            {
                                
                                //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57754));
                            }
                            
                        }
                        
                        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var26);
                        }
                        
                        //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57754)))
                        {
                            
                            //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57754)))
                            {
                                
                                //#line 180 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57754));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 181 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
                  org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      ((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var27 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57757 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeScatterv<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, org::scalegraph::util::Team2::template nullChunk<x10_byte >(),
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      deser_dst, deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   ((x10_int)0)));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc807) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc807);
                                    {
                                        
                                        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc808) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57758 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc808);
                                {
                                    
                                    //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57757 = formal57758;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57757)))
                        {
                            
                            //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57757))
                            {
                                
                                //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57757));
                            }
                            
                        }
                        
                        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var27);
                        }
                        
                        //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57757)))
                        {
                            
                            //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57757)))
                            {
                                
                                //#line 182 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57757));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 183 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
                  dst, ((x10_int)0), ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())),
                  deser_dst, ((x10_int)0), deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                             ((x10_int)0)));
                
                //#line 184 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 185 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            }
            
        } else {
            {
                
                //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var28 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57760 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeScatter<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, root, src, dst, ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc809) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc809);
                                {
                                    
                                    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc810) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57761 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc810);
                            {
                                
                                //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57760 = formal57761;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57760)))
                    {
                        
                        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57760))
                        {
                            
                            //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57760));
                        }
                        
                    }
                    
                    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var28);
                    }
                    
                    //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57760)))
                    {
                        
                        //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57760)))
                        {
                            
                            //#line 189 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57760));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_scatter_800
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_scatterv_811
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_scatterv_811
template<class TPMGL(T)> void org::scalegraph::util::Team2::scatterv(
  x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<x10_int> src_offs, org::scalegraph::util::MemoryChunk<x10_int> src_counts,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst) {
    
    //#line 202 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    {
        
        //#line 205 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 206 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(role, root))) {
                
                //#line 207 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int places = (*this)->org::scalegraph::util::Team2::size();
                
                //#line 208 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_offs =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 209 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 210 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
                  org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                    src, src_offs, src_counts, ser_offs, ser_counts);
                
                //#line 211 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var29 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57763 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeScatter<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_counts,
                                      deser_counts, ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc812) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc812);
                                    {
                                        
                                        //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc813) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57764 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc813);
                                {
                                    
                                    //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57763 = formal57764;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57763)))
                        {
                            
                            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57763))
                            {
                                
                                //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57763));
                            }
                            
                        }
                        
                        //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var29);
                        }
                        
                        //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57763)))
                        {
                            
                            //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57763)))
                            {
                                
                                //#line 212 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57763));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 213 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
                  org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      ((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var30 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57766 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeScatterv<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_src,
                                      ser_offs, ser_counts,
                                      deser_dst, deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   ((x10_int)0)));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc814) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc814);
                                    {
                                        
                                        //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc815) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57767 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc815);
                                {
                                    
                                    //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57766 = formal57767;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57766)))
                        {
                            
                            //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57766))
                            {
                                
                                //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57766));
                            }
                            
                        }
                        
                        //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var30);
                        }
                        
                        //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57766)))
                        {
                            
                            //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57766)))
                            {
                                
                                //#line 214 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57766));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 215 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
                  dst, ((x10_int)0), ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())),
                  deser_dst, ((x10_int)0), deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                             ((x10_int)0)));
                
                //#line 216 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 217 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 218 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
                
                //#line 219 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 220 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            } else {
                
                //#line 223 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var31 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57769 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeScatter<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      deser_counts, ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc816) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc816);
                                    {
                                        
                                        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc817) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57770 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc817);
                                {
                                    
                                    //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57769 = formal57770;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57769)))
                        {
                            
                            //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57769))
                            {
                                
                                //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57769));
                            }
                            
                        }
                        
                        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var31);
                        }
                        
                        //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57769)))
                        {
                            
                            //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57769)))
                            {
                                
                                //#line 224 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57769));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 225 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
                  org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      ((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var32 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57772 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeScatterv<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, org::scalegraph::util::Team2::template nullChunk<x10_byte >(),
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      deser_dst, deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   ((x10_int)0)));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc818) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc818);
                                    {
                                        
                                        //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc819) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57773 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc819);
                                {
                                    
                                    //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57772 = formal57773;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57772)))
                        {
                            
                            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57772))
                            {
                                
                                //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57772));
                            }
                            
                        }
                        
                        //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var32);
                        }
                        
                        //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57772)))
                        {
                            
                            //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57772)))
                            {
                                
                                //#line 226 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57772));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 227 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
                  dst, ((x10_int)0), ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())),
                  deser_dst, ((x10_int)0), deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                             ((x10_int)0)));
                
                //#line 228 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 229 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            }
            
        } else {
            {
                
                //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var33 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57775 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeScatterv<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, root, src, src_offs,
                                  src_counts, dst, ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc820) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc820);
                                {
                                    
                                    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc821) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57776 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc821);
                            {
                                
                                //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57775 = formal57776;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57775)))
                    {
                        
                        //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57775))
                        {
                            
                            //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57775));
                        }
                        
                    }
                    
                    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var33);
                    }
                    
                    //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57775)))
                    {
                        
                        //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57775)))
                        {
                            
                            //#line 233 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57775));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_scatterv_811
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_scatterv_822
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_scatterv_822
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::Team2::scatterv(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                         org::scalegraph::util::MemoryChunk<x10_int> src_counts) {
    
    //#line 246 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 247 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> dst_size =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 248 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> src_offs =
      (x10aux::struct_equals(root, role)) ? (org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((src_counts->org::scalegraph::util::MemoryChunk<x10_int>::size()) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__))
      : (org::scalegraph::util::MemoryChunk<void>::template getNull<x10_int >());
    
    //#line 249 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(root, role))) {
        
        //#line 250 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Team2::template countOffsets<x10_int >(
          src_counts, src_offs, ((x10_int)0));
    }
    
    //#line 252 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template scatter<x10_int >(root, src_counts,
                                        dst_size);
    
    //#line 253 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (dst_size->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                                                           ((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 254 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template scatterv<TPMGL(T) >(root, src, src_offs,
                                          src_counts, dst);
    
    //#line 255 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return dst;
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_scatterv_822
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_gather_823
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_gather_823
template<class TPMGL(T)> void org::scalegraph::util::Team2::gather(
  x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst) {
    
    //#line 261 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 262 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, root)) && (!x10aux::struct_equals(((x10_long) ((src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) * (((x10_long) (x10aux::nullCheck((*this)->
                                                                                                                                                                                    FMGL(base))->size()))))),
                                                                       dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 263 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("src.size() != dst.size()"))));
    }
    {
        
        //#line 266 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 267 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(role, root))) {
                
                //#line 268 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int places = (*this)->org::scalegraph::util::Team2::size();
                
                //#line 269 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int count = ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()));
                
                //#line 270 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
                  org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                    src, ((x10_int)0), count);
                
                //#line 271 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__3<TPMGL(T)>)))org_scalegraph_util_Team2__closure__3<TPMGL(T)>(ser_src))), (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 272 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var34 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57778 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeGather<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_counts,
                                      deser_counts, ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc824) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc824);
                                    {
                                        
                                        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc825) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57779 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc825);
                                {
                                    
                                    //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57778 = formal57779;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57778)))
                        {
                            
                            //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57778))
                            {
                                
                                //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57778));
                            }
                            
                        }
                        
                        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var34);
                        }
                        
                        //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57778)))
                        {
                            
                            //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57778)))
                            {
                                
                                //#line 273 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57778));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 274 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_offs =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((places) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 275 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                  ((x10_int)0), ((x10_int)0));
                
                //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int i57441min57621 = ((x10_int)0);
                
                //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int i57441max57622 = ((x10_int) ((places) - (((x10_int)1))));
                
                //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
                {
                    x10_int i57623;
                    for (
                         //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                         i57623 = i57441min57621; ((i57623) <= (i57441max57622));
                         
                         //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                         i57623 = ((x10_int) ((i57623) + (((x10_int)1)))))
                    {
                        
                        //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10_int i57624 = i57623;
                        
                        //#line 276 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          ((x10_int) ((i57624) + (((x10_int)1)))),
                          ((x10_int) ((deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                         i57624)) + (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                       i57624)))));
                    }
                }
                
                //#line 277 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
                  org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      places))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var35 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57781 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeGatherv<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_src,
                                      ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                        ((x10_int)0)), deser_dst,
                                      deser_offs, deser_counts);
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc826) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc826);
                                    {
                                        
                                        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc827) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57782 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc827);
                                {
                                    
                                    //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57781 = formal57782;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57781)))
                        {
                            
                            //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57781))
                            {
                                
                                //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57781));
                            }
                            
                        }
                        
                        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var35);
                        }
                        
                        //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57781)))
                        {
                            
                            //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57781)))
                            {
                                
                                //#line 278 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57781));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 279 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> dst_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__4<TPMGL(T)>)))org_scalegraph_util_Team2__closure__4<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 280 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> dst_offs =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__5<TPMGL(T)>)))org_scalegraph_util_Team2__closure__5<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 281 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
                  dst, dst_offs, dst_counts, deser_dst, deser_offs,
                  deser_counts);
                
                //#line 282 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
                
                //#line 283 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 284 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 285 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 286 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
                
                //#line 287 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 288 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                dst_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            } else {
                
                //#line 291 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int count = ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()));
                
                //#line 292 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
                  org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                    src, ((x10_int)0), count);
                
                //#line 293 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__6<TPMGL(T)>)))org_scalegraph_util_Team2__closure__6<TPMGL(T)>(ser_src))), (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var36 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57784 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeGather<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_counts,
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc828) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc828);
                                    {
                                        
                                        //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc829) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57785 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc829);
                                {
                                    
                                    //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57784 = formal57785;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57784)))
                        {
                            
                            //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57784))
                            {
                                
                                //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57784));
                            }
                            
                        }
                        
                        //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var36);
                        }
                        
                        //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57784)))
                        {
                            
                            //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57784)))
                            {
                                
                                //#line 294 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57784));
                            }
                            
                        }
                        
                    }
                }
                {
                    
                    //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var37 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57787 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeGatherv<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_src,
                                      ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                        ((x10_int)0)), org::scalegraph::util::Team2::template nullChunk<x10_byte >(),
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >());
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc830) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc830);
                                    {
                                        
                                        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc831) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57788 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc831);
                                {
                                    
                                    //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57787 = formal57788;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57787)))
                        {
                            
                            //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57787))
                            {
                                
                                //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57787));
                            }
                            
                        }
                        
                        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var37);
                        }
                        
                        //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57787)))
                        {
                            
                            //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57787)))
                            {
                                
                                //#line 295 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57787));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 296 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
                
                //#line 297 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            }
            
        } else {
            {
                
                //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var38 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57790 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeGather<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, root, src, dst, ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc832) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc832);
                                {
                                    
                                    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc833) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57791 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc833);
                            {
                                
                                //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57790 = formal57791;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57790)))
                    {
                        
                        //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57790))
                        {
                            
                            //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57790));
                        }
                        
                    }
                    
                    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var38);
                    }
                    
                    //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57790)))
                    {
                        
                        //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57790)))
                        {
                            
                            //#line 301 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57790));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_gather_823
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_gatherv_834
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_gatherv_834
template<class TPMGL(T)> void org::scalegraph::util::Team2::gatherv(
  x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
  org::scalegraph::util::MemoryChunk<x10_int> dst_counts) {
    
    //#line 312 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    {
        
        //#line 315 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 316 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(role, root))) {
                
                //#line 317 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int places = (*this)->org::scalegraph::util::Team2::size();
                
                //#line 318 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
                  org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                    src, ((x10_int)0), ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
                
                //#line 319 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__7<TPMGL(T)>)))org_scalegraph_util_Team2__closure__7<TPMGL(T)>(ser_src))), (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 320 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var39 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57793 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeGather<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_counts,
                                      deser_counts, ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc835) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc835);
                                    {
                                        
                                        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc836) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57794 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc836);
                                {
                                    
                                    //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57793 = formal57794;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57793)))
                        {
                            
                            //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57793))
                            {
                                
                                //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57793));
                            }
                            
                        }
                        
                        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var39);
                        }
                        
                        //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57793)))
                        {
                            
                            //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57793)))
                            {
                                
                                //#line 321 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57793));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 322 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_offs =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((places) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 323 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                  ((x10_int)0), ((x10_int)0));
                
                //#line 324 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int i57457min57625 = ((x10_int)0);
                
                //#line 324 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int i57457max57626 = ((x10_int) ((places) - (((x10_int)1))));
                
                //#line 324 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
                {
                    x10_int i57627;
                    for (
                         //#line 324 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                         i57627 = i57457min57625; ((i57627) <= (i57457max57626));
                         
                         //#line 324 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                         i57627 = ((x10_int) ((i57627) + (((x10_int)1)))))
                    {
                        
                        //#line 324 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10_int i57628 = i57627;
                        
                        //#line 324 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                          ((x10_int) ((i57628) + (((x10_int)1)))),
                          ((x10_int) ((deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                         i57628)) + (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                       i57628)))));
                    }
                }
                
                //#line 325 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
                  org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      places))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var40 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57796 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeGatherv<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_src,
                                      ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                        ((x10_int)0)), deser_dst,
                                      deser_offs, deser_counts);
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc837) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc837);
                                    {
                                        
                                        //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc838) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57797 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc838);
                                {
                                    
                                    //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57796 = formal57797;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57796)))
                        {
                            
                            //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57796))
                            {
                                
                                //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57796));
                            }
                            
                        }
                        
                        //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var40);
                        }
                        
                        //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57796)))
                        {
                            
                            //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57796)))
                            {
                                
                                //#line 326 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57796));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 327 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
                  dst, dst_offs, dst_counts, deser_dst, deser_offs,
                  deser_counts);
                
                //#line 328 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
                
                //#line 329 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 330 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 331 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 332 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            } else {
                
                //#line 335 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
                  org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                    src, ((x10_int)0), ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
                
                //#line 336 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__8<TPMGL(T)>)))org_scalegraph_util_Team2__closure__8<TPMGL(T)>(ser_src))), (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var41 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57799 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeGather<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_counts,
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc839) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc839);
                                    {
                                        
                                        //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc840) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57800 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc840);
                                {
                                    
                                    //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57799 = formal57800;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57799)))
                        {
                            
                            //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57799))
                            {
                                
                                //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57799));
                            }
                            
                        }
                        
                        //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var41);
                        }
                        
                        //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57799)))
                        {
                            
                            //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57799)))
                            {
                                
                                //#line 337 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57799));
                            }
                            
                        }
                        
                    }
                }
                {
                    
                    //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var42 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57802 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeGatherv<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_src,
                                      ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                        ((x10_int)0)), org::scalegraph::util::Team2::template nullChunk<x10_byte >(),
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      org::scalegraph::util::Team2::template nullChunk<x10_int >());
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc841) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc841);
                                    {
                                        
                                        //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc842) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57803 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc842);
                                {
                                    
                                    //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57802 = formal57803;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57802)))
                        {
                            
                            //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57802))
                            {
                                
                                //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57802));
                            }
                            
                        }
                        
                        //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var42);
                        }
                        
                        //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57802)))
                        {
                            
                            //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57802)))
                            {
                                
                                //#line 338 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57802));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 339 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
                
                //#line 340 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            }
            
        } else {
            {
                
                //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var43 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57805 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeGather<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, root, src, dst, ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc843) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc843);
                                {
                                    
                                    //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc844) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57806 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc844);
                            {
                                
                                //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57805 = formal57806;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57805)))
                    {
                        
                        //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57805))
                        {
                            
                            //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57805));
                        }
                        
                    }
                    
                    //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var43);
                    }
                    
                    //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57805)))
                    {
                        
                        //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57805)))
                        {
                            
                            //#line 344 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57805));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_gatherv_834
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_gatherv_845
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_gatherv_845
template<class TPMGL(T)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >
  org::scalegraph::util::Team2::gatherv(x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src) {
    
    //#line 355 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 356 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> src_size =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 357 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    src_size->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)0), ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
    
    //#line 359 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(root, role))) {
        
        //#line 360 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> dst_counts =
          org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((*this)->org::scalegraph::util::Team2::size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 361 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
        (*this)->template gather<x10_int >(root, src_size,
                                           dst_counts);
        
        //#line 362 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10_int dst_size = ((x10_int)0);
        
        //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10::lang::LongRange i57473domain57629 = dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::range();
        
        //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10_long i57473min57630 = i57473domain57629->FMGL(min);
        
        //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        x10_long i57473max57631 = i57473domain57629->FMGL(max);
        
        //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
        {
            x10_long i57632;
            for (
                 //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                 i57632 = i57473min57630; ((i57632) <= (i57473max57631));
                 
                 //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                 i57632 = ((x10_long) ((i57632) + (((x10_long)1ll)))))
            {
                
                //#line 363 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_long i57633 = i57632;
                
                //#line 364 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                dst_size = ((x10_int) ((dst_size) + (dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                       i57633))));
            }
        }
        
        //#line 366 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> dst =
          org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (dst_size)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 367 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<x10_int> dst_offs =
          org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::size()) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
        
        //#line 368 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::Team2::template countOffsets<x10_int >(
          dst_counts, dst_offs, ((x10_int)0));
        
        //#line 369 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
        (*this)->template gatherv<TPMGL(T) >(root, src, dst,
                                             dst_offs, dst_counts);
        
        //#line 370 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
        return org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >::_make(dst,
                                                                                                                                                       dst_counts);
        
    }
    
    //#line 373 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> nullInt =
      org::scalegraph::util::MemoryChunk<void>::template getNull<x10_int >();
    
    //#line 374 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> nullT = org::scalegraph::util::MemoryChunk<void>::template getNull<TPMGL(T) >();
    
    //#line 375 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template gather<x10_int >(root, src_size, nullInt);
    
    //#line 376 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template gatherv<TPMGL(T) >(root, src, nullT,
                                         nullInt, nullInt);
    
    //#line 377 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >::_make(nullT,
                                                                                                                                                   nullInt);
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_gatherv_845
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_bcast_846
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_bcast_846
template<class TPMGL(T)> void org::scalegraph::util::Team2::bcast(
  x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst) {
    
    //#line 381 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 382 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, root)) && (!x10aux::struct_equals(src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                                                       dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 383 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("src.size() != dst.size()"))));
    }
    {
        
        //#line 386 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 387 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
            if ((x10aux::struct_equals(role, root))) {
                
                //#line 388 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int places = (*this)->org::scalegraph::util::Team2::size();
                
                //#line 389 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int count = ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()));
                
                //#line 390 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
                  org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                    src, ((x10_int)0), count);
                
                //#line 391 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__9<TPMGL(T)>)))org_scalegraph_util_Team2__closure__9<TPMGL(T)>(ser_src))), (x10_byte*)(void*)__FILE__, __LINE__);
                
                //#line 392 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var44 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57808 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeBcast<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_counts,
                                      deser_counts, ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc847) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc847);
                                    {
                                        
                                        //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc848) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57809 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc848);
                                {
                                    
                                    //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57808 = formal57809;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57808)))
                        {
                            
                            //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57808))
                            {
                                
                                //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57808));
                            }
                            
                        }
                        
                        //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var44);
                        }
                        
                        //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57808)))
                        {
                            
                            //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57808)))
                            {
                                
                                //#line 393 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57808));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 394 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
                  org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      ((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var45 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57811 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeBcast<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, ser_src,
                                      deser_dst, deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   ((x10_int)0)));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc849) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc849);
                                    {
                                        
                                        //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc850) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57812 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc850);
                                {
                                    
                                    //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57811 = formal57812;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57811)))
                        {
                            
                            //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57811))
                            {
                                
                                //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57811));
                            }
                            
                        }
                        
                        //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var45);
                        }
                        
                        //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57811)))
                        {
                            
                            //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57811)))
                            {
                                
                                //#line 395 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57811));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 396 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
                  dst, ((x10_int)0), count, deser_dst, ((x10_int)0),
                  deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                    ((x10_int)0)));
                
                //#line 397 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
                
                //#line 398 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 399 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 400 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            } else {
                
                //#line 403 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10_int count = ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()));
                
                //#line 404 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
                  org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var46 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57814 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeBcast<x10_int >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, org::scalegraph::util::Team2::template nullChunk<x10_int >(),
                                      deser_counts, ((x10_int)1));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc851) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc851);
                                    {
                                        
                                        //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__0__);
                                        
                                        //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc852) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57815 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc852);
                                {
                                    
                                    //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57814 = formal57815;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57814)))
                        {
                            
                            //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57814))
                            {
                                
                                //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57814));
                            }
                            
                        }
                        
                        //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var46);
                        }
                        
                        //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57814)))
                        {
                            
                            //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57814)))
                            {
                                
                                //#line 405 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57814));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 406 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
                  org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                      ((x10_int)0)))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
                {
                    
                    //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::ensureNotInAtomic();
                    
                    //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::FinishState* x10____var47 =
                      x10::lang::Runtime::startFinish();
                    {
                        
                        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                        x10::lang::CheckedThrowable* throwable57817 =
                          x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                        
                        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            
                            //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                            try {
                                {
                                    
                                    //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    org::scalegraph::util::Team2::template nativeBcast<x10_byte >(
                                      x10aux::nullCheck((*this)->
                                                          FMGL(base))->id(),
                                      role, root, org::scalegraph::util::Team2::template nullChunk<x10_byte >(),
                                      deser_dst, deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   ((x10_int)0)));
                                }
                            }
                            catch (x10::lang::CheckedThrowable* __exc853) {
                                if (true) {
                                    x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                      static_cast<x10::lang::CheckedThrowable*>(__exc853);
                                    {
                                        
                                        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                        x10::lang::Runtime::pushException(
                                          __lowerer__var__1__);
                                        
                                        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                        x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                    }
                                } else
                                throw;
                            }
                            
                            //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::compiler::Finalization::plausibleThrow();
                        }
                        catch (x10::lang::CheckedThrowable* __exc854) {
                            if (true) {
                                x10::lang::CheckedThrowable* formal57818 =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc854);
                                {
                                    
                                    //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                    throwable57817 = formal57818;
                                }
                            } else
                            throw;
                        }
                        
                        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57817)))
                        {
                            
                            //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (x10aux::instanceof<x10::compiler::Abort*>(throwable57817))
                            {
                                
                                //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57817));
                            }
                            
                        }
                        
                        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (true) {
                            
                            //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            x10::lang::Runtime::stopFinish(
                              x10____var47);
                        }
                        
                        //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals(X10_NULL,
                                                    throwable57817)))
                        {
                            
                            //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                            if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57817)))
                            {
                                
                                //#line 407 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(throwable57817));
                            }
                            
                        }
                        
                    }
                }
                
                //#line 408 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
                  dst, ((x10_int)0), count, deser_dst, ((x10_int)0),
                  deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                    ((x10_int)0)));
                
                //#line 409 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
                
                //#line 410 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            }
            
        } else {
            {
                
                //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var48 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57820 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeBcast<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, root, src, dst, ((x10_int) (dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc855) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc855);
                                {
                                    
                                    //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc856) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57821 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc856);
                            {
                                
                                //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57820 = formal57821;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57820)))
                    {
                        
                        //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57820))
                        {
                            
                            //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57820));
                        }
                        
                    }
                    
                    //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var48);
                    }
                    
                    //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57820)))
                    {
                        
                        //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57820)))
                        {
                            
                            //#line 414 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57820));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_bcast_846
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_allgather_857
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_allgather_857
template<class TPMGL(T)> void org::scalegraph::util::Team2::allgather(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> src, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst) {
    
    //#line 425 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 426 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(((x10_long) ((src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) * (((x10_long) (x10aux::nullCheck((*this)->
                                                                                                                                             FMGL(base))->size()))))),
                                dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 427 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("src.size() != dst.size()"))));
    }
    {
        
        //#line 430 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 431 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int places = (*this)->org::scalegraph::util::Team2::size();
            
            //#line 432 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int count = ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()));
            
            //#line 433 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
              org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                src, ((x10_int)0), count);
            
            //#line 434 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__10<TPMGL(T)>)))org_scalegraph_util_Team2__closure__10<TPMGL(T)>(ser_src))), (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 435 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var49 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57823 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAllgather<x10_int >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, ser_counts, deser_counts,
                                  ((x10_int)1));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc858) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc858);
                                {
                                    
                                    //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc859) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57824 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc859);
                            {
                                
                                //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57823 = formal57824;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57823)))
                    {
                        
                        //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57823))
                        {
                            
                            //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57823));
                        }
                        
                    }
                    
                    //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var49);
                    }
                    
                    //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57823)))
                    {
                        
                        //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57823)))
                        {
                            
                            //#line 436 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57823));
                        }
                        
                    }
                    
                }
            }
            
            //#line 437 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> deser_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((places) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 438 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_int)0), ((x10_int)0));
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int i57490min57634 = ((x10_int)0);
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int i57490max57635 = ((x10_int) ((places) - (((x10_int)1))));
            
            //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
            {
                x10_int i57636;
                for (
                     //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                     i57636 = i57490min57634; ((i57636) <= (i57490max57635));
                     
                     //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                     i57636 = ((x10_int) ((i57636) + (((x10_int)1)))))
                {
                    
                    //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10_int i57637 = i57636;
                    
                    //#line 439 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      ((x10_int) ((i57637) + (((x10_int)1)))),
                      ((x10_int) ((deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                     i57637)) + (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   i57637)))));
                }
            }
            
            //#line 440 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
              org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                  places))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var50 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57826 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAllgatherv<x10_byte >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, ser_src, ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   ((x10_int)0)),
                                  deser_dst, deser_offs, deser_counts);
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc860) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc860);
                                {
                                    
                                    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc861) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57827 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc861);
                            {
                                
                                //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57826 = formal57827;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57826)))
                    {
                        
                        //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57826))
                        {
                            
                            //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57826));
                        }
                        
                    }
                    
                    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var50);
                    }
                    
                    //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57826)))
                    {
                        
                        //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57826)))
                        {
                            
                            //#line 441 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57826));
                        }
                        
                    }
                    
                }
            }
            
            //#line 442 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> dst_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__11<TPMGL(T)>)))org_scalegraph_util_Team2__closure__11<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 443 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> dst_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__12<TPMGL(T)>)))org_scalegraph_util_Team2__closure__12<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 444 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
              dst, dst_offs, dst_counts, deser_dst, deser_offs,
              deser_counts);
            
            //#line 445 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            
            //#line 446 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 447 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 448 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 449 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            
            //#line 450 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            dst_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 451 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
        } else {
            {
                
                //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var51 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57829 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAllgather<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, src, dst, ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc862) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc862);
                                {
                                    
                                    //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc863) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57830 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc863);
                            {
                                
                                //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57829 = formal57830;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57829)))
                    {
                        
                        //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57829))
                        {
                            
                            //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57829));
                        }
                        
                    }
                    
                    //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var51);
                    }
                    
                    //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57829)))
                    {
                        
                        //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57829)))
                        {
                            
                            //#line 454 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57829));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_allgather_857
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_allgatherv_864
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_allgatherv_864
template<class TPMGL(T)> void org::scalegraph::util::Team2::allgatherv(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> src, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
  org::scalegraph::util::MemoryChunk<x10_int> dst_offs, org::scalegraph::util::MemoryChunk<x10_int> dst_counts) {
    
    //#line 465 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    {
        
        //#line 468 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 469 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int places = (*this)->org::scalegraph::util::Team2::size();
            
            //#line 470 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int src_count = ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()));
            
            //#line 471 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
              org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                src, ((x10_int)0), src_count);
            
            //#line 472 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__13<TPMGL(T)>)))org_scalegraph_util_Team2__closure__13<TPMGL(T)>(ser_src))), (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 473 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var52 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57832 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAllgather<x10_int >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, ser_counts, deser_counts,
                                  ((x10_int)1));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc865) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc865);
                                {
                                    
                                    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc866) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57833 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc866);
                            {
                                
                                //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57832 = formal57833;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57832)))
                    {
                        
                        //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57832))
                        {
                            
                            //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57832));
                        }
                        
                    }
                    
                    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var52);
                    }
                    
                    //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57832)))
                    {
                        
                        //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57832)))
                        {
                            
                            //#line 474 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57832));
                        }
                        
                    }
                    
                }
            }
            
            //#line 475 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> deser_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((places) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 476 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_int)0), ((x10_int)0));
            
            //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int i57506min57638 = ((x10_int)0);
            
            //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int i57506max57639 = ((x10_int) ((places) - (((x10_int)1))));
            
            //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
            {
                x10_int i57640;
                for (
                     //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                     i57640 = i57506min57638; ((i57640) <= (i57506max57639));
                     
                     //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                     i57640 = ((x10_int) ((i57640) + (((x10_int)1)))))
                {
                    
                    //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10_int i57641 = i57640;
                    
                    //#line 477 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      ((x10_int) ((i57641) + (((x10_int)1)))),
                      ((x10_int) ((deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                     i57641)) + (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   i57641)))));
                }
            }
            
            //#line 478 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
              org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                  places))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var53 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57835 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAllgatherv<x10_byte >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, ser_src, ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   ((x10_int)0)),
                                  deser_dst, deser_offs, deser_counts);
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc867) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc867);
                                {
                                    
                                    //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc868) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57836 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc868);
                            {
                                
                                //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57835 = formal57836;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57835)))
                    {
                        
                        //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57835))
                        {
                            
                            //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57835));
                        }
                        
                    }
                    
                    //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var53);
                    }
                    
                    //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57835)))
                    {
                        
                        //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57835)))
                        {
                            
                            //#line 479 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57835));
                        }
                        
                    }
                    
                }
            }
            
            //#line 480 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
              dst, dst_offs, dst_counts, deser_dst, deser_offs,
              deser_counts);
            
            //#line 481 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            
            //#line 482 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 483 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 484 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 485 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
        } else {
            {
                
                //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var54 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57838 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAllgatherv<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, src, ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())),
                                  dst, dst_offs, dst_counts);
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc869) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc869);
                                {
                                    
                                    //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc870) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57839 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc870);
                            {
                                
                                //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57838 = formal57839;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57838)))
                    {
                        
                        //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57838))
                        {
                            
                            //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57838));
                        }
                        
                    }
                    
                    //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var54);
                    }
                    
                    //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57838)))
                    {
                        
                        //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57838)))
                        {
                            
                            //#line 488 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57838));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_allgatherv_864
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_allgatherv_871
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_allgatherv_871
template<class TPMGL(T)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >
  org::scalegraph::util::Team2::allgatherv(org::scalegraph::util::MemoryChunk<TPMGL(T)> src) {
    
    //#line 499 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 500 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> src_size =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 501 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> dst_counts =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((*this)->org::scalegraph::util::Team2::size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 502 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    src_size->org::scalegraph::util::MemoryChunk<x10_int>::__set(
      ((x10_int)0), ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())));
    
    //#line 503 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template allgather<x10_int >(src_size, dst_counts);
    
    //#line 504 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int dst_size = ((x10_int)0);
    
    //#line 505 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i57522domain57642 = dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::range();
    
    //#line 505 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_long i57522min57643 = i57522domain57642->FMGL(min);
    
    //#line 505 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_long i57522max57644 = i57522domain57642->FMGL(max);
    
    //#line 505 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
    {
        x10_long i57645;
        for (
             //#line 505 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
             i57645 = i57522min57643; ((i57645) <= (i57522max57644));
             
             //#line 505 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
             i57645 = ((x10_long) ((i57645) + (((x10_long)1ll)))))
        {
            
            //#line 505 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_long i57646 = i57645;
            
            //#line 506 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
            dst_size = ((x10_int) ((dst_size) + (dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   i57646))));
        }
    }
    
    //#line 508 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (dst_size)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 509 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> dst_offs =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::size()) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 510 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Team2::template countOffsets<x10_int >(
      dst_counts, dst_offs, ((x10_int)0));
    
    //#line 511 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template allgatherv<TPMGL(T) >(src, dst, dst_offs,
                                            dst_counts);
    
    //#line 512 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >::_make(dst,
                                                                                                                                                   dst_counts);
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_allgatherv_871
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoall_872
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoall_872
template<class TPMGL(T)> void org::scalegraph::util::Team2::alltoall(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> src, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst) {
    
    //#line 516 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 517 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 518 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("src.size() != dst.size()"))));
    }
    {
        
        //#line 521 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 522 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int places = (*this)->org::scalegraph::util::Team2::size();
            
            //#line 523 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int count = ((x10_int) (((x10_long) ((src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) / x10aux::zeroCheck(((x10_long) (places)))))));
            
            //#line 524 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> src_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__14<TPMGL(T)>)))org_scalegraph_util_Team2__closure__14<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 525 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> src_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__15<TPMGL(T)>)))org_scalegraph_util_Team2__closure__15<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 526 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> ser_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 527 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 528 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
              org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                src, src_offs, src_counts, ser_offs, ser_counts);
            
            //#line 529 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var55 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57841 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAlltoall<x10_int >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, ser_counts, deser_counts,
                                  ((x10_int)1));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc873) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc873);
                                {
                                    
                                    //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc874) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57842 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc874);
                            {
                                
                                //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57841 = formal57842;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57841)))
                    {
                        
                        //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57841))
                        {
                            
                            //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57841));
                        }
                        
                    }
                    
                    //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var55);
                    }
                    
                    //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57841)))
                    {
                        
                        //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57841)))
                        {
                            
                            //#line 530 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57841));
                        }
                        
                    }
                    
                }
            }
            
            //#line 531 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> deser_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((places) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 532 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_int)0), ((x10_int)0));
            
            //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int i57539min57647 = ((x10_int)0);
            
            //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int i57539max57648 = ((x10_int) ((places) - (((x10_int)1))));
            
            //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
            {
                x10_int i57649;
                for (
                     //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                     i57649 = i57539min57647; ((i57649) <= (i57539max57648));
                     
                     //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                     i57649 = ((x10_int) ((i57649) + (((x10_int)1)))))
                {
                    
                    //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10_int i57650 = i57649;
                    
                    //#line 533 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      ((x10_int) ((i57650) + (((x10_int)1)))),
                      ((x10_int) ((deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                     i57650)) + (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   i57650)))));
                }
            }
            
            //#line 534 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
              org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                  places))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var56 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57844 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAlltoallv<x10_byte >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, ser_src, ser_offs,
                                  ser_counts, deser_dst, deser_offs,
                                  deser_counts);
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc875) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc875);
                                {
                                    
                                    //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc876) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57845 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc876);
                            {
                                
                                //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57844 = formal57845;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57844)))
                    {
                        
                        //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57844))
                        {
                            
                            //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57844));
                        }
                        
                    }
                    
                    //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var56);
                    }
                    
                    //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57844)))
                    {
                        
                        //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57844)))
                        {
                            
                            //#line 535 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57844));
                        }
                        
                    }
                    
                }
            }
            
            //#line 536 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> dst_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), reinterpret_cast<x10::lang::Fun_0_1<x10_long, x10_int>*>((new (x10aux::alloc<x10::lang::Fun_0_1<x10_long, x10_int> >(sizeof(org_scalegraph_util_Team2__closure__16<TPMGL(T)>)))org_scalegraph_util_Team2__closure__16<TPMGL(T)>(count))), (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 537 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> dst_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((places) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 538 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            dst_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
              ((x10_int)0), ((x10_int)0));
            
            //#line 539 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int i57555min57651 = ((x10_int)0);
            
            //#line 539 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int i57555max57652 = ((x10_int) ((places) - (((x10_int)1))));
            
            //#line 539 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
            {
                x10_int i57653;
                for (
                     //#line 539 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                     i57653 = i57555min57651; ((i57653) <= (i57555max57652));
                     
                     //#line 539 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                     i57653 = ((x10_int) ((i57653) + (((x10_int)1)))))
                {
                    
                    //#line 539 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10_int i57654 = i57653;
                    
                    //#line 539 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    dst_offs->org::scalegraph::util::MemoryChunk<x10_int>::__set(
                      ((x10_int) ((i57654) + (((x10_int)1)))),
                      ((x10_int) ((dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                     i57654)) + (dst_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   i57654)))));
                }
            }
            
            //#line 540 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
              dst, dst_offs, dst_counts, deser_dst, deser_offs,
              deser_counts);
            
            //#line 541 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            src_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 542 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            src_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 543 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 544 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 545 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            
            //#line 546 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 547 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 548 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            
            //#line 549 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 550 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            dst_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
        } else {
            {
                
                //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var57 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57847 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAlltoall<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, src, dst, ((x10_int) (((x10_long) ((src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) / x10aux::zeroCheck(((x10_long) (x10aux::nullCheck((*this)->
                                                                                                                                                                                            FMGL(base))->size()))))))));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc877) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc877);
                                {
                                    
                                    //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc878) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57848 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc878);
                            {
                                
                                //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57847 = formal57848;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57847)))
                    {
                        
                        //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57847))
                        {
                            
                            //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57847));
                        }
                        
                    }
                    
                    //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var57);
                    }
                    
                    //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57847)))
                    {
                        
                        //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57847)))
                        {
                            
                            //#line 553 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57847));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoall_872
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoallv_879
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoallv_879
template<class TPMGL(T)> void org::scalegraph::util::Team2::alltoallv(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> src, org::scalegraph::util::MemoryChunk<x10_int> src_offs,
  org::scalegraph::util::MemoryChunk<x10_int> src_counts,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, org::scalegraph::util::MemoryChunk<x10_int> dst_offs,
  org::scalegraph::util::MemoryChunk<x10_int> dst_counts) {
    
    //#line 564 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    {
        
        //#line 567 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
        if (x10aux::getRTT<TPMGL(T) >()->containsPtrs) {
            
            //#line 568 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_int places = (*this)->org::scalegraph::util::Team2::size();
            
            //#line 569 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> ser_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 570 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> ser_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 571 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> ser_src =
              org::scalegraph::util::Serialization::template serialize<TPMGL(T) >(
                src, src_offs, src_counts, ser_offs, ser_counts);
            
            //#line 572 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> deser_counts =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (places)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var58 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57850 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAlltoall<x10_int >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, ser_counts, deser_counts,
                                  ((x10_int)1));
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc880) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc880);
                                {
                                    
                                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc881) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57851 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc881);
                            {
                                
                                //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57850 = formal57851;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57850)))
                    {
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57850))
                        {
                            
                            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57850));
                        }
                        
                    }
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var58);
                    }
                    
                    //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57850)))
                    {
                        
                        //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57850)))
                        {
                            
                            //#line 573 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57850));
                        }
                        
                    }
                    
                }
            }
            
            //#line 574 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_int> deser_offs =
              org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) (((x10_int) ((places) + (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            
            //#line 575 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Team2::template countOffsets<x10_int >(
              deser_counts, deser_offs, ((x10_int)0));
            
            //#line 576 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<x10_byte> deser_dst =
              org::scalegraph::util::MemoryChunk<x10_byte >::_make(((x10_long) (deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                                                  places))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
            {
                
                //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var59 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57853 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAlltoallv<x10_byte >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, ser_src, ser_offs,
                                  ser_counts, deser_dst, deser_offs,
                                  deser_counts);
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc882) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__1__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc882);
                                {
                                    
                                    //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__1__);
                                    
                                    //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc883) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57854 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc883);
                            {
                                
                                //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57853 = formal57854;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57853)))
                    {
                        
                        //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57853))
                        {
                            
                            //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57853));
                        }
                        
                    }
                    
                    //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var59);
                    }
                    
                    //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57853)))
                    {
                        
                        //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57853)))
                        {
                            
                            //#line 577 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57853));
                        }
                        
                    }
                    
                }
            }
            
            //#line 578 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            org::scalegraph::util::Serialization::template deserialize<TPMGL(T) >(
              dst, dst_offs, dst_counts, deser_dst, deser_offs,
              deser_counts);
            
            //#line 579 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 580 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 581 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            ser_src->org::scalegraph::util::MemoryChunk<x10_byte>::del();
            
            //#line 582 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_counts->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 583 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_offs->org::scalegraph::util::MemoryChunk<x10_int>::del();
            
            //#line 584 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            deser_dst->org::scalegraph::util::MemoryChunk<x10_byte>::del();
        } else {
            {
                
                //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                x10::lang::Runtime::ensureNotInAtomic();
                
                //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::FinishState* x10____var60 = x10::lang::Runtime::startFinish();
                {
                    
                    //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                    x10::lang::CheckedThrowable* throwable57856 =
                      x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                    
                    //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        
                        //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                        try {
                            {
                                
                                //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                org::scalegraph::util::Team2::template nativeAlltoallv<TPMGL(T) >(
                                  x10aux::nullCheck((*this)->
                                                      FMGL(base))->id(),
                                  role, src, src_offs, src_counts,
                                  dst, dst_offs, dst_counts);
                            }
                        }
                        catch (x10::lang::CheckedThrowable* __exc884) {
                            if (true) {
                                x10::lang::CheckedThrowable* __lowerer__var__0__ =
                                  static_cast<x10::lang::CheckedThrowable*>(__exc884);
                                {
                                    
                                    //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                    x10::lang::Runtime::pushException(
                                      __lowerer__var__0__);
                                    
                                    //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                                }
                            } else
                            throw;
                        }
                        
                        //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::compiler::Finalization::plausibleThrow();
                    }
                    catch (x10::lang::CheckedThrowable* __exc885) {
                        if (true) {
                            x10::lang::CheckedThrowable* formal57857 =
                              static_cast<x10::lang::CheckedThrowable*>(__exc885);
                            {
                                
                                //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                                throwable57856 = formal57857;
                            }
                        } else
                        throw;
                    }
                    
                    //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57856)))
                    {
                        
                        //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (x10aux::instanceof<x10::compiler::Abort*>(throwable57856))
                        {
                            
                            //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57856));
                        }
                        
                    }
                    
                    //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                        x10::lang::Runtime::stopFinish(x10____var60);
                    }
                    
                    //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if ((!x10aux::struct_equals(X10_NULL,
                                                throwable57856)))
                    {
                        
                        //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                        if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57856)))
                        {
                            
                            //#line 587 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                            x10aux::throwException(x10aux::nullCheck(throwable57856));
                        }
                        
                    }
                    
                }
            }
        }
        
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoallv_879
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoallv_886
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoallv_886
template<class TPMGL(T)> org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >
  org::scalegraph::util::Team2::alltoallv(org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
                                          org::scalegraph::util::MemoryChunk<x10_int> src_counts) {
    
    //#line 599 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 600 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> src_offs =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((src_counts->org::scalegraph::util::MemoryChunk<x10_int>::size()) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 601 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Team2::template countOffsets<x10_int >(
      src_counts, src_offs, ((x10_int)0));
    
    //#line 602 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> dst_counts =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((*this)->org::scalegraph::util::Team2::size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 603 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template alltoall<x10_int >(src_counts, dst_counts);
    
    //#line 604 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int dst_size = ((x10_int)0);
    
    //#line 605 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i57571domain57655 = dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::range();
    
    //#line 605 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_long i57571min57656 = i57571domain57655->FMGL(min);
    
    //#line 605 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_long i57571max57657 = i57571domain57655->FMGL(max);
    
    //#line 605 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
    {
        x10_long i57658;
        for (
             //#line 605 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
             i57658 = i57571min57656; ((i57658) <= (i57571max57657));
             
             //#line 605 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
             i57658 = ((x10_long) ((i57658) + (((x10_long)1ll)))))
        {
            
            //#line 605 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_long i57659 = i57658;
            
            //#line 606 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
            dst_size = ((x10_int) ((dst_size) + (dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::__apply(
                                                   i57659))));
        }
    }
    
    //#line 608 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (dst_size)), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 609 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<x10_int> dst_offs =
      org::scalegraph::util::MemoryChunk<x10_int >::_make(((x10_long) ((dst_counts->org::scalegraph::util::MemoryChunk<x10_int>::size()) + (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 610 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::Team2::template countOffsets<x10_int >(
      dst_counts, dst_offs, ((x10_int)0));
    
    //#line 611 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template alltoallv<TPMGL(T) >(src, src_offs,
                                           src_counts, dst,
                                           dst_offs, dst_counts);
    
    //#line 612 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return org::scalegraph::util::tuple::Tuple2<org::scalegraph::util::MemoryChunk<TPMGL(T)>, org::scalegraph::util::MemoryChunk<x10_int> >::_make(dst,
                                                                                                                                                   dst_counts);
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_alltoallv_886
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_allreduce_887
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_allreduce_887
template<class TPMGL(T)> void org::scalegraph::util::Team2::allreduce(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> src, org::scalegraph::util::MemoryChunk<TPMGL(T)> dst,
  x10_int op) {
    
    //#line 616 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 617 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 618 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("src.size() != dst.size()"))));
    }
    {
        {
            
            //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var61 = x10::lang::Runtime::startFinish();
            {
                
                //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable57859 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::util::Team2::template nativeAllreduce<TPMGL(T) >(
                              x10aux::nullCheck((*this)->
                                                  FMGL(base))->id(),
                              role, src, dst, ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())),
                              op);
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc888) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc888);
                            {
                                
                                //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc889) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal57860 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc889);
                        {
                            
                            //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable57859 = formal57860;
                        }
                    } else
                    throw;
                }
                
                //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57859)))
                {
                    
                    //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable57859))
                    {
                        
                        //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57859));
                    }
                    
                }
                
                //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var61);
                }
                
                //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57859)))
                {
                    
                    //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57859)))
                    {
                        
                        //#line 621 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57859));
                    }
                    
                }
                
            }
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_allreduce_887
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_allreduce_890
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_allreduce_890
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::Team2::allreduce(
  TPMGL(T) src, x10_int op) {
    
    //#line 631 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> src_ = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 632 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 633 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    src_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      ((x10_int)0), src);
    
    //#line 634 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template allreduce<TPMGL(T) >(src_, dst, op);
    
    //#line 635 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
             ((x10_int)0));
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_allreduce_890
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_reduce_891
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_reduce_891
template<class TPMGL(T)> void org::scalegraph::util::Team2::reduce(
  x10_int root, org::scalegraph::util::MemoryChunk<TPMGL(T)> src,
  org::scalegraph::util::MemoryChunk<TPMGL(T)> dst, x10_int op) {
    
    //#line 639 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_int role = x10aux::nullCheck(x10aux::nullCheck((*this)->
                                                         FMGL(base))->role())->x10::array::Array<x10_int>::__apply(
                     ((x10_int)0));
    
    //#line 640 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(role, root)) && (!x10aux::struct_equals(src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                                                                       dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 641 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("src.size() != dst.size()"))));
    }
    {
        {
            
            //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            x10::lang::Runtime::ensureNotInAtomic();
            
            //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10::lang::FinishState* x10____var62 = x10::lang::Runtime::startFinish();
            {
                
                //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
                x10::lang::CheckedThrowable* throwable57862 =
                  x10aux::class_cast_unchecked<x10::lang::CheckedThrowable*>(X10_NULL);
                
                //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                try {
                    
                    //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Try_c
                    try {
                        {
                            
                            //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                            org::scalegraph::util::Team2::template nativeReduce<TPMGL(T) >(
                              x10aux::nullCheck((*this)->
                                                  FMGL(base))->id(),
                              role, root, src, dst, ((x10_int) (src->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())),
                              op);
                        }
                    }
                    catch (x10::lang::CheckedThrowable* __exc892) {
                        if (true) {
                            x10::lang::CheckedThrowable* __lowerer__var__0__ =
                              static_cast<x10::lang::CheckedThrowable*>(__exc892);
                            {
                                
                                //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                                x10::lang::Runtime::pushException(
                                  __lowerer__var__0__);
                                
                                //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::Exception::_make()));
                            }
                        } else
                        throw;
                    }
                    
                    //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::compiler::Finalization::plausibleThrow();
                }
                catch (x10::lang::CheckedThrowable* __exc893) {
                    if (true) {
                        x10::lang::CheckedThrowable* formal57863 =
                          static_cast<x10::lang::CheckedThrowable*>(__exc893);
                        {
                            
                            //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
                            throwable57862 = formal57863;
                        }
                    } else
                    throw;
                }
                
                //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57862)))
                {
                    
                    //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (x10aux::instanceof<x10::compiler::Abort*>(throwable57862))
                    {
                        
                        //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57862));
                    }
                    
                }
                
                //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                if (true) {
                    
                    //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
                    x10::lang::Runtime::stopFinish(x10____var62);
                }
                
                //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                if ((!x10aux::struct_equals(X10_NULL, throwable57862)))
                {
                    
                    //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
                    if (!(x10aux::instanceof<x10::compiler::Finalization*>(throwable57862)))
                    {
                        
                        //#line 644 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(throwable57862));
                    }
                    
                }
                
            }
        }
    }
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_reduce_891
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_reduce_894
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_reduce_894
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::Team2::reduce(
  x10_int root, TPMGL(T) src, x10_int op) {
    
    //#line 654 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> src_ = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 655 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> dst = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) (((x10_int)1))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 656 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    src_->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      ((x10_int)0), src);
    
    //#line 657 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    (*this)->template reduce<TPMGL(T) >(root, src_, dst, op);
    
    //#line 658 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return dst->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
             ((x10_int)0));
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_reduce_894
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_countOffsets_896
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_countOffsets_896
template<class TPMGL(T)> void org::scalegraph::util::Team2::countOffsets(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> counts, org::scalegraph::util::MemoryChunk<TPMGL(T)> offsets,
  TPMGL(T) initialValue) {
    
    //#line 670 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(((x10_long) ((counts->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) + (((x10_long) (((x10_int)1)))))),
                                offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 671 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
    }
    
    //#line 673 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
    offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
      ((x10_int)0), initialValue);
    
    //#line 674 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i57588domain57660 = counts->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range();
    
    //#line 674 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_long i57588min57661 = i57588domain57660->FMGL(min);
    
    //#line 674 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_long i57588max57662 = i57588domain57660->FMGL(max);
    
    //#line 674 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
    {
        x10_long i57663;
        for (
             //#line 674 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
             i57663 = i57588min57661; ((i57663) <= (i57588max57662));
             
             //#line 674 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
             i57663 = ((x10_long) ((i57663) + (((x10_long)1ll)))))
        {
            
            //#line 674 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_long i57664 = i57663;
            
            //#line 675 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
              ((x10_long) ((i57664) + (((x10_long) (((x10_int)1)))))),
              x10::lang::Arithmetic<TPMGL(T) >::_m4____plus(offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                              i57664), counts->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                                         i57664)));
        }
    }
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_countOffsets_896
#ifndef ORG_SCALEGRAPH_UTIL_TEAM2_H_getCounts_897
#define ORG_SCALEGRAPH_UTIL_TEAM2_H_getCounts_897
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::Team2::getCounts(org::scalegraph::util::MemoryChunk<TPMGL(T)> offsets) {
    
    //#line 680 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10If_c
    if ((x10aux::struct_equals(offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size(),
                               ((x10_long)0ll)))) {
        
        //#line 681 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make()));
    }
    
    //#line 682 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> counts =
      org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(((x10_long) ((offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size()) - (((x10_long) (((x10_int)1)))))), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 683 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10::lang::LongRange i57605domain57665 = offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::range();
    
    //#line 683 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_long i57605min57666 = i57605domain57665->FMGL(min);
    
    //#line 683 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
    x10_long i57605max57667 = i57605domain57665->FMGL(max);
    
    //#line 683 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": polyglot.ast.For_c
    {
        x10_long i57668;
        for (
             //#line 683 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
             i57668 = i57605min57666; ((i57668) <= (i57605max57667));
             
             //#line 683 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10LocalAssign_c
             i57668 = ((x10_long) ((i57668) + (((x10_long)1ll)))))
        {
            
            //#line 683 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10LocalDecl_c
            x10_long i57669 = i57668;
            
            //#line 684 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": Eval of x10.ast.X10Call_c
            counts->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__set(
              i57669, x10::lang::Arithmetic<TPMGL(T) >::_m6____minus(offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                                       ((x10_long) ((i57669) + (((x10_long) (((x10_int)1))))))), offsets->org::scalegraph::util::MemoryChunk<TPMGL(T)>::__apply(
                                                                                                                                   i57669)));
        }
    }
    
    //#line 686 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/Team2.x10": x10.ast.X10Return_c
    return counts;
    
}
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_getCounts_897
#endif // ORG_SCALEGRAPH_UTIL_TEAM2_H_GENERICS
#endif // __ORG_SCALEGRAPH_UTIL_TEAM2_H_NODEPS

#ifndef __ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H
#define __ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H

#include <x10rt.h>


#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#undef ORG_SCALEGRAPH_UTIL_MEMORYCHUNK_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace lang { 
class ArrayIndexOutOfBoundsException;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Ifndef;
} } 
namespace x10 { namespace compiler { 
class Inline;
} } 
namespace x10 { namespace lang { 
class Math;
} } 
namespace x10 { namespace lang { 
class Zero;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(T)> class GrowableMemory;
template <> class GrowableMemory<void>;
template<class TPMGL(T)> class GrowableMemory : public x10::lang::X10Class
  {
    public:
    RTT_H_DECLS_CLASS
    
    org::scalegraph::util::MemoryChunk<TPMGL(T)> FMGL(mc);
    
    x10_long FMGL(size);
    
    void _constructor();
    
    static org::scalegraph::util::GrowableMemory<TPMGL(T)>* _make();
    
    void _constructor(x10_long cap);
    
    static org::scalegraph::util::GrowableMemory<TPMGL(T)>* _make(x10_long cap);
    
    virtual org::scalegraph::util::MemoryChunk<TPMGL(T)> raw();
    virtual x10_long size();
    virtual x10_long capacity();
    virtual org::scalegraph::util::MemoryChunk<TPMGL(T)> backingStore();
    virtual x10::lang::LongRange range();
    virtual void add(TPMGL(T) v);
    virtual void add(org::scalegraph::util::MemoryChunk<TPMGL(T)> items);
    virtual void clear();
    virtual void setSize(x10_long newSize);
    virtual void setMemory(org::scalegraph::util::MemoryChunk<TPMGL(T)> mc);
    virtual void setMemory(org::scalegraph::util::MemoryChunk<TPMGL(T)> mc,
                           x10_long size);
    virtual TPMGL(T) __apply(x10_long index);
    virtual void __set(x10_long index, TPMGL(T) value);
    virtual void insert(x10_long p, org::scalegraph::util::MemoryChunk<TPMGL(T)> items);
    virtual void grow(x10_long reqCapacity);
    virtual void shrink(x10_long newCapacity);
    virtual void del();
    virtual org::scalegraph::util::GrowableMemory<TPMGL(T)>* org__scalegraph__util__GrowableMemory____this__org__scalegraph__util__GrowableMemory(
      );
    virtual void __fieldInitializers47212();
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::util::GrowableMemory<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::GrowableMemory<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType** parents = NULL; 
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.GrowableMemory";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::class_kind, 0, parents, 1, params, variances);
}

template <> class GrowableMemory<void> : public x10::lang::X10Class
{
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_NODEPS
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/compiler/Inline.h>
#include <x10/lang/Math.h>
#include <x10/lang/Zero.h>
#ifndef ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_IMPLEMENTATION
#include <org/scalegraph/util/GrowableMemory.h>


//#line 22 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10FieldDecl_c

//#line 23 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10FieldDecl_c

//#line 27 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 28 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
      ((x10_long)0ll));
    
}
template<class TPMGL(T)> org::scalegraph::util::GrowableMemory<TPMGL(T)>* org::scalegraph::util::GrowableMemory<TPMGL(T)>::_make(
                           ) {
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
                           x10_long cap) {
    
    //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Empty_c
    ;
    
    //#line 34 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.AssignPropertyCall_c
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::__fieldInitializers47212();
    
    //#line 35 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(cap, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 36 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long)0ll);
}
template<class TPMGL(T)> org::scalegraph::util::GrowableMemory<TPMGL(T)>* org::scalegraph::util::GrowableMemory<TPMGL(T)>::_make(
                           x10_long cap) {
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>();
    this_->_constructor(cap);
    return this_;
}



//#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw() {
    
    //#line 41 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this->FMGL(mc)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
             ((x10_long) (((x10_int)0))), this->FMGL(size));
    
}

//#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::util::GrowableMemory<TPMGL(T)>::size(
  ) {
    
    //#line 45 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this->FMGL(size);
    
}

//#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::util::GrowableMemory<TPMGL(T)>::capacity(
  ) {
    
    //#line 49 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this->FMGL(mc)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size();
    
}

//#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::GrowableMemory<TPMGL(T)>::backingStore(
  ) {
    
    //#line 53 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this->FMGL(mc);
    
}

//#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::LongRange org::scalegraph::util::GrowableMemory<TPMGL(T)>::range(
  ) {
    
    //#line 57 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this->
                                                                        FMGL(size)) - (((x10_long)1ll)))));
    
}

//#line 61 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
  TPMGL(T) v) {
    
    //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((((x10_long) ((this->FMGL(size)) + (((x10_long) (((x10_int)1))))))) > (this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::capacity())))
    {
        
        //#line 62 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::grow(
          ((x10_long) ((this->FMGL(size)) + (((x10_long) (((x10_int)1)))))));
    }
    
    //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    (this->FMGL(mc)->FMGL(data)).set(((x10_long) (((__extension__ ({
        
        //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(T)>* x47436 =
          this;
        
        //#line 63 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Empty_c
        ;
        x10aux::nullCheck(x47436)->FMGL(size) = ((x10_long) ((x10aux::nullCheck(x47436)->
                                                                FMGL(size)) + (((x10_long)1ll))));
    }))
    ) - (((x10_long)1ll)))), v);
}

//#line 68 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> items) {
    
    //#line 69 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::insert(
      this->FMGL(size), items);
}

//#line 74 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::clear(
  ) {
    
    //#line 75 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long) (((x10_int)0)));
}

//#line 81 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::setSize(
  x10_long newSize) {
    
    //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((newSize) > (this->FMGL(mc)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size())))
    {
        
        //#line 82 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::grow(
          newSize);
    }
    
    //#line 83 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = newSize;
}

//#line 89 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::setMemory(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> mc) {
    
    //#line 90 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::setMemory(
      mc, mc->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size());
}

//#line 97 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::setMemory(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> mc, x10_long size) {
    
    //#line 98 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = mc;
    
    //#line 99 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = size;
}

//#line 105 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::GrowableMemory<TPMGL(T)>::__apply(
  x10_long index) {
    {
        
        //#line 107 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= (this->
                                                                        FMGL(size))))
        {
            
            //#line 108 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 110 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return (this->FMGL(mc)->FMGL(data))[index];
    
}

//#line 116 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::__set(
  x10_long index, TPMGL(T) value) {
    {
        
        //#line 118 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= (this->
                                                                        FMGL(size))))
        {
            
            //#line 119 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 121 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    (this->FMGL(mc)->FMGL(data)).set(index, value);
}

//#line 128 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::insert(
  x10_long p, org::scalegraph::util::MemoryChunk<TPMGL(T)> items) {
    
    //#line 129 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long addLen = items->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size();
    
    //#line 130 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long newLen = ((x10_long) ((this->FMGL(size)) + (addLen)));
    
    //#line 131 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long movLen = ((x10_long) ((this->FMGL(size)) - (p)));
    
    //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((newLen) > (this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::capacity())))
    {
        
        //#line 132 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::grow(
          newLen);
    }
    
    //#line 133 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((movLen) > (((x10_long) (((x10_int)0)))))) {
        
        //#line 134 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
          this->FMGL(mc), p, this->FMGL(mc), ((x10_long) ((p) + (addLen))),
          movLen);
    }
    
    //#line 136 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
      items, ((x10_long)0ll), this->FMGL(mc), p, items->org::scalegraph::util::MemoryChunk<TPMGL(T)>::size());
    
    //#line 137 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = newLen;
}

//#line 143 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::grow(
  x10_long reqCapacity) {
    
    //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((reqCapacity) < (this->FMGL(size)))) {
        
        //#line 144 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 145 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long newCapacity = this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::capacity();
    
    //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((newCapacity) < (((x10_long) (((x10_int)8)))))) {
        
        //#line 146 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
        newCapacity = ((x10_long) (((x10_int)8)));
    }
    
    //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10While_c
    while (((newCapacity) < (reqCapacity))) {
        
        //#line 147 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
        newCapacity = ((x10_long) ((newCapacity) * (((x10_long) (((x10_int)2))))));
    }
    
    //#line 149 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> tmp;
    
    //#line 150 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
    tmp = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(newCapacity, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 151 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
      this->FMGL(mc), ((x10_long)0ll), tmp, ((x10_long)0ll),
      this->FMGL(size));
    
    //#line 152 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = tmp;
}

//#line 158 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::shrink(
  x10_long newCapacity) {
    
    //#line 159 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
    newCapacity = x10::lang::Math::max(newCapacity, this->
                                                      FMGL(size));
    
    //#line 160 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> tmp = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(newCapacity, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 161 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
      this->FMGL(mc), ((x10_long)0ll), tmp, ((x10_long)0ll),
      this->FMGL(size));
    
    //#line 162 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = tmp;
}

//#line 165 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::del(
  ) {
    
    //#line 166 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long) (((x10_int)0)));
    
    //#line 167 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
}

//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::GrowableMemory<TPMGL(T)>*
  org::scalegraph::util::GrowableMemory<TPMGL(T)>::org__scalegraph__util__GrowableMemory____this__org__scalegraph__util__GrowableMemory(
  ) {
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::__fieldInitializers47212(
  ) {
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
    
    //#line 21 "/home/mukul/ScaleGraph/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long)0ll);
}
template<class TPMGL(T)> const x10aux::serialization_id_t org::scalegraph::util::GrowableMemory<TPMGL(T)>::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::util::GrowableMemory<TPMGL(T)>::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(mc));
    buf.write(this->FMGL(size));
    
}

template<class TPMGL(T)> x10::lang::Reference* org::scalegraph::util::GrowableMemory<TPMGL(T)>::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(mc) = buf.read<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
    FMGL(size) = buf.read<x10_long>();
}

#endif // ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_NODEPS

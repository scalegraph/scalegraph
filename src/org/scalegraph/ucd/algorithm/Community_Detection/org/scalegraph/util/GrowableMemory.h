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
class Zero;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace lang { 
class LongRange;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
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
    virtual void __fieldInitializers82419();
    
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
#include <x10/lang/Zero.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/lang/LongRange.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/compiler/Inline.h>
#ifndef ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_GROWABLEMEMORY_H_IMPLEMENTATION
#include <org/scalegraph/util/GrowableMemory.h>


//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10FieldDecl_c

//#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10FieldDecl_c

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
                           ) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorCall_c
    (this)->::org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
      ((x10_long)0ll));
    
}
template<class TPMGL(T)> org::scalegraph::util::GrowableMemory<TPMGL(T)>* org::scalegraph::util::GrowableMemory<TPMGL(T)>::_make(
                           ) {
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>();
    this_->_constructor();
    return this_;
}



//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::_constructor(
                           x10_long cap) {
    
    //#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.AssignPropertyCall_c
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this121294 =
      this;
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this121294)->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this121294)->FMGL(size) = ((x10_long)0ll);
    
    //#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(cap, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long)0ll);
}
template<class TPMGL(T)> org::scalegraph::util::GrowableMemory<TPMGL(T)>* org::scalegraph::util::GrowableMemory<TPMGL(T)>::_make(
                           x10_long cap) {
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this_ = new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(T)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(T)>))) org::scalegraph::util::GrowableMemory<TPMGL(T)>();
    this_->_constructor(cap);
    return this_;
}



//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::GrowableMemory<TPMGL(T)>::raw() {
    
    //#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this->FMGL(mc)->org::scalegraph::util::MemoryChunk<TPMGL(T)>::subpart(
             ((x10_long) (((x10_int)0))), this->FMGL(size));
    
}

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::util::GrowableMemory<TPMGL(T)>::size(
  ) {
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this->FMGL(size);
    
}

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_long org::scalegraph::util::GrowableMemory<TPMGL(T)>::capacity(
  ) {
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::MemoryChunk<TPMGL(T)> this121277 =
          this->FMGL(mc);
        this121277->FMGL(data)->FMGL(size);
    }))
    ;
    
}

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<TPMGL(T)>
  org::scalegraph::util::GrowableMemory<TPMGL(T)>::backingStore(
  ) {
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this->FMGL(mc);
    
}

//#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::LongRange org::scalegraph::util::GrowableMemory<TPMGL(T)>::range(
  ) {
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return x10::lang::LongRange::_make(((x10_long)0ll), ((x10_long) ((this->
                                                                        FMGL(size)) - (((x10_long)1ll)))));
    
}

//#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
  TPMGL(T) v) {
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((((x10_long) ((this->FMGL(size)) + (((x10_long) (((x10_int)1))))))) > ((__extension__ ({
            
            //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<TPMGL(T)>* this121278 =
              this;
            (__extension__ ({
                
                //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(T)> this121279 =
                  x10aux::nullCheck(this121278)->FMGL(mc);
                this121279->FMGL(data)->FMGL(size);
            }))
            ;
        }))
        ))) {
        
        //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::grow(
          ((x10_long) ((this->FMGL(size)) + (((x10_long) (((x10_int)1)))))));
    }
    
    //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    (this->FMGL(mc)->FMGL(data)).set(((x10_long) (((__extension__ ({
        
        //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(T)>* x121280 =
          this;
        
        //#line 63 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Empty_c
        ;
        x10aux::nullCheck(x121280)->FMGL(size) = ((x10_long) ((x10aux::nullCheck(x121280)->
                                                                 FMGL(size)) + (((x10_long)1ll))));
    }))
    ) - (((x10_long)1ll)))), v);
}

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::add(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> items) {
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::insert(
      this->FMGL(size), items);
}

//#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::clear(
  ) {
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long) (((x10_int)0)));
}

//#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::setSize(
  x10_long newSize) {
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((newSize) > ((__extension__ ({
            
            //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> this121282 =
              this->FMGL(mc);
            this121282->FMGL(data)->FMGL(size);
        }))
        ))) {
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::grow(
          newSize);
    }
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = newSize;
}

//#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::setMemory(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> mc) {
    
    //#line 90 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::GrowableMemory<TPMGL(T)>* this121295 =
      this;
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> mc121296 =
      mc;
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long size121297 = (__extension__ ({
        mc->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this121295)->FMGL(mc) = mc121296;
    
    //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this121295)->FMGL(size) = size121297;
}

//#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::setMemory(
  org::scalegraph::util::MemoryChunk<TPMGL(T)> mc, x10_long size) {
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = mc;
    
    //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = size;
}

//#line 105 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> TPMGL(T) org::scalegraph::util::GrowableMemory<TPMGL(T)>::__apply(
  x10_long index) {
    {
        
        //#line 107 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= (this->
                                                                        FMGL(size))))
        {
            
            //#line 108 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 110 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return (this->FMGL(mc)->FMGL(data))[index];
    
}

//#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::__set(
  x10_long index, TPMGL(T) value) {
    {
        
        //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
        if (((index) < (((x10_long) (((x10_int)0))))) || ((index) >= (this->
                                                                        FMGL(size))))
        {
            
            //#line 119 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index), x10aux::makeStringLit(") not contained in MemoryChunk")))));
        }
        
    }
    
    //#line 121 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    (this->FMGL(mc)->FMGL(data)).set(index, value);
}

//#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::insert(
  x10_long p, org::scalegraph::util::MemoryChunk<TPMGL(T)> items) {
    
    //#line 129 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long addLen = (__extension__ ({
        items->FMGL(data)->FMGL(size);
    }))
    ;
    
    //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long newLen = ((x10_long) ((this->FMGL(size)) + (addLen)));
    
    //#line 131 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long movLen = ((x10_long) ((this->FMGL(size)) - (p)));
    
    //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((newLen) > ((__extension__ ({
            
            //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::GrowableMemory<TPMGL(T)>* this121288 =
              this;
            (__extension__ ({
                
                //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::MemoryChunk<TPMGL(T)> this121289 =
                  x10aux::nullCheck(this121288)->FMGL(mc);
                this121289->FMGL(data)->FMGL(size);
            }))
            ;
        }))
        ))) {
        
        //#line 132 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        this->org::scalegraph::util::GrowableMemory<TPMGL(T)>::grow(
          newLen);
    }
    
    //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((movLen) > (((x10_long) (((x10_int)0)))))) {
        
        //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
        org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
          this->FMGL(mc), p, this->FMGL(mc), ((x10_long) ((p) + (addLen))),
          movLen);
    }
    
    //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
      items, ((x10_long)0ll), this->FMGL(mc), p, (__extension__ ({
          items->FMGL(data)->FMGL(size);
      }))
      );
    
    //#line 137 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = newLen;
}

//#line 143 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::grow(
  x10_long reqCapacity) {
    
    //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((reqCapacity) < (this->FMGL(size)))) {
        
        //#line 144 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
        return;
    }
    
    //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    x10_long newCapacity = (__extension__ ({
        
        //#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(T)>* this121290 =
          this;
        (__extension__ ({
            
            //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::MemoryChunk<TPMGL(T)> this121291 =
              x10aux::nullCheck(this121290)->FMGL(mc);
            this121291->FMGL(data)->FMGL(size);
        }))
        ;
    }))
    ;
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10If_c
    if (((newCapacity) < (((x10_long) (((x10_int)8)))))) {
        
        //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
        newCapacity = ((x10_long) (((x10_int)8)));
    }
    
    //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10While_c
    while (((newCapacity) < (reqCapacity))) {
        
        //#line 147 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
        newCapacity = ((x10_long) ((newCapacity) * (((x10_long) (((x10_int)2))))));
    }
    
    //#line 149 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> tmp;
    
    //#line 150 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
    tmp = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(newCapacity, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 151 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
      this->FMGL(mc), ((x10_long)0ll), tmp, ((x10_long)0ll),
      this->FMGL(size));
    
    //#line 152 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = tmp;
}

//#line 158 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::shrink(
  x10_long newCapacity) {
    
    //#line 159 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10LocalAssign_c
    newCapacity = (__extension__ ({
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long a121292 = newCapacity;
        
        //#line 351 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/lang/Math.x10": x10.ast.X10LocalDecl_c
        x10_long b121293 = this->FMGL(size);
        ((a121292) < (b121293)) ? (b121293) : (a121292);
    }))
    ;
    
    //#line 160 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<TPMGL(T)> tmp = org::scalegraph::util::MemoryChunk<TPMGL(T) >::_make(newCapacity, 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 161 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10Call_c
    org::scalegraph::util::MemoryChunk<void>::template copy<TPMGL(T) >(
      this->FMGL(mc), ((x10_long)0ll), tmp, ((x10_long)0ll),
      this->FMGL(size));
    
    //#line 162 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = tmp;
}

//#line 165 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::del(
  ) {
    
    //#line 166 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(size) = ((x10_long) (((x10_int)0)));
    
    //#line 167 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
}

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::GrowableMemory<TPMGL(T)>*
  org::scalegraph::util::GrowableMemory<TPMGL(T)>::org__scalegraph__util__GrowableMemory____this__org__scalegraph__util__GrowableMemory(
  ) {
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> void org::scalegraph::util::GrowableMemory<TPMGL(T)>::__fieldInitializers82419(
  ) {
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(mc) = x10aux::zeroValue<org::scalegraph::util::MemoryChunk<TPMGL(T)> >();
    
    //#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/GrowableMemory.x10": Eval of x10.ast.X10FieldAssign_c
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

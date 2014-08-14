#ifndef __ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H
#define __ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ITERABLE_H_NODEPS
#include <x10/lang/Iterable.h>
#undef X10_LANG_ITERABLE_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <org/scalegraph/util/SString.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <org/scalegraph/util/SString.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class SString__TokenIterator;
} } } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunk;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class MemoryChunkData;
} } } 
namespace x10 { namespace compiler { 
class CompilerFlags;
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
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace org { namespace scalegraph { namespace util { 

template<class TPMGL(T)> class SString__TokenCollection   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::util::SString__TokenCollection<TPMGL(T)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[3];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> > _itable_0;
    
    static typename x10::lang::Iterable<org::scalegraph::util::SString>::template itable<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> > _itable_1;
    
    static x10aux::itable_entry _iboxitables[3];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::util::SString__TokenCollection<TPMGL(T)> _alloc(){org::scalegraph::util::SString__TokenCollection<TPMGL(T)> t; return t; }
    
    org::scalegraph::util::SString FMGL(str);
    
    TPMGL(T) FMGL(splitter);
    
    void _constructor(org::scalegraph::util::SString str_, TPMGL(T) splitter_);
    
    static org::scalegraph::util::SString__TokenCollection<TPMGL(T)> _make(
             org::scalegraph::util::SString str_, TPMGL(T) splitter_);
    
    x10_int size();
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString> result(
      );
    x10::lang::Iterator<org::scalegraph::util::SString>* iterator();
    org::scalegraph::util::SString__TokenIterator<TPMGL(T)> iterator_();
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::util::SString__TokenCollection<TPMGL(T)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::util::SString__TokenCollection<TPMGL(T)> other);
    org::scalegraph::util::SString__TokenCollection<TPMGL(T)> org__scalegraph__util__SString__TokenCollection____this__org__scalegraph__util__SString__TokenCollection(
      );
    
    static void _serialize(org::scalegraph::util::SString__TokenCollection<TPMGL(T)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::util::SString__TokenCollection<TPMGL(T)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::util::SString__TokenCollection<TPMGL(T)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(T)> x10aux::RuntimeType org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::rtt;
template<class TPMGL(T)> void org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::util::SString__TokenCollection<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[3] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Iterable<org::scalegraph::util::SString> >(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(T)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.SString.TokenCollection";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 3, parents, 1, params, variances);
}

template <> class SString__TokenCollection<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class SString__TokenCollection;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Iterable.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/util/SString__TokenIterator.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/MemoryChunkData.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/ArrayIndexOutOfBoundsException.h>
#include <x10/lang/String.h>
#include <x10/compiler/Ifndef.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#ifndef ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_IMPLEMENTATION
#include <org/scalegraph/util/SString__TokenCollection.h>

namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class SString__TokenCollection_ibox0 : public x10::lang::IBox<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> > {
public:
    static x10::lang::Any::itable<SString__TokenCollection_ibox0<TPMGL(T)> > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
template<class TPMGL(T)> x10::lang::Any::itable<SString__TokenCollection_ibox0<TPMGL(T)> >  SString__TokenCollection_ibox0<TPMGL(T)>::itable(&SString__TokenCollection_ibox0<TPMGL(T)>::equals, &SString__TokenCollection_ibox0<TPMGL(T)>::hashCode, &SString__TokenCollection_ibox0<TPMGL(T)>::toString, &SString__TokenCollection_ibox0<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> x10::lang::Any::itable<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> >  org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_itable_0(&org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::equals, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::hashCode, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::toString, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::typeName);
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class SString__TokenCollection_ibox1 : public x10::lang::IBox<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> > {
public:
    static typename x10::lang::Iterable<org::scalegraph::util::SString>::template itable<SString__TokenCollection_ibox1<TPMGL(T)> > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    x10::lang::Iterator<org::scalegraph::util::SString>* iterator() {
        return this->value->iterator();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
template<class TPMGL(T)> typename x10::lang::Iterable<org::scalegraph::util::SString>::template itable<SString__TokenCollection_ibox1<TPMGL(T)> >  SString__TokenCollection_ibox1<TPMGL(T)>::itable(&SString__TokenCollection_ibox1<TPMGL(T)>::equals, &SString__TokenCollection_ibox1<TPMGL(T)>::hashCode, &SString__TokenCollection_ibox1<TPMGL(T)>::iterator, &SString__TokenCollection_ibox1<TPMGL(T)>::toString, &SString__TokenCollection_ibox1<TPMGL(T)>::typeName);
} } } 
template<class TPMGL(T)> typename x10::lang::Iterable<org::scalegraph::util::SString>::template itable<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> >  org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_itable_1(&org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::equals, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::hashCode, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::iterator, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::toString, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::typeName);
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterable<org::scalegraph::util::SString> >, &org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> >())};
template<class TPMGL(T)> x10aux::itable_entry org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_iboxitables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::util::SString__TokenCollection_ibox0<TPMGL(T)>::itable), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterable<org::scalegraph::util::SString> >, &org::scalegraph::util::SString__TokenCollection_ibox1<TPMGL(T)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> >())};

//#line 185 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10FieldDecl_c

//#line 186 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10FieldDecl_c

//#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10ConstructorDecl_c
template<class TPMGL(T)> void org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_constructor(
                           org::scalegraph::util::SString str_, TPMGL(T) splitter_) {
    
    //#line 187 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.AssignPropertyCall_c
    
    //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(str) = str_;
    
    //#line 188 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(splitter) = splitter_;
}
template<class TPMGL(T)> org::scalegraph::util::SString__TokenCollection<TPMGL(T)> org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_make(
                           org::scalegraph::util::SString str_,
                           TPMGL(T) splitter_) {
    org::scalegraph::util::SString__TokenCollection<TPMGL(T)> this_; 
    this_->_constructor(str_, splitter_);
    return this_;
}



//#line 190 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::size(
  ) {
    
    //#line 191 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int tokenCount = ((x10_int)0);
    
    //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        org::scalegraph::util::SString__TokenIterator<TPMGL(T)> t85837;
        for (
             //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
             t85837 = x10aux::class_cast_unchecked<org::scalegraph::util::SString__TokenIterator<TPMGL(T)> >((*this)->org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::iterator());
             t85837->org::scalegraph::util::SString__TokenIterator<TPMGL(T)>::hasNext();
             ) {
            
            //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString t = t85837->org::scalegraph::util::SString__TokenIterator<TPMGL(T)>::next();
            
            //#line 192 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
            tokenCount = ((x10_int) ((tokenCount) + (((x10_int)1))));
        }
    }
    
    //#line 193 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return tokenCount;
    
}

//#line 195 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString>
  org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::result(
  ) {
    
    //#line 196 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString> array =
      org::scalegraph::util::MemoryChunk<org::scalegraph::util::SString >::_make(((x10_long) ((*this)->org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::size())), 0, false, (x10_byte*)(void*)__FILE__, __LINE__);
    
    //#line 197 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int tokenCount = ((x10_int)0);
    
    //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.For_c
    {
        org::scalegraph::util::SString__TokenIterator<TPMGL(T)> t85839;
        for (
             //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
             t85839 = x10aux::class_cast_unchecked<org::scalegraph::util::SString__TokenIterator<TPMGL(T)> >((*this)->org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::iterator());
             t85839->org::scalegraph::util::SString__TokenIterator<TPMGL(T)>::hasNext();
             ) {
            
            //#line 198 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString t = t85839->org::scalegraph::util::SString__TokenIterator<TPMGL(T)>::next();
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            x10_int index126488 = ((x10_int) ((tokenCount =
              ((x10_int) ((tokenCount) + (((x10_int)1))))) - (((x10_int)1))));
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString value126489 = t;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString ret126490;
            {
                
                //#line 285 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (!((array->FMGL(data)).isValid())) {
                    
                    //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 286 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10aux::makeStringLit("This MemoryChunk is released."))));
                    }
                    
                }
                
                //#line 287 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                if (((index126488) < (((x10_int)0))) || ((((x10_long) (index126488))) >= (array->
                                                                                            FMGL(data)->
                                                                                            FMGL(size))))
                {
                    
                    //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": x10.ast.X10If_c
                    if (true) {
                        
                        //#line 288 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": polyglot.ast.Throw_c
                        x10aux::throwException(x10aux::nullCheck(x10::lang::ArrayIndexOutOfBoundsException::_make(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("index ("), index126488), x10aux::makeStringLit(") not contained in MemoryChunk")))));
                    }
                    
                }
                
            }
            
            //#line 290 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Call_c
            (array->FMGL(data)).set(index126488, value126489);
            
            //#line 291 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10LocalAssign_c
            ret126490 = value126489;
            
            //#line 283 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/MemoryChunk.x10": Eval of x10.ast.X10Local_c
            ret126490;
        }
    }
    
    //#line 199 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return array;
    
}

//#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::Iterator<org::scalegraph::util::SString>*
  org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::iterator(
  ) {
    
    //#line 201 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return x10aux::class_cast_unchecked<x10::lang::Iterator<org::scalegraph::util::SString>*>(org::scalegraph::util::SString__TokenIterator<TPMGL(T)>::_make((*this)->
                                                                                                                                                               FMGL(str),
                                                                                                                                                             (*this)->
                                                                                                                                                               FMGL(splitter)));
    
}

//#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::SString__TokenIterator<TPMGL(T)>
  org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::iterator_(
  ) {
    
    //#line 202 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return org::scalegraph::util::SString__TokenIterator<TPMGL(T)>::_make((*this)->
                                                                            FMGL(str),
                                                                          (*this)->
                                                                            FMGL(splitter));
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10::lang::String* org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::toString(
  ) {
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.util.SString.TokenCollection:"), x10aux::makeStringLit(" str=")), (*this)->
                                                                                                                                                                                                                                    FMGL(str)), x10aux::makeStringLit(" splitter=")), (*this)->
                                                                                                                                                                                                                                                                                        FMGL(splitter));
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_int org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::hashCode(
  ) {
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + ((*this)->
                                                                           FMGL(str)->org::scalegraph::util::SString::hashCode())));
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(splitter)))));
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::equals(
  x10::lang::Any* other) {
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> >(other)))
    {
        
        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::equals(
             x10aux::class_cast<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> >(other));
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::equals(
  org::scalegraph::util::SString__TokenCollection<TPMGL(T)> other) {
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(str), other->
                                                        FMGL(str))) &&
    (x10aux::struct_equals((*this)->FMGL(splitter), other->
                                                      FMGL(splitter)));
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> >(other)))
    {
        
        //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::util::SString__TokenCollection<TPMGL(T)> >(other));
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> x10_boolean org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_struct_equals(
  org::scalegraph::util::SString__TokenCollection<TPMGL(T)> other) {
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(str), other->
                                                        FMGL(str))) &&
    (x10aux::struct_equals((*this)->FMGL(splitter), other->
                                                      FMGL(splitter)));
    
}

//#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(T)> org::scalegraph::util::SString__TokenCollection<TPMGL(T)>
  org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::org__scalegraph__util__SString__TokenCollection____this__org__scalegraph__util__SString__TokenCollection(
  ) {
    
    //#line 184 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10Return_c
    return (*this);
    
}
template<class TPMGL(T)> void org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_serialize(org::scalegraph::util::SString__TokenCollection<TPMGL(T)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(str));
    buf.write(this_->FMGL(splitter));
    
}

template<class TPMGL(T)> void org::scalegraph::util::SString__TokenCollection<TPMGL(T)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(str) = buf.read<org::scalegraph::util::SString>();
    FMGL(splitter) = buf.read<TPMGL(T)>();
}


#endif // ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_SSTRING__TOKENCOLLECTION_H_NODEPS

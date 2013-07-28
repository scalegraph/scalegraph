#ifndef __ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H
#define __ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ITERATOR_H_NODEPS
#include <x10/lang/Iterator.h>
#undef X10_LANG_ITERATOR_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS
#include <org/scalegraph/util/SString.h>
#undef ORG_SCALEGRAPH_UTIL_SSTRING_H_NODEPS

namespace org { namespace scalegraph { namespace util { 

template<class T> class TokenIter   {
    public:
    RTT_H_DECLS_STRUCT
    
    SString FMGL(str);
    T FMGL(splitter);
    x10_int FMGL(cur);

    TokenIter<T>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[3];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<TokenIter<T> > _itable_0;
    
    static typename x10::lang::Iterator<SString>::template itable<TokenIter<T> > _itable_1;
    
    static x10aux::itable_entry _iboxitables[3];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static TokenIter<T> _alloc(){TokenIter<T> t; return t; }
    
    SString next();
    x10_boolean hasNext();
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(TokenIter<T> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(TokenIter<T> other);
    TokenIter<T> org__scalegraph__util__TokenIter____this__org__scalegraph__util__TokenIter(
      );
    void _constructor() { }
    void _constructor(SString& str_, T& splitter_);
    static TokenIter<T> _make(SString str_, T splitter_) {
        TokenIter<T> this_;
        this_->_constructor(str_, splitter_);
        return this_;
    }
    
    
    static void _serialize(TokenIter<T> this_, x10aux::serialization_buffer& buf);
    
    static TokenIter<T> _deserialize(x10aux::deserialization_buffer& buf) {
        TokenIter<T> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class T> x10aux::RuntimeType TokenIter<T>::rtt;
template<class T> void TokenIter<T>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<TokenIter<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[3] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Iterator<SString> >(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<T>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.SString.TokenIterator";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 3, parents, 1, params, variances);
}

template <> class TokenIter<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H

namespace org { namespace scalegraph { namespace util { 
template<class T> class TokenIter;
} } } 

#ifndef ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_NODEPS
#define ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Iterator.h>
#include <org/scalegraph/util/SString.h>
#include <x10/compiler/Native.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/String.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#ifndef ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_GENERICS
#define ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_GENERICS
#endif // ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_GENERICS
#ifndef ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_IMPLEMENTATION
#include <org/scalegraph/util/TokenIter.h>

#include <org/scalegraph/util/StringHelper.h>

namespace org { namespace scalegraph { namespace util { 
template<class T> class TokenIter_ibox0 : public x10::lang::IBox<TokenIter<T> > {
public:
    static x10::lang::Any::itable<TokenIter_ibox0<T> > itable;
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
template<class T> x10::lang::Any::itable<TokenIter_ibox0<T> >  TokenIter_ibox0<T>::itable(&TokenIter_ibox0<T>::equals, &TokenIter_ibox0<T>::hashCode, &TokenIter_ibox0<T>::toString, &TokenIter_ibox0<T>::typeName);
} } } 
template<class T> x10::lang::Any::itable<TokenIter<T> >  TokenIter<T>::_itable_0(&TokenIter<T>::equals, &TokenIter<T>::hashCode, &TokenIter<T>::toString, &TokenIter<T>::typeName);
namespace org { namespace scalegraph { namespace util { 
template<class T> class TokenIter_ibox1 : public x10::lang::IBox<TokenIter<T> > {
public:
    static typename x10::lang::Iterator<SString>::template itable<TokenIter_ibox1<T> > itable;
    x10_boolean equals(x10::lang::Any* arg0) {
        return this->value->equals(arg0);
    }
    x10_boolean hasNext() {
        return this->value->hasNext();
    }
    x10_int hashCode() {
        return this->value->hashCode();
    }
    SString next() {
        return this->value->next();
    }
    x10::lang::String* toString() {
        return this->value->toString();
    }
    x10::lang::String* typeName() {
        return this->value->typeName();
    }
    
};
template<class T> typename x10::lang::Iterator<SString>::template itable<TokenIter_ibox1<T> >  TokenIter_ibox1<T>::itable(&TokenIter_ibox1<T>::equals, &TokenIter_ibox1<T>::hasNext, &TokenIter_ibox1<T>::hashCode, &TokenIter_ibox1<T>::next, &TokenIter_ibox1<T>::toString, &TokenIter_ibox1<T>::typeName);
} } } 
template<class T> typename x10::lang::Iterator<SString>::template itable<TokenIter<T> >  TokenIter<T>::_itable_1(&TokenIter<T>::equals, &TokenIter<T>::hasNext, &TokenIter<T>::hashCode, &TokenIter<T>::next, &TokenIter<T>::toString, &TokenIter<T>::typeName);
template<class T> x10aux::itable_entry TokenIter<T>::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &TokenIter<T>::_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterator<SString> >, &TokenIter<T>::_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<TokenIter<T> >())};
template<class T> x10aux::itable_entry TokenIter<T>::_iboxitables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &TokenIter_ibox0<T>::itable), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterator<SString> >, &TokenIter_ibox1<T>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<TokenIter<T> >())};

static inline int splitterBytesLength(x10_char ch) {
	return UTF8CodeLength_(ch);
}

static inline int splitterBytesLength(MemoryChunk<x10_byte>& str) {
	return str.size();
}

template<class T> SString TokenIter<T>::next(){
	int cur_pos = FMGL(cur);
	int next_pos = StringIndexOf_(FMGL(str), FMGL(splitter), cur_pos);
	if(next_pos == -1) {
		FMGL(cur) = next_pos = FMGL(str).FMGL(content).size();
	}
	else {
		FMGL(cur) = next_pos + splitterBytesLength(FMGL(splitter));
	}
    return FMGL(str).substring(cur_pos, next_pos);
}

template<class T> x10_boolean TokenIter<T>::hasNext(){
    return FMGL(cur) < FMGL(str).FMGL(content).size();
}

template<class T> x10::lang::String* TokenIter<T>::typeName(){
    return x10aux::type_name((*this));
}

template<class T> x10::lang::String* TokenIter<T>::toString() {
    return x10aux::makeStringLit("struct org.scalegraph.util.SString.TokenIterator");
}

template<class T> x10_int TokenIter<T>::hashCode() {
    x10_int result = ((x10_int)1);
    return result;
}

template<class T> x10_boolean TokenIter<T>::equals(x10::lang::Any* other) {
    if (!(x10aux::instanceof<TokenIter<T> >(other))) {
        return false;
    }
    return (*this)->equals(
             x10aux::class_cast<TokenIter<T> >(other));
}

template<class T> x10_boolean TokenIter<T>::equals(TokenIter<T> other) {
    return true;
}

template<class T> x10_boolean TokenIter<T>::_struct_equals(x10::lang::Any* other) {
    if (!(x10aux::instanceof<TokenIter<T> >(other))) {
    	return false;
    }
    return (*this)->_struct_equals(
             x10aux::class_cast<TokenIter<T> >(other));
}

template<class T> x10_boolean TokenIter<T>::_struct_equals(TokenIter<T> other) {
    return true;
}

template<class T> TokenIter<T>
  TokenIter<T>::org__scalegraph__util__TokenIter____this__org__scalegraph__util__TokenIter() {
    return (*this);
}

template<class T> void TokenIter<T>::_constructor(SString& str_, T& splitter_) {
	FMGL(str) = str_;
	FMGL(splitter) = splitter_;
	FMGL(cur) = 0;
}

template<class T> void TokenIter<T>::_serialize(TokenIter<T> this_, x10aux::serialization_buffer& buf) {
    buf.write(FMGL(str));
    buf.write(FMGL(splitter));
    buf.write(FMGL(cur));
}

template<class T> void TokenIter<T>::_deserialize_body(x10aux::deserialization_buffer& buf) {
	FMGL(str) = buf.read<SString>();
	FMGL(splitter) = buf.read<T>();
	FMGL(cur) = buf.read<x10_int>();
}


#endif // ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_NODEPS

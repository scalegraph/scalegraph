/*
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */
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

template<class T> class SString__TokenIterator   {
    public:
    RTT_H_DECLS_STRUCT
    
    SString FMGL(str);
    T FMGL(splitter);
    x10_int FMGL(cur);

    SString__TokenIterator<T>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[3];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<SString__TokenIterator<T> > _itable_0;
    
    static typename x10::lang::Iterator<SString>::template itable<SString__TokenIterator<T> > _itable_1;
    
    static x10aux::itable_entry _iboxitables[3];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static SString__TokenIterator<T> _alloc(){SString__TokenIterator<T> t; return t; }
    
    SString next();
    x10_boolean hasNext();
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(SString__TokenIterator<T> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(SString__TokenIterator<T> other);
    SString__TokenIterator<T> org__scalegraph__util__SString__TokenIterator____this__org__scalegraph__util__SString__TokenIterator(
      );
    void _constructor() { }
    void _constructor(const SString& str_, T& splitter_);
    static SString__TokenIterator<T> _make(const SString& str_, T splitter_) {
        SString__TokenIterator<T> this_;
        this_->_constructor(str_, splitter_);
        return this_;
    }
    
    
    static void _serialize(SString__TokenIterator<T> this_, x10aux::serialization_buffer& buf);
    
    static SString__TokenIterator<T> _deserialize(x10aux::deserialization_buffer& buf) {
        SString__TokenIterator<T> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class T> x10aux::RuntimeType SString__TokenIterator<T>::rtt;
template<class T> void SString__TokenIterator<T>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<SString__TokenIterator<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[3] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Iterator<SString> >(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<T>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.util.SString.SString__TokenIterator";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 3, parents, 1, params, variances);
}

template <> class SString__TokenIterator<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } // namespace org { namespace scalegraph { namespace util {
#endif // ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H

namespace org { namespace scalegraph { namespace util { 
template<class T> class SString__TokenIterator;
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
#include <org/scalegraph/util/StringHelper.h>

namespace org { namespace scalegraph { namespace util {

template<class T> class SString__TokenIterator_ibox0 : public x10::lang::IBox<SString__TokenIterator<T> > {
public:
    static x10::lang::Any::itable<SString__TokenIterator_ibox0<T> > itable;
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
template<class T> x10::lang::Any::itable<SString__TokenIterator_ibox0<T> >  SString__TokenIterator_ibox0<T>::itable(&SString__TokenIterator_ibox0<T>::equals, &SString__TokenIterator_ibox0<T>::hashCode, &SString__TokenIterator_ibox0<T>::toString, &SString__TokenIterator_ibox0<T>::typeName);

template<class T> x10::lang::Any::itable<SString__TokenIterator<T> >  SString__TokenIterator<T>::_itable_0(&SString__TokenIterator<T>::equals, &SString__TokenIterator<T>::hashCode, &SString__TokenIterator<T>::toString, &SString__TokenIterator<T>::typeName);

template<class T> class SString__TokenIterator_ibox1 : public x10::lang::IBox<SString__TokenIterator<T> > {
public:
    static typename x10::lang::Iterator<SString>::template itable<SString__TokenIterator_ibox1<T> > itable;
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
template<class T> typename x10::lang::Iterator<SString>::template itable<SString__TokenIterator_ibox1<T> >  SString__TokenIterator_ibox1<T>::itable(&SString__TokenIterator_ibox1<T>::equals, &SString__TokenIterator_ibox1<T>::hasNext, &SString__TokenIterator_ibox1<T>::hashCode, &SString__TokenIterator_ibox1<T>::next, &SString__TokenIterator_ibox1<T>::toString, &SString__TokenIterator_ibox1<T>::typeName);

template<class T> typename x10::lang::Iterator<SString>::template itable<SString__TokenIterator<T> >  SString__TokenIterator<T>::_itable_1(&SString__TokenIterator<T>::equals, &SString__TokenIterator<T>::hasNext, &SString__TokenIterator<T>::hashCode, &SString__TokenIterator<T>::next, &SString__TokenIterator<T>::toString, &SString__TokenIterator<T>::typeName);
template<class T> x10aux::itable_entry SString__TokenIterator<T>::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &SString__TokenIterator<T>::_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterator<SString> >, &SString__TokenIterator<T>::_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<SString__TokenIterator<T> >())};
template<class T> x10aux::itable_entry SString__TokenIterator<T>::_iboxitables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &SString__TokenIterator_ibox0<T>::itable), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterator<SString> >, &SString__TokenIterator_ibox1<T>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<SString__TokenIterator<T> >())};

static inline int splitterBytesLength(x10_char ch) {
	return UTF8CodeLength_(ch);
}

static inline int splitterBytesLength(const SString& str) {
	return str.FMGL(content).FMGL(data).FMGL(size);
}

static inline int StringIndexOf_(const MemoryChunk<x10_byte>& str, const SString& splitter, int from) {
	return StringIndexOf_(str, splitter.FMGL(content), from);
}

template<class T> SString SString__TokenIterator<T>::next(){
	int cur_pos = FMGL(cur);
	int next_pos = StringIndexOf_(FMGL(str).FMGL(content), FMGL(splitter), cur_pos);
	if(next_pos == -1) {
		FMGL(cur) = next_pos = FMGL(str).FMGL(content).size();
	}
	else {
		FMGL(cur) = next_pos + splitterBytesLength(FMGL(splitter));
	}
    return FMGL(str).substring(cur_pos, next_pos);
}

template<class T> x10_boolean SString__TokenIterator<T>::hasNext(){
    return FMGL(cur) < FMGL(str).FMGL(content).size();
}

template<class T> x10::lang::String* SString__TokenIterator<T>::typeName(){
    return x10aux::type_name((*this));
}

template<class T> x10::lang::String* SString__TokenIterator<T>::toString() {
    return x10aux::makeStringLit("struct org.scalegraph.util.SString.TokenIterator");
}

template<class T> x10_int SString__TokenIterator<T>::hashCode() {
    x10_int result = ((x10_int)1);
    return result;
}

template<class T> x10_boolean SString__TokenIterator<T>::equals(x10::lang::Any* other) {
    if (!(x10aux::instanceof<SString__TokenIterator<T> >(other))) {
        return false;
    }
    return (*this)->equals(
             x10aux::class_cast<SString__TokenIterator<T> >(other));
}

template<class T> x10_boolean SString__TokenIterator<T>::equals(SString__TokenIterator<T> other) {
    return true;
}

template<class T> x10_boolean SString__TokenIterator<T>::_struct_equals(x10::lang::Any* other) {
    if (!(x10aux::instanceof<SString__TokenIterator<T> >(other))) {
    	return false;
    }
    return (*this)->_struct_equals(
             x10aux::class_cast<SString__TokenIterator<T> >(other));
}

template<class T> x10_boolean SString__TokenIterator<T>::_struct_equals(SString__TokenIterator<T> other) {
    return true;
}

template<class T> SString__TokenIterator<T>
  SString__TokenIterator<T>::org__scalegraph__util__SString__TokenIterator____this__org__scalegraph__util__SString__TokenIterator() {
    return (*this);
}

template<class T> void SString__TokenIterator<T>::_constructor(const SString& str_, T& splitter_) {
	FMGL(str) = str_;
	FMGL(splitter) = splitter_;
	FMGL(cur) = 0;
}

template<class T> void SString__TokenIterator<T>::_serialize(SString__TokenIterator<T> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_.FMGL(str));
    buf.write(this_.FMGL(splitter));
    buf.write(this_.FMGL(cur));
}

template<class T> void SString__TokenIterator<T>::_deserialize_body(x10aux::deserialization_buffer& buf) {
	FMGL(str) = buf.read<SString>();
	FMGL(splitter) = buf.read<T>();
	FMGL(cur) = buf.read<x10_int>();
}

} } } // namespace org { namespace scalegraph { namespace util {

#endif // ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_UTIL_SSTRING__TOKENITERATOR_H_NODEPS

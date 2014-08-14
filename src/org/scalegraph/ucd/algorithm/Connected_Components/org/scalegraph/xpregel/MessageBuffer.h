#ifndef __ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H
#define __ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class GrowableMemory;
} } } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace compiler { 
class Native;
} } 
namespace x10 { namespace compiler { 
class NonEscaping;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace xpregel { 

template<class TPMGL(M)> class MessageBuffer   {
    public:
    RTT_H_DECLS_STRUCT
    
    org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>* operator->() { return this; }
    
    static x10aux::itable_entry _itables[2];
    
    x10aux::itable_entry* _getITables() { return _itables; }
    
    static x10::lang::Any::itable<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> > _itable_0;
    
    static x10aux::itable_entry _iboxitables[2];
    
    x10aux::itable_entry* _getIBoxITables() { return _iboxitables; }
    
    static org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> _alloc(){org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> t; return t; }
    
    org::scalegraph::util::GrowableMemory<TPMGL(M)>* FMGL(messages);
    
    org::scalegraph::util::GrowableMemory<x10_long>* FMGL(dstIds);
    
    void _constructor() {
        
        //#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.AssignPropertyCall_c
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": Eval of x10.ast.X10Call_c
        (*this)->org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::__fieldInitializers76885();
    }
    static org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> _make() {
        org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> this_; 
        this_->_constructor();
        return this_;
    }
    
    x10::lang::String* typeName();
    x10::lang::String* toString();
    x10_int hashCode();
    x10_boolean equals(x10::lang::Any* other);
    x10_boolean equals(org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> other);
    x10_boolean _struct_equals(x10::lang::Any* other);
    x10_boolean _struct_equals(org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> other);
    org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> org__scalegraph__xpregel__MessageBuffer____this__org__scalegraph__xpregel__MessageBuffer(
      );
    void __fieldInitializers76885();
    
    static void _serialize(org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> this_, x10aux::serialization_buffer& buf);
    
    static org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> _deserialize(x10aux::deserialization_buffer& buf) {
        org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> this_;
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};

template<class TPMGL(M)> x10aux::RuntimeType org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::rtt;
template<class TPMGL(M)> void org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_initRTT() {
    const x10aux::RuntimeType *canonical = x10aux::getRTT<org::scalegraph::xpregel::MessageBuffer<void> >();
    if (rtt.initStageOne(canonical)) return;
    const x10aux::RuntimeType* parents[2] = { x10aux::getRTT<x10::lang::Any>(), x10aux::getRTT<x10::lang::Any>()};
    const x10aux::RuntimeType* params[1] = { x10aux::getRTT<TPMGL(M)>()};
    x10aux::RuntimeType::Variance variances[1] = { x10aux::RuntimeType::invariant};
    const char *baseName = "org.scalegraph.xpregel.MessageBuffer";
    rtt.initStageTwo(baseName, x10aux::RuntimeType::struct_kind, 2, parents, 1, params, variances);
}

template <> class MessageBuffer<void> {
    public:
    static x10aux::RuntimeType rtt;
    static const x10aux::RuntimeType* getRTT() { return & rtt; }
    
};

} } } 
#endif // ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageBuffer;
} } } 

#ifndef ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_NODEPS
#define ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_NODEPS
#include <x10/lang/Any.h>
#include <x10/lang/Long.h>
#include <org/scalegraph/util/GrowableMemory.h>
#include <x10/lang/String.h>
#include <x10/compiler/Native.h>
#include <x10/compiler/NonEscaping.h>
#include <x10/lang/Int.h>
#include <x10/lang/Boolean.h>
#ifndef ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_GENERICS
#define ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_GENERICS
#endif // ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_GENERICS
#ifndef ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_IMPLEMENTATION
#define ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_IMPLEMENTATION
#include <org/scalegraph/xpregel/MessageBuffer.h>

namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(M)> class MessageBuffer_ibox0 : public x10::lang::IBox<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> > {
public:
    static x10::lang::Any::itable<MessageBuffer_ibox0<TPMGL(M)> > itable;
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
template<class TPMGL(M)> x10::lang::Any::itable<MessageBuffer_ibox0<TPMGL(M)> >  MessageBuffer_ibox0<TPMGL(M)>::itable(&MessageBuffer_ibox0<TPMGL(M)>::equals, &MessageBuffer_ibox0<TPMGL(M)>::hashCode, &MessageBuffer_ibox0<TPMGL(M)>::toString, &MessageBuffer_ibox0<TPMGL(M)>::typeName);
} } } 
template<class TPMGL(M)> x10::lang::Any::itable<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >  org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_itable_0(&org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::equals, &org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::hashCode, &org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::toString, &org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::typeName);
template<class TPMGL(M)> x10aux::itable_entry org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_itables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_itable_0), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >())};
template<class TPMGL(M)> x10aux::itable_entry org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_iboxitables[2] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &org::scalegraph::xpregel::MessageBuffer_ibox0<TPMGL(M)>::itable), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >())};

//#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10FieldDecl_c

//#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10FieldDecl_c

//#line 32 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10ConstructorDecl_c


//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> x10::lang::String* org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::typeName(
  ){
    return x10aux::type_name((*this));
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> x10::lang::String* org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::toString(
  ) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
    return x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10::lang::String::__plus(x10aux::makeStringLit("struct org.scalegraph.xpregel.MessageBuffer:"), x10aux::makeStringLit(" messages=")), (*this)->
                                                                                                                                                                                                                                  FMGL(messages)), x10aux::makeStringLit(" dstIds=")), (*this)->
                                                                                                                                                                                                                                                                                         FMGL(dstIds));
    
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> x10_int org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::hashCode(
  ) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10LocalDecl_c
    x10_int result = ((x10_int)1);
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(messages)))));
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": Eval of x10.ast.X10LocalAssign_c
    result = ((x10_int) ((((x10_int) ((((x10_int)8191)) * (result)))) + (x10aux::hash_code((*this)->
                                                                                             FMGL(dstIds)))));
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
    return result;
    
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> x10_boolean org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::equals(
  x10::lang::Any* other) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >(other)))
    {
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::equals(
             x10aux::class_cast<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >(other));
    
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> x10_boolean org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::equals(
  org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> other) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(messages),
                                  other->FMGL(messages))) &&
    (x10aux::struct_equals((*this)->FMGL(dstIds), other->
                                                    FMGL(dstIds)));
    
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> x10_boolean org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_struct_equals(
  x10::lang::Any* other) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10If_c
    if (!(x10aux::instanceof<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >(other)))
    {
        
        //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
        return false;
        
    }
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
    return (*this)->org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_struct_equals(
             x10aux::class_cast<org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> >(other));
    
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> x10_boolean org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_struct_equals(
  org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> other) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals((*this)->FMGL(messages),
                                  other->FMGL(messages))) &&
    (x10aux::struct_equals((*this)->FMGL(dstIds), other->
                                                    FMGL(dstIds)));
    
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>
  org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::org__scalegraph__xpregel__MessageBuffer____this__org__scalegraph__xpregel__MessageBuffer(
  ) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10Return_c
    return (*this);
    
}

//#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10MethodDecl_c
template<class TPMGL(M)> void org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::__fieldInitializers76885(
  ) {
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(messages) = (__extension__ ({
        
        //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<TPMGL(M)>* alloc77761 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<TPMGL(M)> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<TPMGL(M)>))) org::scalegraph::util::GrowableMemory<TPMGL(M)>()))
        ;
        
        //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10ConstructorCall_c
        (alloc77761)->::org::scalegraph::util::GrowableMemory<TPMGL(M)>::_constructor(
          ((x10_long) (((x10_int)128))));
        alloc77761;
    }))
    ;
    
    //#line 28 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": Eval of x10.ast.X10FieldAssign_c
    (*this)->FMGL(dstIds) = (__extension__ ({
        
        //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::GrowableMemory<x10_long>* alloc77762 =
           ((new (memset(x10aux::alloc<org::scalegraph::util::GrowableMemory<x10_long> >(), 0, sizeof(org::scalegraph::util::GrowableMemory<x10_long>))) org::scalegraph::util::GrowableMemory<x10_long>()))
        ;
        
        //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/xpregel/MessageCommunicator.x10": x10.ast.X10ConstructorCall_c
        (alloc77762)->::org::scalegraph::util::GrowableMemory<x10_long>::_constructor(
          ((x10_long) (((x10_int)128))));
        alloc77762;
    }))
    ;
}
template<class TPMGL(M)> void org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_serialize(org::scalegraph::xpregel::MessageBuffer<TPMGL(M)> this_, x10aux::serialization_buffer& buf) {
    buf.write(this_->FMGL(messages));
    buf.write(this_->FMGL(dstIds));
    
}

template<class TPMGL(M)> void org::scalegraph::xpregel::MessageBuffer<TPMGL(M)>::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(messages) = buf.read<org::scalegraph::util::GrowableMemory<TPMGL(M)>*>();
    FMGL(dstIds) = buf.read<org::scalegraph::util::GrowableMemory<x10_long>*>();
}


#endif // ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_IMPLEMENTATION
#endif // __ORG_SCALEGRAPH_XPREGEL_MESSAGEBUFFER_H_NODEPS

#ifndef __ORG_SCALEGRAPH_IO_FILEACCESS_H
#define __ORG_SCALEGRAPH_IO_FILEACCESS_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace io { 

class FileAccess   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class I> struct itable {
        itable(x10_boolean (I::*equals) (x10::lang::Any*), x10_int (I::*hashCode) (), x10::lang::String* (I::*toString) (), x10::lang::String* (I::*typeName) ()) : equals(equals), hashCode(hashCode), toString(toString), typeName(typeName) {}
        x10_boolean (I::*equals) (x10::lang::Any*);
        x10_int (I::*hashCode) ();
        x10::lang::String* (I::*toString) ();
        x10::lang::String* (I::*typeName) ();
    };
    
    static x10_boolean equals(org::scalegraph::io::FileAccess* _recv, x10::lang::Any* arg0) {
        x10::lang::Reference* _refRecv = reinterpret_cast<x10::lang::Reference*>(_recv);
        return (_refRecv->*(x10aux::findITable<org::scalegraph::io::FileAccess>(_refRecv->_getITables())->equals))(arg0);
    }
    template <class R> static x10_boolean equals(R _recv, x10::lang::Any* arg0) {
        return _recv->equals(arg0);
    }
    static x10_int hashCode(org::scalegraph::io::FileAccess* _recv) {
        x10::lang::Reference* _refRecv = reinterpret_cast<x10::lang::Reference*>(_recv);
        return (_refRecv->*(x10aux::findITable<org::scalegraph::io::FileAccess>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    static x10::lang::String* toString(org::scalegraph::io::FileAccess* _recv) {
        x10::lang::Reference* _refRecv = reinterpret_cast<x10::lang::Reference*>(_recv);
        return (_refRecv->*(x10aux::findITable<org::scalegraph::io::FileAccess>(_refRecv->_getITables())->toString))();
    }
    template <class R> static x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    static x10::lang::String* typeName(org::scalegraph::io::FileAccess* _recv) {
        x10::lang::Reference* _refRecv = reinterpret_cast<x10::lang::Reference*>(_recv);
        return (_refRecv->*(x10aux::findITable<org::scalegraph::io::FileAccess>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    static x10_int FMGL(Read);
    static void FMGL(Read__do_init)();
    static void FMGL(Read__init)();
    static volatile x10aux::StaticInitController::status FMGL(Read__status);
    static x10::lang::CheckedThrowable* FMGL(Read__exception);
    static x10_int FMGL(Read__get)();
    
    static x10_int FMGL(Write);
    static void FMGL(Write__do_init)();
    static void FMGL(Write__init)();
    static volatile x10aux::StaticInitController::status FMGL(Write__status);
    static x10::lang::CheckedThrowable* FMGL(Write__exception);
    static x10_int FMGL(Write__get)();
    
    static x10_int FMGL(ReadWrite);
    static void FMGL(ReadWrite__do_init)();
    static void FMGL(ReadWrite__init)();
    static volatile x10aux::StaticInitController::status FMGL(ReadWrite__status);
    static x10::lang::CheckedThrowable* FMGL(ReadWrite__exception);
    static x10_int FMGL(ReadWrite__get)();
    
    
};


} } } 
#endif // ORG_SCALEGRAPH_IO_FILEACCESS_H

namespace org { namespace scalegraph { namespace io { 
class FileAccess;
} } } 

#ifndef ORG_SCALEGRAPH_IO_FILEACCESS_H_NODEPS
#define ORG_SCALEGRAPH_IO_FILEACCESS_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_FILEACCESS_H_GENERICS
#define ORG_SCALEGRAPH_IO_FILEACCESS_H_GENERICS
inline x10_int org::scalegraph::io::FileAccess::FMGL(Read__get)() {
    if (FMGL(Read__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Read__init)();
    }
    return org::scalegraph::io::FileAccess::FMGL(Read);
}

inline x10_int org::scalegraph::io::FileAccess::FMGL(Write__get)() {
    if (FMGL(Write__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Write__init)();
    }
    return org::scalegraph::io::FileAccess::FMGL(Write);
}

inline x10_int org::scalegraph::io::FileAccess::FMGL(ReadWrite__get)() {
    if (FMGL(ReadWrite__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(ReadWrite__init)();
    }
    return org::scalegraph::io::FileAccess::FMGL(ReadWrite);
}

#endif // ORG_SCALEGRAPH_IO_FILEACCESS_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_FILEACCESS_H_NODEPS

#ifndef __ORG_SCALEGRAPH_IO_FILEMODE_H
#define __ORG_SCALEGRAPH_IO_FILEMODE_H

#include <x10rt.h>


#define X10_LANG_ANY_H_NODEPS
#include <x10/lang/Any.h>
#undef X10_LANG_ANY_H_NODEPS
namespace x10 { namespace lang { 
class Int;
} } 
namespace org { namespace scalegraph { namespace io { 

class FileMode   {
    public:
    RTT_H_DECLS_INTERFACE
    
    template <class I> struct itable {
        itable(x10_boolean (I::*equals) (x10::lang::Any*), x10_int (I::*hashCode) (), x10::lang::String* (I::*toString) (), x10::lang::String* (I::*typeName) ()) : equals(equals), hashCode(hashCode), toString(toString), typeName(typeName) {}
        x10_boolean (I::*equals) (x10::lang::Any*);
        x10_int (I::*hashCode) ();
        x10::lang::String* (I::*toString) ();
        x10::lang::String* (I::*typeName) ();
    };
    
    static x10_boolean equals(org::scalegraph::io::FileMode* _recv, x10::lang::Any* arg0) {
        x10::lang::Reference* _refRecv = reinterpret_cast<x10::lang::Reference*>(_recv);
        return (_refRecv->*(x10aux::findITable<org::scalegraph::io::FileMode>(_refRecv->_getITables())->equals))(arg0);
    }
    template <class R> static x10_boolean equals(R _recv, x10::lang::Any* arg0) {
        return _recv->equals(arg0);
    }
    static x10_int hashCode(org::scalegraph::io::FileMode* _recv) {
        x10::lang::Reference* _refRecv = reinterpret_cast<x10::lang::Reference*>(_recv);
        return (_refRecv->*(x10aux::findITable<org::scalegraph::io::FileMode>(_refRecv->_getITables())->hashCode))();
    }
    template <class R> static x10_int hashCode(R _recv) {
        return _recv->hashCode();
    }
    static x10::lang::String* toString(org::scalegraph::io::FileMode* _recv) {
        x10::lang::Reference* _refRecv = reinterpret_cast<x10::lang::Reference*>(_recv);
        return (_refRecv->*(x10aux::findITable<org::scalegraph::io::FileMode>(_refRecv->_getITables())->toString))();
    }
    template <class R> static x10::lang::String* toString(R _recv) {
        return _recv->toString();
    }
    static x10::lang::String* typeName(org::scalegraph::io::FileMode* _recv) {
        x10::lang::Reference* _refRecv = reinterpret_cast<x10::lang::Reference*>(_recv);
        return (_refRecv->*(x10aux::findITable<org::scalegraph::io::FileMode>(_refRecv->_getITables())->typeName))();
    }
    template <class R> static x10::lang::String* typeName(R _recv) {
        return _recv->typeName();
    }
    static x10_int FMGL(Append);
    static void FMGL(Append__do_init)();
    static void FMGL(Append__init)();
    static volatile x10aux::StaticInitController::status FMGL(Append__status);
    static x10::lang::CheckedThrowable* FMGL(Append__exception);
    static x10_int FMGL(Append__get)();
    
    static x10_int FMGL(Create);
    static void FMGL(Create__do_init)();
    static void FMGL(Create__init)();
    static volatile x10aux::StaticInitController::status FMGL(Create__status);
    static x10::lang::CheckedThrowable* FMGL(Create__exception);
    static x10_int FMGL(Create__get)();
    
    static x10_int FMGL(CreateNew);
    static void FMGL(CreateNew__do_init)();
    static void FMGL(CreateNew__init)();
    static volatile x10aux::StaticInitController::status FMGL(CreateNew__status);
    static x10::lang::CheckedThrowable* FMGL(CreateNew__exception);
    static x10_int FMGL(CreateNew__get)();
    
    static x10_int FMGL(Open);
    static void FMGL(Open__do_init)();
    static void FMGL(Open__init)();
    static volatile x10aux::StaticInitController::status FMGL(Open__status);
    static x10::lang::CheckedThrowable* FMGL(Open__exception);
    static x10_int FMGL(Open__get)();
    
    static x10_int FMGL(OpenOrCreate);
    static void FMGL(OpenOrCreate__do_init)();
    static void FMGL(OpenOrCreate__init)();
    static volatile x10aux::StaticInitController::status FMGL(OpenOrCreate__status);
    static x10::lang::CheckedThrowable* FMGL(OpenOrCreate__exception);
    static x10_int FMGL(OpenOrCreate__get)();
    
    static x10_int FMGL(Truncate);
    static void FMGL(Truncate__do_init)();
    static void FMGL(Truncate__init)();
    static volatile x10aux::StaticInitController::status FMGL(Truncate__status);
    static x10::lang::CheckedThrowable* FMGL(Truncate__exception);
    static x10_int FMGL(Truncate__get)();
    
    
};


} } } 
#endif // ORG_SCALEGRAPH_IO_FILEMODE_H

namespace org { namespace scalegraph { namespace io { 
class FileMode;
} } } 

#ifndef ORG_SCALEGRAPH_IO_FILEMODE_H_NODEPS
#define ORG_SCALEGRAPH_IO_FILEMODE_H_NODEPS
#ifndef ORG_SCALEGRAPH_IO_FILEMODE_H_GENERICS
#define ORG_SCALEGRAPH_IO_FILEMODE_H_GENERICS
inline x10_int org::scalegraph::io::FileMode::FMGL(Append__get)() {
    if (FMGL(Append__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Append__init)();
    }
    return org::scalegraph::io::FileMode::FMGL(Append);
}

inline x10_int org::scalegraph::io::FileMode::FMGL(Create__get)() {
    if (FMGL(Create__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Create__init)();
    }
    return org::scalegraph::io::FileMode::FMGL(Create);
}

inline x10_int org::scalegraph::io::FileMode::FMGL(CreateNew__get)() {
    if (FMGL(CreateNew__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(CreateNew__init)();
    }
    return org::scalegraph::io::FileMode::FMGL(CreateNew);
}

inline x10_int org::scalegraph::io::FileMode::FMGL(Open__get)() {
    if (FMGL(Open__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Open__init)();
    }
    return org::scalegraph::io::FileMode::FMGL(Open);
}

inline x10_int org::scalegraph::io::FileMode::FMGL(OpenOrCreate__get)() {
    if (FMGL(OpenOrCreate__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(OpenOrCreate__init)();
    }
    return org::scalegraph::io::FileMode::FMGL(OpenOrCreate);
}

inline x10_int org::scalegraph::io::FileMode::FMGL(Truncate__get)() {
    if (FMGL(Truncate__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(Truncate__init)();
    }
    return org::scalegraph::io::FileMode::FMGL(Truncate);
}

#endif // ORG_SCALEGRAPH_IO_FILEMODE_H_GENERICS
#endif // __ORG_SCALEGRAPH_IO_FILEMODE_H_NODEPS

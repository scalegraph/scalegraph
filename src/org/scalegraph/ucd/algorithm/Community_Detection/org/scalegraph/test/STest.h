#ifndef __ORG_SCALEGRAPH_TEST_STEST_H
#define __ORG_SCALEGRAPH_TEST_STEST_H

#include <x10rt.h>


namespace x10 { namespace util { 
class StringBuilder;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class Boolean;
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
namespace x10 { namespace lang { 
class Runtime;
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
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace util { 
class Team;
} } 
namespace x10 { namespace array { 
class PlaceGroup;
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
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
class Int;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
class MultipleExceptions;
} } 
namespace x10 { namespace lang { 
class System;
} } 
namespace org { namespace scalegraph { namespace test { 
class STest__TestException;
} } } 
namespace org { namespace scalegraph { namespace test { 

class STest : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    static x10::util::StringBuilder* FMGL(buffer);
    static void FMGL(buffer__do_init)();
    static void FMGL(buffer__init)();
    static volatile x10aux::StaticInitController::status FMGL(buffer__status);
    static x10::lang::CheckedThrowable* FMGL(buffer__exception);
    static x10::util::StringBuilder* FMGL(buffer__get)();
    
    static x10::lang::String* FMGL(linebreak);
    static void FMGL(linebreak__do_init)();
    static void FMGL(linebreak__init)();
    static volatile x10aux::StaticInitController::status FMGL(linebreak__status);
    static x10::lang::CheckedThrowable* FMGL(linebreak__exception);
    static x10::lang::String* FMGL(linebreak__get)();
    
    virtual x10_boolean run(x10::array::Array<x10::lang::String*>* args) = 0;
    virtual void execute(x10::array::Array<x10::lang::String*>* args);
    static x10::lang::String* escapeString(x10::lang::String* str);
    static void printException(x10::lang::CheckedThrowable* e, x10_int nested);
    static void flush();
    static void printException(x10::lang::CheckedThrowable* e);
    static void print(x10::lang::Any* obj);
    static void println(x10::lang::Any* obj);
    static void bufferedPrint(x10::lang::Any* obj);
    static void bufferedPrintln(x10::lang::Any* obj);
    static void success();
    static void failure();
    static void reportResult(x10_boolean b);
    static void chk(x10_boolean b);
    static void chk(x10_boolean b, x10::lang::String* s);
    virtual org::scalegraph::test::STest* org__scalegraph__test__STest____this__org__scalegraph__test__STest(
      );
    void _constructor();
    
    
    // Serialization
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_TEST_STEST_H

namespace org { namespace scalegraph { namespace test { 
class STest;
} } } 

#ifndef ORG_SCALEGRAPH_TEST_STEST_H_NODEPS
#define ORG_SCALEGRAPH_TEST_STEST_H_NODEPS
#include <x10/util/StringBuilder.h>
#include <x10/lang/String.h>
#include <x10/array/Array.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/lang/Runtime.h>
#include <x10/lang/FinishState.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/lang/Exception.h>
#include <x10/compiler/Finalization.h>
#include <x10/compiler/Abort.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Place.h>
#include <x10/lang/Iterable.h>
#include <x10/util/Team.h>
#include <x10/array/PlaceGroup.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Error.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/Runtime__Profile.h>
#include <x10/lang/Int.h>
#include <x10/array/Point.h>
#include <x10/array/Region.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/MultipleExceptions.h>
#include <x10/lang/System.h>
#include <org/scalegraph/test/STest__TestException.h>
#ifndef ORG_SCALEGRAPH_TEST_STEST_H_GENERICS
#define ORG_SCALEGRAPH_TEST_STEST_H_GENERICS
inline x10::util::StringBuilder* org::scalegraph::test::STest::FMGL(buffer__get)() {
    if (FMGL(buffer__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(buffer__init)();
    }
    return org::scalegraph::test::STest::FMGL(buffer);
}

inline x10::lang::String* org::scalegraph::test::STest::FMGL(linebreak__get)() {
    if (FMGL(linebreak__status) != x10aux::StaticInitController::INITIALIZED) {
        FMGL(linebreak__init)();
    }
    return org::scalegraph::test::STest::FMGL(linebreak);
}

#endif // ORG_SCALEGRAPH_TEST_STEST_H_GENERICS
#endif // __ORG_SCALEGRAPH_TEST_STEST_H_NODEPS

#ifndef __ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H
#define __ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H

#include <x10rt.h>


#define X10_LANG_EXCEPTION_H_NODEPS
#include <x10/lang/Exception.h>
#undef X10_LANG_EXCEPTION_H_NODEPS
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace scalegraph { namespace test { 

class STest__TestException : public x10::lang::Exception   {
    public:
    RTT_H_DECLS_CLASS
    
    void _constructor();
    
    static org::scalegraph::test::STest__TestException* _make();
    
    void _constructor(x10::lang::CheckedThrowable* cause);
    
    static org::scalegraph::test::STest__TestException* _make(x10::lang::CheckedThrowable* cause);
    
    void _constructor(x10::lang::String* message);
    
    static org::scalegraph::test::STest__TestException* _make(x10::lang::String* message);
    
    void _constructor(x10::lang::String* message, x10::lang::CheckedThrowable* cause);
    
    static org::scalegraph::test::STest__TestException* _make(x10::lang::String* message,
                                                              x10::lang::CheckedThrowable* cause);
    
    virtual org::scalegraph::test::STest__TestException* org__scalegraph__test__STest__TestException____this__org__scalegraph__test__STest__TestException(
      );
    
    // Serialization
    public: static const x10aux::serialization_id_t _serialization_id;
    
    public: virtual x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(x10aux::serialization_buffer& buf);
    
    public: static x10::lang::Reference* _deserializer(x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(x10aux::deserialization_buffer& buf);
    
};


} } } 
#endif // ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H

namespace org { namespace scalegraph { namespace test { 
class STest__TestException;
} } } 

#ifndef ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H_NODEPS
#define ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H_NODEPS
#ifndef ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H_GENERICS
#define ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H_GENERICS
#endif // ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H_GENERICS
#endif // __ORG_SCALEGRAPH_TEST_STEST__TESTEXCEPTION_H_NODEPS

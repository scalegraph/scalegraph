#ifndef __ORG_SIMULATOR_TWITTER_TWITTERUSER_H
#define __ORG_SIMULATOR_TWITTER_TWITTERUSER_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class String;
} } 
namespace org { namespace simulator { namespace twitter { 

class TwitterUser : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(userID);
    
    x10::lang::String* FMGL(location);
    
    void _constructor(x10_long id, x10::lang::String* locate);
    
    static org::simulator::twitter::TwitterUser* _make(x10_long id, x10::lang::String* locate);
    
    virtual org::simulator::twitter::TwitterUser* org__simulator__twitter__TwitterUser____this__org__simulator__twitter__TwitterUser(
      );
    virtual void __fieldInitializers40501();
    
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
#endif // ORG_SIMULATOR_TWITTER_TWITTERUSER_H

namespace org { namespace simulator { namespace twitter { 
class TwitterUser;
} } } 

#ifndef ORG_SIMULATOR_TWITTER_TWITTERUSER_H_NODEPS
#define ORG_SIMULATOR_TWITTER_TWITTERUSER_H_NODEPS
#ifndef ORG_SIMULATOR_TWITTER_TWITTERUSER_H_GENERICS
#define ORG_SIMULATOR_TWITTER_TWITTERUSER_H_GENERICS
#endif // ORG_SIMULATOR_TWITTER_TWITTERUSER_H_GENERICS
#endif // __ORG_SIMULATOR_TWITTER_TWITTERUSER_H_NODEPS

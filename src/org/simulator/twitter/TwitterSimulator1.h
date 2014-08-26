#ifndef __TWITTERSIMULATOR1_H
#define __TWITTERSIMULATOR1_H

#include <x10rt.h>


#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
#define X10_LANG_DOUBLE_H_NODEPS
#include <x10/lang/Double.h>
#undef X10_LANG_DOUBLE_H_NODEPS
namespace org { namespace scalegraph { namespace xpregel { 
template<class TPMGL(V), class TPMGL(E), class TPMGL(M), class TPMGL(A)> class VertexContext;
} } } 
namespace org { namespace simulator { namespace twitter { 
class TwitterUser;
} } } 
namespace x10 { namespace lang { 
class Long;
} } 
class TwitterSimulator1 : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_double FMGL(directMessage);
    
    x10_double FMGL(tweet);
    
    x10_double FMGL(attribute);
    
    x10_double FMGL(direction);
    
    x10_double FMGL(mutual);
    
    void _constructor();
    
    static TwitterSimulator1* _make();
    
    virtual void tweet(org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>* ctx);
    virtual void directMessage(org::scalegraph::xpregel::VertexContext<org::simulator::twitter::TwitterUser*, x10_double, x10_double, x10_double>* ctx,
                               x10_long destId);
    virtual void reTweet();
    virtual TwitterSimulator1* TwitterSimulator1____this__TwitterSimulator1(
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

#endif // TWITTERSIMULATOR1_H

class TwitterSimulator1;

#ifndef TWITTERSIMULATOR1_H_NODEPS
#define TWITTERSIMULATOR1_H_NODEPS
#ifndef TWITTERSIMULATOR1_H_GENERICS
#define TWITTERSIMULATOR1_H_GENERICS
#endif // TWITTERSIMULATOR1_H_GENERICS
#endif // __TWITTERSIMULATOR1_H_NODEPS

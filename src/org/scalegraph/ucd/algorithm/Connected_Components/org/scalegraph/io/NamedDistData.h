#ifndef __ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H
#define __ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H

#include <x10rt.h>


#define X10_LANG_INT_H_NODEPS
#include <x10/lang/Int.h>
#undef X10_LANG_INT_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
#define X10_LANG_BYTE_H_NODEPS
#include <x10/lang/Byte.h>
#undef X10_LANG_BYTE_H_NODEPS
namespace x10 { namespace array { 
template<class TPMGL(T)> class Array;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace array { 
class RectRegion1D;
} } 
namespace x10 { namespace array { 
class Region;
} } 
namespace x10 { namespace util { 
template<class TPMGL(T)> class IndexedMemoryChunk;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace array { 
class Point;
} } 
namespace x10 { namespace lang { 
class Boolean;
} } 
namespace org { namespace scalegraph { namespace id { 
class Type;
} } } 
namespace x10 { namespace lang { 
class IllegalArgumentException;
} } 
namespace org { namespace scalegraph { namespace io { 
class ID;
} } } 
namespace org { namespace scalegraph { namespace io { 
class GraphHeader;
} } } 
namespace org { namespace scalegraph { namespace io { 
class MatrixHeader;
} } } 
namespace org { namespace scalegraph { namespace io { 
class VectorHeader;
} } } 
namespace org { namespace scalegraph { namespace util { 
class SString;
} } } 
namespace org { namespace scalegraph { namespace util { 
template<class TPMGL(T)> class DistMemoryChunk;
} } } 
namespace org { namespace scalegraph { namespace io { 

class NamedDistData : public x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10::array::Array<x10::lang::String*>* FMGL(name);
    
    x10::array::Array<x10_int>* FMGL(typeId);
    
    x10::array::Array<x10::lang::Any*>* FMGL(data);
    
    x10_byte FMGL(datatype);
    
    x10::lang::Any* FMGL(header);
    
    static x10::array::Array<x10_int>* createTypeId(x10::array::Array<x10::lang::Any*>* data);
    static x10::array::Array<x10::lang::String*>* createName(x10::array::Array<x10::lang::Any*>* data);
    void _constructor(x10::array::Array<x10::lang::Any*>* data_);
    
    static org::scalegraph::io::NamedDistData* _make(x10::array::Array<x10::lang::Any*>* data_);
    
    void _constructor(x10::array::Array<x10::lang::String*>* name_, x10::array::Array<x10::lang::Any*>* data_);
    
    static org::scalegraph::io::NamedDistData* _make(x10::array::Array<x10::lang::String*>* name_,
                                                     x10::array::Array<x10::lang::Any*>* data_);
    
    void _constructor(x10::array::Array<x10::lang::String*>* name_,
                      x10::array::Array<x10::lang::Any*>* data_, x10::lang::Any* header_);
    
    static org::scalegraph::io::NamedDistData* _make(x10::array::Array<x10::lang::String*>* name_,
                                                     x10::array::Array<x10::lang::Any*>* data_,
                                                     x10::lang::Any* header_);
    
    void _constructor(x10::array::Array<x10::lang::String*>* name_,
                      x10::array::Array<x10_int>* typeId_,
                      x10::array::Array<x10::lang::Any*>* data_,
                      x10::lang::Any* header_);
    
    static org::scalegraph::io::NamedDistData* _make(x10::array::Array<x10::lang::String*>* name_,
                                                     x10::array::Array<x10_int>* typeId_,
                                                     x10::array::Array<x10::lang::Any*>* data_,
                                                     x10::lang::Any* header_);
    
    virtual x10_int nameToIndex(org::scalegraph::util::SString name_);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      get(org::scalegraph::util::SString name_);
    template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
      get(x10_int index);
    virtual x10_int size();
    virtual x10::array::Array<x10::lang::String*>* name();
    virtual x10::array::Array<x10::lang::Any*>* data();
    virtual x10::array::Array<x10_int>* typeId();
    virtual x10::lang::Any* header();
    virtual x10_byte datatype();
    virtual org::scalegraph::io::NamedDistData* org__scalegraph__io__NamedDistData____this__org__scalegraph__io__NamedDistData(
      );
    virtual void __fieldInitializers85309();
    
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
#endif // ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H

namespace org { namespace scalegraph { namespace io { 
class NamedDistData;
} } } 

#ifndef ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_NODEPS
#define ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_NODEPS
#include <x10/lang/Int.h>
#include <x10/lang/Byte.h>
#include <x10/array/Array.h>
#include <x10/lang/String.h>
#include <x10/lang/Any.h>
#include <x10/array/RectRegion1D.h>
#include <x10/array/Region.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Iterator.h>
#include <x10/array/Point.h>
#include <x10/lang/Boolean.h>
#include <org/scalegraph/id/Type.h>
#include <x10/lang/IllegalArgumentException.h>
#include <org/scalegraph/io/ID.h>
#include <org/scalegraph/io/GraphHeader.h>
#include <org/scalegraph/io/MatrixHeader.h>
#include <org/scalegraph/io/VectorHeader.h>
#include <org/scalegraph/util/SString.h>
#include <org/scalegraph/util/DistMemoryChunk.h>
#ifndef ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_GENERICS
#define ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_GENERICS
#ifndef ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_get_1523
#define ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_get_1523
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::io::NamedDistData::get(org::scalegraph::util::SString name_) {
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
    return this->template get<TPMGL(T) >(this->nameToIndex(name_));
    
}
#endif // ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_get_1523
#ifndef ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_get_1524
#define ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_get_1524
template<class TPMGL(T)> org::scalegraph::util::DistMemoryChunk<TPMGL(T)>
  org::scalegraph::io::NamedDistData::get(x10_int index) {
    
    //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
    x10::lang::Any* data_ = (__extension__ ({
        
        //#line 100 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10LocalDecl_c
        x10::array::Array<x10::lang::Any*>* this128013 = this->FMGL(data);
        
        //#line 453 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10_int i128012 = index;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
        x10::lang::Any* ret128014;
        
        //#line 452 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
        goto __ret128015; __ret128015: {
        {
            
            //#line 454 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
            if (x10aux::nullCheck(this128013)->FMGL(rail)) {
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret128014 = (x10aux::nullCheck(this128013)->FMGL(raw))->__apply(i128012);
                
                //#line 456 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret128015_end_;
            } else {
                
                //#line 458 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                if (true && !(x10aux::nullCheck(this128013)->FMGL(region)->contains(
                                i128012))) {
                    
                    //#line 459 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                    x10::array::Array<void>::raiseBoundsError(i128012);
                }
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                ret128014 = (x10aux::nullCheck(this128013)->FMGL(raw))->__apply(((x10_int) ((i128012) - (x10aux::nullCheck(this128013)->
                                                                                                           FMGL(layout_min0)))));
                
                //#line 461 "/usr/global/x10/x10-trunk-custom/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                goto __ret128015_end_;
            }
            
        }goto __ret128015_end_; __ret128015_end_: ;
        }
        ret128014;
        }))
        ;
        
    
    //#line 101 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10If_c
    if (x10aux::instanceof<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(data_))
    {
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": x10.ast.X10Return_c
        return x10aux::class_cast<org::scalegraph::util::DistMemoryChunk<TPMGL(T)> >(data_);
        
    }
    
    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/NamedDistData.x10": polyglot.ast.Throw_c
    x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10::lang::String::__plus(x10aux::makeStringLit("Type not match: "), x10aux::type_name(data_)))));
    }
    #endif // ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_get_1524
    #endif // ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_GENERICS
    #endif // __ORG_SCALEGRAPH_IO_NAMEDDISTDATA_H_NODEPS

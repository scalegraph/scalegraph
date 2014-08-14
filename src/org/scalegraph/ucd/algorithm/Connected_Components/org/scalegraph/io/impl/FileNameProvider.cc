/*************************************************/
/* START of FileNameProvider */
#include <org/scalegraph/io/impl/FileNameProvider.h>

#include <x10/lang/Iterable.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/io/File.h>
#include <x10/lang/String.h>
#include <org/scalegraph/io/FileReader.h>
#include <org/scalegraph/io/FileWriter.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Byte.h>
#include <x10/lang/IllegalArgumentException.h>
#include <org/scalegraph/io/impl/FileNameProvider__NumberScatteredFileNameProvider.h>
#include <org/scalegraph/io/impl/FileNameProvider__SingleFileNameProvider.h>
#include <org/scalegraph/io/impl/FileNameProvider__DirectoryScatteredFileNameProvider.h>
#include <x10/lang/Iterator.h>

//#line 21 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10FieldDecl_c

//#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::FileNameProvider::_constructor(org::scalegraph::util::SString path) {
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.AssignPropertyCall_c
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(path) = path;
}


//#line 25 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c

//#line 26 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c

//#line 27 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::FileNameProvider::mkdir() {
    
    //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    x10_int last_sep = (__extension__ ({
        
        //#line 29 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString this132194 = this->FMGL(path);
        
        //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Empty_c
        ;
        org::scalegraph::util::StringLastIndexOf_((this132194).FMGL(content), ((x10_char)'/'), ((x10_int)0));
    }))
    ;
    
    //#line 30 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10If_c
    if (((last_sep) > (((x10_int)0)))) {
        
        //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10Call_c
        (__extension__ ({
            
            //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
            x10::io::File* alloc130773 =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
            ;
            
            //#line 31 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
            (alloc130773)->::x10::io::File::_constructor(x10::lang::String::_make(reinterpret_cast<char*>((this->
                                                                                                             FMGL(path)->org::scalegraph::util::SString::substring(
                                                                                                             ((x10_int)0),
                                                                                                             last_sep)).c_str()), true));
            alloc130773;
        }))
        ->mkdirs();
    }
    
}

//#line 34 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c

//#line 35 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c

//#line 36 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c

//#line 113 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider* org::scalegraph::io::impl::FileNameProvider::create(
  org::scalegraph::util::SString path, x10_boolean isRead,
  x10_boolean scattered) {
    
    //#line 114 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    x10_int num_pos = (__extension__ ({
        
        //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString str132399 = (__extension__ ({
            
            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* str132395 = x10aux::makeStringLit("%d");
            (__extension__ ({
                
                //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString alloc132396 =
                   org::scalegraph::util::SString::_alloc();
                
                //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
                x10::lang::String* str132439 = str132395;
                
                //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
                alloc132396->FMGL(content) = org::scalegraph::util::StringFromX10String(str132439);
                alloc132396;
            }))
            ;
        }))
        ;
        org::scalegraph::util::StringIndexOf_((path).FMGL(content), (str132399).FMGL(content), ((x10_int)0));
    }))
    ;
    
    //#line 115 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10If_c
    if ((!x10aux::struct_equals(num_pos, ((x10_int)-1))))
    {
        
        //#line 116 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        x10_int last_sep = (__extension__ ({
            
            //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": polyglot.ast.Empty_c
            ;
            org::scalegraph::util::StringLastIndexOf_((path).FMGL(content), ((x10_char)'/'), ((x10_int)0));
        }))
        ;
        
        //#line 117 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10If_c
        if (((last_sep) > (num_pos))) {
            
            //#line 118 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": polyglot.ast.Throw_c
            x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Number position may not be on a directory name."))));
        }
        
        //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 120 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider* alloc130787 =
               ((new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider()))
            ;
            
            //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString path132441 = path;
            
            //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString path132440 = path132441;
            
            //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
            alloc130787->FMGL(path) = path132440;
            alloc130787;
        }))
        ;
        
    }
    
    //#line 122 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10If_c
    if (isRead) {
        
        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        x10::io::File* file =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
        ;
        
        //#line 123 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (file)->::x10::io::File::_constructor(x10::lang::String::_make(reinterpret_cast<char*>((path).c_str()), true));
        
        //#line 124 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10If_c
        if (file->isFile()) {
            
            //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 125 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider* alloc130788 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider()))
                ;
                
                //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString path132443 =
                  path;
                
                //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString path132442 =
                  path132443;
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130788->FMGL(path) = path132442;
                alloc130788;
            }))
            ;
            
        }
        
        //#line 127 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10If_c
        if (file->isDirectory()) {
            
            //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 128 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider* alloc130789 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider()))
                ;
                
                //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString path132445 =
                  path;
                
                //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString path132444 =
                  path132445;
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130789->FMGL(path) = path132444;
                alloc130789;
            }))
            ;
            
        }
        
        //#line 130 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": polyglot.ast.Throw_c
        x10aux::throwException(x10aux::nullCheck(x10::lang::IllegalArgumentException::_make(x10aux::makeStringLit("Provided path does not name a file nor a directory."))));
    } else {
        
        //#line 133 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10If_c
        if (scattered) {
            
            //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
            return (__extension__ ({
                
                //#line 134 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider* alloc130790 =
                   ((new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider()))
                ;
                
                //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString path132447 =
                  path;
                
                //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                org::scalegraph::util::SString path132446 =
                  path132447;
                
                //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
                alloc130790->FMGL(path) = path132446;
                alloc130790;
            }))
            ;
            
        }
        
        //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
        return (__extension__ ({
            
            //#line 136 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider* alloc130791 =
               ((new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider()))
            ;
            
            //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString path132449 = path;
            
            //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString path132448 = path132449;
            
            //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
            alloc130791->FMGL(path) = path132448;
            alloc130791;
        }))
        ;
        
    }
    
}

//#line 145 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider* org::scalegraph::io::impl::FileNameProvider::createForRead(
  org::scalegraph::util::SString path) {
    
    //#line 146 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return org::scalegraph::io::impl::FileNameProvider::create(
             path, true, false);
    
}

//#line 153 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider* org::scalegraph::io::impl::FileNameProvider::createForWrite(
  org::scalegraph::util::SString path, x10_boolean scattered) {
    
    //#line 154 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return org::scalegraph::io::impl::FileNameProvider::create(
             path, false, scattered);
    
}

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider* org::scalegraph::io::impl::FileNameProvider::org__scalegraph__io__impl__FileNameProvider____this__org__scalegraph__io__impl__FileNameProvider(
  ) {
    
    //#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 20 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::FileNameProvider::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(path));
    
}

void org::scalegraph::io::impl::FileNameProvider::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(path) = buf.read<org::scalegraph::util::SString>();
}

x10aux::RuntimeType org::scalegraph::io::impl::FileNameProvider::rtt;
void org::scalegraph::io::impl::FileNameProvider::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Iterable<org::scalegraph::util::SString> >()};
    rtt.initStageTwo("org.scalegraph.io.impl.FileNameProvider",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of FileNameProvider */
/*************************************************/
/*************************************************/
/* START of FileNameProvider$SingleFileNameProvider$SinglePathIterator */
#include <org/scalegraph/io/impl/FileNameProvider__SingleFileNameProvider__SinglePathIterator.h>

#include <org/scalegraph/io/impl/FileNameProvider__PathIterator.h>
#include <org/scalegraph/io/impl/FileNameProvider.h>
#include <x10/lang/Boolean.h>
x10::lang::Iterator<org::scalegraph::util::SString>::itable<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator >  org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_itable_0(&org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::equals, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::hasNext, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::hashCode, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::next, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::toString, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::typeName);
x10::lang::Any::itable<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator >  org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_itable_1(&org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::equals, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::hashCode, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::toString, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::typeName);
x10aux::itable_entry org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterator<org::scalegraph::util::SString> >, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator>())};

//#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_constructor(
  org::scalegraph::io::impl::FileNameProvider* th) {
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider__PathIterator* this132424 =
      this;
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider* th132425 = th;
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132424)->FMGL(index) = ((x10_int)0);
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132424)->FMGL(index) = ((x10_int)0);
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132424)->FMGL(th) = th132425;
    
    //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator* org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_make(
  org::scalegraph::io::impl::FileNameProvider* th) {
    org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator))) org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator();
    this_->_constructor(th);
    return this_;
}



//#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::hasNext(
  ) {
    
    //#line 62 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return (x10aux::struct_equals(this->FMGL(index), ((x10_int)0)));
    
}

//#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator*
  org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::org__scalegraph__io__impl__FileNameProvider__SingleFileNameProvider__SinglePathIterator____this__org__scalegraph__io__impl__FileNameProvider__SingleFileNameProvider__SinglePathIterator(
  ) {
    
    //#line 60 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider__PathIterator::_serialize_body(buf);
    
}

x10::lang::Reference* org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator))) org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider__PathIterator::_deserialize_body(buf);
    
}

x10aux::RuntimeType org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::rtt;
void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider__PathIterator>()};
    rtt.initStageTwo("org.scalegraph.io.impl.FileNameProvider.SingleFileNameProvider.SinglePathIterator",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of FileNameProvider$SingleFileNameProvider$SinglePathIterator */
/*************************************************/
/*************************************************/
/* START of FileNameProvider$PathIterator */
#include <org/scalegraph/io/impl/FileNameProvider__PathIterator.h>

#include <x10/lang/Iterator.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/io/impl/FileNameProvider.h>
#include <x10/lang/Boolean.h>
#include <x10/io/File.h>
#include <x10/lang/String.h>
x10::lang::Iterator<org::scalegraph::util::SString>::itable<org::scalegraph::io::impl::FileNameProvider__PathIterator >  org::scalegraph::io::impl::FileNameProvider__PathIterator::_itable_0(&org::scalegraph::io::impl::FileNameProvider__PathIterator::equals, &org::scalegraph::io::impl::FileNameProvider__PathIterator::hasNext, &org::scalegraph::io::impl::FileNameProvider__PathIterator::hashCode, &org::scalegraph::io::impl::FileNameProvider__PathIterator::next, &org::scalegraph::io::impl::FileNameProvider__PathIterator::toString, &org::scalegraph::io::impl::FileNameProvider__PathIterator::typeName);
x10::lang::Any::itable<org::scalegraph::io::impl::FileNameProvider__PathIterator >  org::scalegraph::io::impl::FileNameProvider__PathIterator::_itable_1(&org::scalegraph::io::impl::FileNameProvider__PathIterator::equals, &org::scalegraph::io::impl::FileNameProvider__PathIterator::hashCode, &org::scalegraph::io::impl::FileNameProvider__PathIterator::toString, &org::scalegraph::io::impl::FileNameProvider__PathIterator::typeName);
x10aux::itable_entry org::scalegraph::io::impl::FileNameProvider__PathIterator::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterator<org::scalegraph::util::SString> >, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider__PathIterator>())};

//#line 41 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10FieldDecl_c

//#line 42 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10FieldDecl_c

//#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::FileNameProvider__PathIterator::_constructor(
  org::scalegraph::io::impl::FileNameProvider* th) {
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.AssignPropertyCall_c
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider__PathIterator* this132421 =
      this;
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132421)->FMGL(index) = ((x10_int)0);
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(index) = ((x10_int)0);
    
    //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(th) = th;
}
org::scalegraph::io::impl::FileNameProvider__PathIterator* org::scalegraph::io::impl::FileNameProvider__PathIterator::_make(
  org::scalegraph::io::impl::FileNameProvider* th) {
    org::scalegraph::io::impl::FileNameProvider__PathIterator* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__PathIterator>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__PathIterator))) org::scalegraph::io::impl::FileNameProvider__PathIterator();
    this_->_constructor(th);
    return this_;
}



//#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::io::impl::FileNameProvider__PathIterator::hasNext(
  ) {
    
    //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
               
               //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
               x10::io::File* alloc130774 =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
               ;
               
               //#line 44 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
               (alloc130774)->::x10::io::File::_constructor(x10::lang::String::_make(reinterpret_cast<char*>((x10aux::nullCheck(this->
                                                                                                                                  FMGL(th))->fileName(
                                                                                                                this->
                                                                                                                  FMGL(index))).c_str()), true));
               alloc130774;
           }))
           ->exists();
    
}

//#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::io::impl::FileNameProvider__PathIterator::next(
  ) {
    
    //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return x10aux::nullCheck(this->FMGL(th))->fileName(((x10_int) (((__extension__ ({
                                                           
                                                           //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                                                           org::scalegraph::io::impl::FileNameProvider__PathIterator* x132352 =
                                                             this;
                                                           
                                                           //#line 45 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": polyglot.ast.Empty_c
                                                           ;
                                                           x10aux::nullCheck(x132352)->
                                                             FMGL(index) =
                                                             ((x10_int) ((x10aux::nullCheck(x132352)->
                                                                            FMGL(index)) + (((x10_int)1))));
                                                       }))
                                                       ) - (((x10_int)1)))));
    
}

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider__PathIterator*
  org::scalegraph::io::impl::FileNameProvider__PathIterator::org__scalegraph__io__impl__FileNameProvider__PathIterator____this__org__scalegraph__io__impl__FileNameProvider__PathIterator(
  ) {
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return this;
    
}

//#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::FileNameProvider__PathIterator::__fieldInitializers130735(
  ) {
    
    //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    this->FMGL(index) = ((x10_int)0);
}
const x10aux::serialization_id_t org::scalegraph::io::impl::FileNameProvider__PathIterator::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::FileNameProvider__PathIterator::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::FileNameProvider__PathIterator::_serialize_body(x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(th));
    buf.write(this->FMGL(index));
    
}

x10::lang::Reference* org::scalegraph::io::impl::FileNameProvider__PathIterator::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider__PathIterator* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__PathIterator>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__PathIterator))) org::scalegraph::io::impl::FileNameProvider__PathIterator();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::FileNameProvider__PathIterator::_deserialize_body(x10aux::deserialization_buffer& buf) {
    FMGL(th) = buf.read<org::scalegraph::io::impl::FileNameProvider*>();
    FMGL(index) = buf.read<x10_int>();
}

x10aux::RuntimeType org::scalegraph::io::impl::FileNameProvider__PathIterator::rtt;
void org::scalegraph::io::impl::FileNameProvider__PathIterator::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Iterator<org::scalegraph::util::SString> >()};
    rtt.initStageTwo("org.scalegraph.io.impl.FileNameProvider.PathIterator",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of FileNameProvider$PathIterator */
/*************************************************/
/*************************************************/
/* START of FileNameProvider$SingleFileNameProvider */
#include <org/scalegraph/io/impl/FileNameProvider__SingleFileNameProvider.h>

#include <org/scalegraph/io/impl/FileNameProvider.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/io/File.h>
#include <x10/lang/String.h>
#include <org/scalegraph/io/FileReader.h>
#include <org/scalegraph/io/FileWriter.h>
#include <org/scalegraph/io/impl/FileNameProvider__SingleFileNameProvider__SinglePathIterator.h>
#include <org/scalegraph/io/impl/FileNameProvider__PathIterator.h>
x10::lang::Iterable<org::scalegraph::util::SString>::itable<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider >  org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_itable_0(&org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::equals, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::hashCode, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::iterator, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::toString, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::typeName);
x10::lang::Any::itable<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider >  org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_itable_1(&org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::equals, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::hashCode, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::toString, &org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::typeName);
x10aux::itable_entry org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterable<org::scalegraph::util::SString> >, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider>())};

//#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_constructor(
  org::scalegraph::util::SString path) {
    
    //#line 50 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider* this132422 = this;
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString path132423 = path;
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132422)->FMGL(path) = path132423;
    
    //#line 49 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider* org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_make(
  org::scalegraph::util::SString path) {
    org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider();
    this_->_constructor(path);
    return this_;
}



//#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::isScattered(
  ) {
    
    //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return false;
    
}

//#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::fileName(
  x10_int index) {
    
    //#line 53 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return this->FMGL(path);
    
}

//#line 54 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::deleteFile(
  ) {
    
    //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10Call_c
    (__extension__ ({
        
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        x10::io::File* alloc130775 =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
        ;
        
        //#line 55 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc130775)->::x10::io::File::_constructor(x10::lang::String::_make(reinterpret_cast<char*>((this->
                                                                                                         FMGL(path)).c_str()), true));
        alloc130775;
    }))
    ->_kwd__delete();
}

//#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::FileReader* org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::openRead(
  x10_int index) {
    
    //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileReader* alloc130776 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileReader>(), 0, sizeof(org::scalegraph::io::FileReader))) org::scalegraph::io::FileReader()))
        ;
        
        //#line 57 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc130776)->::org::scalegraph::io::FileReader::_constructor(
          this->FMGL(path));
        alloc130776;
    }))
    ;
    
}

//#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::FileWriter* org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::openWrite(
  x10_int index) {
    
    //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileWriter* alloc130777 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileWriter>(), 0, sizeof(org::scalegraph::io::FileWriter))) org::scalegraph::io::FileWriter()))
        ;
        
        //#line 58 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc130777)->::org::scalegraph::io::FileWriter::_constructor(
          this->FMGL(path), ((x10_int)1));
        alloc130777;
    }))
    ;
    
}

//#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
x10::lang::Iterator<org::scalegraph::util::SString>* org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::iterator(
  ) {
    
    //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::Iterator<org::scalegraph::util::SString>*>((__extension__ ({
        
        //#line 64 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator* alloc130778 =
           ((new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator))) org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider__SinglePathIterator()))
        ;
        
        //#line 61 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::FileNameProvider* th132427 =
          reinterpret_cast<org::scalegraph::io::impl::FileNameProvider*>(this);
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::FileNameProvider* th132426 =
          th132427;
        
        //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130778->FMGL(index) = ((x10_int)0);
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130778->FMGL(index) = ((x10_int)0);
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130778->FMGL(th) = th132426;
        alloc130778;
    }))
    );
    
}

//#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider*
  org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::org__scalegraph__io__impl__FileNameProvider__SingleFileNameProvider____this__org__scalegraph__io__impl__FileNameProvider__SingleFileNameProvider(
  ) {
    
    //#line 48 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider::_serialize_body(buf);
    
}

x10::lang::Reference* org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider::_deserialize_body(buf);
    
}

x10aux::RuntimeType org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::rtt;
void org::scalegraph::io::impl::FileNameProvider__SingleFileNameProvider::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider>()};
    rtt.initStageTwo("org.scalegraph.io.impl.FileNameProvider.SingleFileNameProvider",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of FileNameProvider$SingleFileNameProvider */
/*************************************************/
/*************************************************/
/* START of FileNameProvider$NumberScatteredFileNameProvider */
#include <org/scalegraph/io/impl/FileNameProvider__NumberScatteredFileNameProvider.h>

#include <org/scalegraph/io/impl/FileNameProvider.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/io/File.h>
#include <x10/lang/String.h>
#include <org/scalegraph/io/FileReader.h>
#include <org/scalegraph/io/FileWriter.h>
#include <org/scalegraph/io/impl/FileNameProvider__PathIterator.h>
x10::lang::Iterable<org::scalegraph::util::SString>::itable<org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider >  org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_itable_0(&org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::equals, &org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::hashCode, &org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::iterator, &org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::toString, &org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::typeName);
x10::lang::Any::itable<org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider >  org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_itable_1(&org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::equals, &org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::hashCode, &org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::toString, &org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::typeName);
x10aux::itable_entry org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterable<org::scalegraph::util::SString> >, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider>())};

//#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_constructor(
  org::scalegraph::util::SString path) {
    
    //#line 69 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider* this132428 = this;
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString path132429 = path;
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132428)->FMGL(path) = path132429;
    
    //#line 68 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider* org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_make(
  org::scalegraph::util::SString path) {
    org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider();
    this_->_constructor(path);
    return this_;
}



//#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::isScattered(
  ) {
    
    //#line 71 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return true;
    
}

//#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::fileName(
  x10_int index) {
    
    //#line 72 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return org::scalegraph::util::StringFormat_((this->FMGL(path))->FMGL(content),index);
    
}

//#line 73 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::deleteFile(
  ) {
    
    //#line 74 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    x10_int index = ((x10_int)0);
    
    //#line 75 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Do_c
    do {
        
        //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        x10::io::File* file =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
        ;
        
        //#line 76 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (file)->::x10::io::File::_constructor(x10::lang::String::_make(reinterpret_cast<char*>((this->fileName(
                                                                                                  index)).c_str()), true));
        
        //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10If_c
        if (!(file->exists())) {
            
            //#line 77 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": polyglot.ast.Branch_c
            break;
        }
        
        //#line 78 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10Call_c
        file->_kwd__delete();
    } while (true);
    
}

//#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::FileReader* org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::openRead(
  x10_int index) {
    
    //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileReader* alloc130779 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileReader>(), 0, sizeof(org::scalegraph::io::FileReader))) org::scalegraph::io::FileReader()))
        ;
        
        //#line 81 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc130779)->::org::scalegraph::io::FileReader::_constructor(
          this->fileName(index));
        alloc130779;
    }))
    ;
    
}

//#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::FileWriter* org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::openWrite(
  x10_int index) {
    
    //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileWriter* alloc130780 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileWriter>(), 0, sizeof(org::scalegraph::io::FileWriter))) org::scalegraph::io::FileWriter()))
        ;
        
        //#line 82 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc130780)->::org::scalegraph::io::FileWriter::_constructor(
          this->fileName(index), ((x10_int)1));
        alloc130780;
    }))
    ;
    
}

//#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
x10::lang::Iterator<org::scalegraph::util::SString>* org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::iterator(
  ) {
    
    //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::Iterator<org::scalegraph::util::SString>*>((__extension__ ({
        
        //#line 83 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::FileNameProvider__PathIterator* alloc130781 =
           ((new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__PathIterator>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__PathIterator))) org::scalegraph::io::impl::FileNameProvider__PathIterator()))
        ;
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::FileNameProvider* th132430 =
          reinterpret_cast<org::scalegraph::io::impl::FileNameProvider*>(this);
        
        //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130781->FMGL(index) = ((x10_int)0);
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130781->FMGL(index) = ((x10_int)0);
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130781->FMGL(th) = th132430;
        alloc130781;
    }))
    );
    
}

//#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider*
  org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::org__scalegraph__io__impl__FileNameProvider__NumberScatteredFileNameProvider____this__org__scalegraph__io__impl__FileNameProvider__NumberScatteredFileNameProvider(
  ) {
    
    //#line 67 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider::_serialize_body(buf);
    
}

x10::lang::Reference* org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider::_deserialize_body(buf);
    
}

x10aux::RuntimeType org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::rtt;
void org::scalegraph::io::impl::FileNameProvider__NumberScatteredFileNameProvider::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider>()};
    rtt.initStageTwo("org.scalegraph.io.impl.FileNameProvider.NumberScatteredFileNameProvider",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of FileNameProvider$NumberScatteredFileNameProvider */
/*************************************************/
/*************************************************/
/* START of FileNameProvider$DirectoryScatteredFileNameProvider */
#include <org/scalegraph/io/impl/FileNameProvider__DirectoryScatteredFileNameProvider.h>

#include <org/scalegraph/io/impl/FileNameProvider.h>
#include <org/scalegraph/util/SString.h>
#include <x10/lang/Boolean.h>
#include <x10/lang/Int.h>
#include <x10/lang/String.h>
#include <org/scalegraph/util/MemoryChunk.h>
#include <x10/lang/Byte.h>
#include <org/scalegraph/util/MemoryPointer.h>
#include <x10/io/File.h>
#include <x10/array/Array.h>
#include <org/scalegraph/io/FileReader.h>
#include <org/scalegraph/io/FileWriter.h>
#include <org/scalegraph/io/impl/FileNameProvider__PathIterator.h>
x10::lang::Iterable<org::scalegraph::util::SString>::itable<org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider >  org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_itable_0(&org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::equals, &org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::hashCode, &org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::iterator, &org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::toString, &org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::typeName);
x10::lang::Any::itable<org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider >  org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_itable_1(&org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::equals, &org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::hashCode, &org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::toString, &org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::typeName);
x10aux::itable_entry org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_itables[3] = {x10aux::itable_entry(&x10aux::getRTT<x10::lang::Iterable<org::scalegraph::util::SString> >, &_itable_0), x10aux::itable_entry(&x10aux::getRTT<x10::lang::Any>, &_itable_1), x10aux::itable_entry(NULL, (void*)x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider>())};

//#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorDecl_c
void org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_constructor(
  org::scalegraph::util::SString path) {
    
    //#line 89 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::io::impl::FileNameProvider* this132431 = this;
    
    //#line 22 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    org::scalegraph::util::SString path132432 = path;
    
    //#line 23 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
    x10aux::nullCheck(this132431)->FMGL(path) = path132432;
    
    //#line 88 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.AssignPropertyCall_c
    
}
org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider* org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_make(
  org::scalegraph::util::SString path) {
    org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider();
    this_->_constructor(path);
    return this_;
}



//#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
x10_boolean org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::isScattered(
  ) {
    
    //#line 91 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return true;
    
}

//#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::util::SString org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::fileName(
  x10_int index) {
    
    //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return org::scalegraph::util::StringFormat_(((__extension__ ({
        
        //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
        x10::lang::String* str132386 = x10aux::makeStringLit("%s/part-%05d");
        (__extension__ ({
            
            //#line 70 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            org::scalegraph::util::SString alloc132387 = 
            org::scalegraph::util::SString::_alloc();
            
            //#line 51 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": x10.ast.X10LocalDecl_c
            x10::lang::String* str132433 = str132386;
            
            //#line 52 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/util/SString.x10": Eval of x10.ast.X10FieldAssign_c
            alloc132387->FMGL(content) = org::scalegraph::util::StringFromX10String(str132433);
            alloc132387;
        }))
        ;
    }))
    )->FMGL(content),(__extension__ ({
        
        //#line 92 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::util::SString this132390 = this->
                                                      FMGL(path);
        org::scalegraph::util::StringCstr_(this132390);
    }))
    ,index);
    
}

//#line 93 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::mkdir(
  ) {
    
    //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10Call_c
    (__extension__ ({
        
        //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        x10::io::File* alloc130782 =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
        ;
        
        //#line 94 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc130782)->::x10::io::File::_constructor(x10::lang::String::_make(reinterpret_cast<char*>((this->
                                                                                                         FMGL(path)).c_str()), true));
        alloc130782;
    }))
    ->mkdirs();
}

//#line 96 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
void org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::deleteFile(
  ) {
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    x10::io::File* dir =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
    ;
    
    //#line 97 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
    (dir)->::x10::io::File::_constructor(x10::lang::String::_make(reinterpret_cast<char*>((this->
                                                                                             FMGL(path)).c_str()), true));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
    x10_int i130793max132435 = ((x10_int) ((x10aux::nullCheck(dir->list())->
                                              FMGL(size)) - (((x10_int)1))));
    
    //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": polyglot.ast.For_c
    {
        x10_int i132436;
        for (
             //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
             i132436 = ((x10_int)0); ((i132436) <= (i130793max132435));
             
             //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10LocalAssign_c
             i132436 = ((x10_int) ((i132436) + (((x10_int)1)))))
        {
            
            //#line 98 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
            x10_int i132437 = i132436;
            
            //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10Call_c
            (__extension__ ({
                
                //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
                x10::io::File* alloc132434 =  ((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
                ;
                
                //#line 99 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
                (alloc132434)->::x10::io::File::_constructor(
                  x10::lang::String::_make(reinterpret_cast<char*>((this->fileName(
                                                                      i132437)).c_str()), true));
                alloc132434;
            }))
            ->_kwd__delete();
        }
    }
    
}

//#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::FileReader* org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::openRead(
  x10_int index) {
    
    //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileReader* alloc130784 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileReader>(), 0, sizeof(org::scalegraph::io::FileReader))) org::scalegraph::io::FileReader()))
        ;
        
        //#line 102 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc130784)->::org::scalegraph::io::FileReader::_constructor(
          this->fileName(index));
        alloc130784;
    }))
    ;
    
}

//#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::FileWriter* org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::openWrite(
  x10_int index) {
    
    //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return (__extension__ ({
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::FileWriter* alloc130785 =  ((new (memset(x10aux::alloc<org::scalegraph::io::FileWriter>(), 0, sizeof(org::scalegraph::io::FileWriter))) org::scalegraph::io::FileWriter()))
        ;
        
        //#line 103 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10ConstructorCall_c
        (alloc130785)->::org::scalegraph::io::FileWriter::_constructor(
          this->fileName(index), ((x10_int)1));
        alloc130785;
    }))
    ;
    
}

//#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
x10::lang::Iterator<org::scalegraph::util::SString>* org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::iterator(
  ) {
    
    //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return reinterpret_cast<x10::lang::Iterator<org::scalegraph::util::SString>*>((__extension__ ({
        
        //#line 104 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::FileNameProvider__PathIterator* alloc130786 =
           ((new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__PathIterator>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__PathIterator))) org::scalegraph::io::impl::FileNameProvider__PathIterator()))
        ;
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10LocalDecl_c
        org::scalegraph::io::impl::FileNameProvider* th132438 =
          reinterpret_cast<org::scalegraph::io::impl::FileNameProvider*>(this);
        
        //#line 40 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130786->FMGL(index) = ((x10_int)0);
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130786->FMGL(index) = ((x10_int)0);
        
        //#line 43 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": Eval of x10.ast.X10FieldAssign_c
        alloc130786->FMGL(th) = th132438;
        alloc130786;
    }))
    );
    
}

//#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10MethodDecl_c
org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider*
  org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::org__scalegraph__io__impl__FileNameProvider__DirectoryScatteredFileNameProvider____this__org__scalegraph__io__impl__FileNameProvider__DirectoryScatteredFileNameProvider(
  ) {
    
    //#line 87 "/nfs/home/vinodmadaan/ScaleGraph_Stable_Version/scalegraph/src/org/scalegraph/io/impl/FileNameProvider.x10": x10.ast.X10Return_c
    return this;
    
}
const x10aux::serialization_id_t org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_serialize_body(x10aux::serialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider::_serialize_body(buf);
    
}

x10::lang::Reference* org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_deserializer(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider* this_ = new (memset(x10aux::alloc<org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider>(), 0, sizeof(org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider))) org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_deserialize_body(x10aux::deserialization_buffer& buf) {
    org::scalegraph::io::impl::FileNameProvider::_deserialize_body(buf);
    
}

x10aux::RuntimeType org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::rtt;
void org::scalegraph::io::impl::FileNameProvider__DirectoryScatteredFileNameProvider::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<org::scalegraph::io::impl::FileNameProvider>()};
    rtt.initStageTwo("org.scalegraph.io.impl.FileNameProvider.DirectoryScatteredFileNameProvider",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of FileNameProvider$DirectoryScatteredFileNameProvider */
/*************************************************/

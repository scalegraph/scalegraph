/*************************************************/
/* START of FileSplitter */
#include <test/scalegraph/patternmatching/FileSplitter.h>

#include <x10/lang/Object.h>
#include <x10/lang/String.h>
#include <org/scalegraph/util/DirectoryInfo.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/io/FileReader.h>
#include <x10/io/File.h>
#include <x10/io/Reader.h>
#include <x10/lang/Int.h>
#include <x10/array/Array.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/array/Region.h>
#include <x10/io/FileWriter.h>
#include <x10/io/OutputStreamWriter.h>
#include <x10/lang/Byte.h>
#include <x10/io/IOException.h>

//#line 11 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10MethodDecl_c
void test::scalegraph::patternmatching::FileSplitter::split(x10aux::ref<x10::lang::String> fileName,
                                                            x10aux::ref<x10::lang::String> outDir) {
    
    //#line 12 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10If_c
    if (DirectoryInfoDriver::exists(outDir)) {
        
        //#line 13 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10Call_c
        x10::io::Console::FMGL(OUT)->x10::io::Printer::println(x10aux::string_utils::lit("The sample data directory exists"));
    } else {
        
        //#line 15 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10Call_c
        DirectoryInfoDriver::makedir(outDir);
    }
    
    //#line 18 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::io::FileReader> reader =  x10aux::ref<x10::io::FileReader>((new (memset(x10aux::alloc<x10::io::FileReader>(), 0, sizeof(x10::io::FileReader))) x10::io::FileReader()))
    ;
    
    //#line 18 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorCall_c
    (reader)->::x10::io::FileReader::_constructor((__extension__ ({
                                                      
                                                      //#line 18 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                                                      x10aux::ref<x10::io::File> alloc13829 =
                                                         x10aux::ref<x10::io::File>((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
                                                      ;
                                                      
                                                      //#line 18 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorCall_c
                                                      (alloc13829)->::x10::io::File::_constructor(
                                                        fileName);
                                                      alloc13829;
                                                  }))
                                                  );
    
    //#line 19 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::lang::String> line = x10aux::string_utils::lit("");
    
    //#line 20 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::lang::String> totalContent = x10aux::string_utils::lit("");
    
    //#line 21 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::lang::String> outName = x10aux::string_utils::lit("");
    
    //#line 22 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
    x10_boolean firstFlag = true;
    
    //#line 24 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10While_c
    while (true) {
        
        //#line 25 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": polyglot.ast.Try_c
        try {
            
            //#line 26 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
            line = x10aux::nullCheck(reader)->readLine();
            
            //#line 28 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10If_c
            if ((!x10aux::struct_equals((line)->indexOf(x10aux::string_utils::lit("t #")),
                                        ((x10_int)-1)))) {
                
                //#line 29 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10If_c
                if (firstFlag) {
                    
                    //#line 30 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                    x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > strArr =
                      x10::lang::StringHelper::split(x10aux::string_utils::lit(" "), line);
                    
                    //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                    outName = ((((outDir) + (x10aux::string_utils::lit("/")))) + ((__extension__ ({
                        
                        //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > p__22095 =
                          strArr;
                        
                        //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                        x10_int p__22096 = ((x10_int) ((x10aux::nullCheck(strArr)->
                                                          FMGL(size)) - (((x10_int)1))));
                        
                        //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::lang::String> ret22102;
                        
                        //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > x__22137 =
                          p__22095;
                        
                        //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                        x10_int x__i22138 = p__22096;
                        
                        //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10If_c
                        if (!((x10aux::struct_equals(x10aux::nullCheck(x__22137)->
                                                       FMGL(rank),
                                                     ((x10_int)1)))))
                        {
                            
                            //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10If_c
                            if (true) {
                                
                                //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": polyglot.ast.Throw_c
                                x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$0.rank == 1)"))));
                            }
                            
                        }
                        
                        //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                        ret22102 = (__extension__ ({
                            
                            //#line 416 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10_int i22139 = x__i22138;
                            
                            //#line 415 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::lang::String> ret22140;
                            
                            //#line 415 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                            goto __ret22141; __ret22141: {
                            {
                                
                                //#line 417 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                if (x10aux::nullCheck(x__22137)->
                                      FMGL(rail)) {
                                    
                                    //#line 419 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret22140 = (x10aux::nullCheck(x__22137)->
                                                  FMGL(raw))->__apply(i22139);
                                    
                                    //#line 419 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret22141_end_;
                                } else {
                                    
                                    //#line 421 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (true && !(x10aux::nullCheck(x__22137)->
                                                    FMGL(region)->contains(
                                                    i22139)))
                                    {
                                        
                                        //#line 422 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                        x10::array::Array<void>::raiseBoundsError(
                                          i22139);
                                    }
                                    
                                    //#line 424 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                    ret22140 = (x10aux::nullCheck(x__22137)->
                                                  FMGL(raw))->__apply(((x10_int) ((i22139) - (x10aux::nullCheck(x__22137)->
                                                                                                FMGL(layout_min0)))));
                                    
                                    //#line 424 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                    goto __ret22141_end_;
                                }
                                
                            }goto __ret22141_end_; __ret22141_end_: ;
                            }
                            ret22140;
                            }))
                            ;
                        ret22102;
                        }))
                        ));
                    
                    //#line 32 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                    firstFlag = false;
                    } else {
                        
                        //#line 34 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::io::File> outFile =
                           x10aux::ref<x10::io::File>((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
                        ;
                        
                        //#line 34 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorCall_c
                        (outFile)->::x10::io::File::_constructor(
                          outName);
                        
                        //#line 35 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::io::FileWriter> writer;
                        
                        //#line 37 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                        writer = (__extension__ ({
                            
                            //#line 37 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::io::FileWriter> alloc13830 =
                               x10aux::ref<x10::io::FileWriter>((new (memset(x10aux::alloc<x10::io::FileWriter>(), 0, sizeof(x10::io::FileWriter))) x10::io::FileWriter()))
                            ;
                            
                            //#line 37 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorCall_c
                            (alloc13830)->::x10::io::FileWriter::_constructor(
                              outFile);
                            alloc13830;
                        }))
                        ;
                        
                        //#line 38 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(writer)->write(
                          (totalContent)->bytes());
                        
                        //#line 39 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10Call_c
                        x10aux::nullCheck(writer)->close();
                        
                        //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                        totalContent = x10aux::string_utils::lit("");
                        
                        //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                        x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > strArr =
                          x10::lang::StringHelper::split(x10aux::string_utils::lit(" "), line);
                        
                        //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                        outName = ((((outDir) + (x10aux::string_utils::lit("/")))) + ((__extension__ ({
                            
                            //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > p__22128 =
                              strArr;
                            
                            //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                            x10_int p__22129 = ((x10_int) ((x10aux::nullCheck(strArr)->
                                                              FMGL(size)) - (((x10_int)1))));
                            
                            //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::lang::String> ret22135;
                            
                            //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > x__22142 =
                              p__22128;
                            
                            //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                            x10_int x__i22143 = p__22129;
                            
                            //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10If_c
                            if (!((x10aux::struct_equals(x10aux::nullCheck(x__22142)->
                                                           FMGL(rank),
                                                         ((x10_int)1)))))
                            {
                                
                                //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10If_c
                                if (true) {
                                    
                                    //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": polyglot.ast.Throw_c
                                    x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$0.rank == 1)"))));
                                }
                                
                            }
                            
                            //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                            ret22135 = (__extension__ ({
                                
                                //#line 416 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10_int i22144 = x__i22143;
                                
                                //#line 415 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                x10aux::ref<x10::lang::String> ret22145;
                                
                                //#line 415 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Labeled_c
                                goto __ret22146; __ret22146: {
                                {
                                    
                                    //#line 417 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                    if (x10aux::nullCheck(x__22142)->
                                          FMGL(rail)) {
                                        
                                        //#line 419 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret22145 = (x10aux::nullCheck(x__22142)->
                                                      FMGL(raw))->__apply(i22144);
                                        
                                        //#line 419 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                        goto __ret22146_end_;
                                    } else {
                                        
                                        //#line 421 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                        if (true && !(x10aux::nullCheck(x__22142)->
                                                        FMGL(region)->contains(
                                                        i22144)))
                                        {
                                            
                                            //#line 422 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                            x10::array::Array<void>::raiseBoundsError(
                                              i22144);
                                        }
                                        
                                        //#line 424 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                        ret22145 = (x10aux::nullCheck(x__22142)->
                                                      FMGL(raw))->__apply(((x10_int) ((i22144) - (x10aux::nullCheck(x__22142)->
                                                                                                    FMGL(layout_min0)))));
                                        
                                        //#line 424 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.Branch_c
                                        goto __ret22146_end_;
                                    }
                                    
                                }goto __ret22146_end_; __ret22146_end_: ;
                                }
                                ret22145;
                                }))
                                ;
                            ret22135;
                            }))
                            ));
                        }
                        
                    
                    //#line 46 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": polyglot.ast.Branch_c
                    continue;
                } else {
                    
                    //#line 48 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                    totalContent = ((totalContent) + (((line) + (x10aux::string_utils::lit("\n")))));
                }
                
            }
            catch (x10aux::__ref& __ref__3) {
                x10aux::ref<x10::lang::Throwable>& __exc__ref__3 = (x10aux::ref<x10::lang::Throwable>&)__ref__3;
                if (x10aux::instanceof<x10aux::ref<x10::io::IOException> >(__exc__ref__3)) {
                    x10aux::ref<x10::io::IOException> id__0 =
                      static_cast<x10aux::ref<x10::io::IOException> >(__exc__ref__3);
                    {
                        
                        //#line 51 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10If_c
                        if ((!x10aux::struct_equals((totalContent)->length(),
                                                    ((x10_int)0))))
                        {
                            
                            //#line 52 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::io::File> outFile =
                               x10aux::ref<x10::io::File>((new (memset(x10aux::alloc<x10::io::File>(), 0, sizeof(x10::io::File))) x10::io::File()))
                            ;
                            
                            //#line 52 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorCall_c
                            (outFile)->::x10::io::File::_constructor(
                              outName);
                            
                            //#line 53 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                            x10aux::ref<x10::io::FileWriter> writer;
                            
                            //#line 55 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10LocalAssign_c
                            writer = (__extension__ ({
                                
                                //#line 55 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10LocalDecl_c
                                x10aux::ref<x10::io::FileWriter> alloc13831 =
                                   x10aux::ref<x10::io::FileWriter>((new (memset(x10aux::alloc<x10::io::FileWriter>(), 0, sizeof(x10::io::FileWriter))) x10::io::FileWriter()))
                                ;
                                
                                //#line 55 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorCall_c
                                (alloc13831)->::x10::io::FileWriter::_constructor(
                                  outFile);
                                alloc13831;
                            }))
                            ;
                            
                            //#line 56 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(writer)->write(
                              (totalContent)->bytes());
                            
                            //#line 57 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": Eval of x10.ast.X10Call_c
                            x10aux::nullCheck(writer)->close();
                        }
                        
                        //#line 59 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": polyglot.ast.Branch_c
                        break;
                    }
                } else
                throw;
            }
        }
        
    }
    
    //#line 10 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10MethodDecl_c
    x10aux::ref<test::scalegraph::patternmatching::FileSplitter>
      test::scalegraph::patternmatching::FileSplitter::test__scalegraph__patternmatching__FileSplitter____test__scalegraph__patternmatching__FileSplitter__this(
      ) {
        
        //#line 10 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10Return_c
        return ((x10aux::ref<test::scalegraph::patternmatching::FileSplitter>)this);
        
    }
    
    //#line 10 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorDecl_c
    void test::scalegraph::patternmatching::FileSplitter::_constructor(
      ) {
        
        //#line 10 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorCall_c
        (((x10aux::ref<x10::lang::Object>)this))->::x10::lang::Object::_constructor();
        
        //#line 10 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.AssignPropertyCall_c
        
    }
    x10aux::ref<test::scalegraph::patternmatching::FileSplitter> test::scalegraph::patternmatching::FileSplitter::_make(
      ) {
        x10aux::ref<test::scalegraph::patternmatching::FileSplitter> this_ = new (memset(x10aux::alloc<test::scalegraph::patternmatching::FileSplitter>(), 0, sizeof(test::scalegraph::patternmatching::FileSplitter))) test::scalegraph::patternmatching::FileSplitter();
        this_->_constructor();
        return this_;
    }
    
    
    const x10aux::serialization_id_t test::scalegraph::patternmatching::FileSplitter::_serialization_id = 
        x10aux::DeserializationDispatcher::addDeserializer(test::scalegraph::patternmatching::FileSplitter::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);
    
    void test::scalegraph::patternmatching::FileSplitter::_serialize_body(x10aux::serialization_buffer& buf) {
        x10::lang::Object::_serialize_body(buf);
        
    }
    
    x10aux::ref<x10::lang::Reference> test::scalegraph::patternmatching::FileSplitter::_deserializer(x10aux::deserialization_buffer& buf) {
        x10aux::ref<test::scalegraph::patternmatching::FileSplitter> this_ = new (memset(x10aux::alloc<test::scalegraph::patternmatching::FileSplitter>(), 0, sizeof(test::scalegraph::patternmatching::FileSplitter))) test::scalegraph::patternmatching::FileSplitter();
        buf.record_reference(this_);
        this_->_deserialize_body(buf);
        return this_;
    }
    
    void test::scalegraph::patternmatching::FileSplitter::_deserialize_body(x10aux::deserialization_buffer& buf) {
        x10::lang::Object::_deserialize_body(buf);
        
    }
    
    
x10aux::RuntimeType test::scalegraph::patternmatching::FileSplitter::rtt;
void test::scalegraph::patternmatching::FileSplitter::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    rtt.initStageTwo("test.scalegraph.patternmatching.FileSplitter",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}
/* END of FileSplitter */
/*************************************************/

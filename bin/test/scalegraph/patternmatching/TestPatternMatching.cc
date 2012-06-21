/*************************************************/
/* START of TestPatternMatching */
#include <test/scalegraph/patternmatching/TestPatternMatching.h>

#include <x10/lang/Object.h>
#include <x10/array/Array.h>
#include <x10/lang/String.h>
#include <org/scalegraph/patternmatching/PatternMatching.h>
#include <test/scalegraph/patternmatching/FileSplitter.h>
#include <org/scalegraph/util/DirectoryInfo.h>
#include <x10/util/ArrayList.h>
#include <org/scalegraph/graph/AttributedGraph.h>
#include <x10/lang/Iterator.h>
#include <x10/array/Point.h>
#include <x10/array/Region.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/compiler/CompilerFlags.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/util/IndexedMemoryChunk.h>
#include <x10/lang/Int.h>
#include <org/scalegraph/io/WeightedGraphReader.h>
#include <org/scalegraph/patternmatching/PatternMatchingResult.h>

//#line 21 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10MethodDecl_c
void test::scalegraph::patternmatching::TestPatternMatching::main(x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > args) {
    
    //#line 27 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<org::scalegraph::patternmatching::PatternMatching> obj = 
    x10aux::ref<org::scalegraph::patternmatching::PatternMatching>((new (memset(x10aux::alloc<org::scalegraph::patternmatching::PatternMatching>(), 0, sizeof(org::scalegraph::patternmatching::PatternMatching))) org::scalegraph::patternmatching::PatternMatching()))
    ;
    
    //#line 27 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10ConstructorCall_c
    (obj)->::org::scalegraph::patternmatching::PatternMatching::_constructor();
    
    //#line 30 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::lang::String> dataDir = x10aux::string_utils::lit("./temp_graphs");
    
    //#line 31 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<test::scalegraph::patternmatching::FileSplitter> splitter =
       x10aux::ref<test::scalegraph::patternmatching::FileSplitter>((new (memset(x10aux::alloc<test::scalegraph::patternmatching::FileSplitter>(), 0, sizeof(test::scalegraph::patternmatching::FileSplitter))) test::scalegraph::patternmatching::FileSplitter()))
    ;
    
    //#line 10 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/FileSplitter.x10": x10.ast.X10ConstructorCall_c
    (splitter)->::x10::lang::Object::_constructor();
    
    //#line 33 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(splitter)->split(x10aux::string_utils::lit("/nfs/data1/scalegraph/data/pattern-dataset/GRAPH_int_toy2.data"),
                                       dataDir);
    
    //#line 35 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > list =
      DirectoryInfoDriver::listdir(dataDir);
    
    //#line 37 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
    x10aux::ref<x10::util::ArrayList<x10aux::ref<org::scalegraph::graph::AttributedGraph> > > graphlist =
       x10aux::ref<x10::util::ArrayList<x10aux::ref<org::scalegraph::graph::AttributedGraph> > >((new (memset(x10aux::alloc<x10::util::ArrayList<x10aux::ref<org::scalegraph::graph::AttributedGraph> > >(), 0, sizeof(x10::util::ArrayList<x10aux::ref<org::scalegraph::graph::AttributedGraph> >))) x10::util::ArrayList<x10aux::ref<org::scalegraph::graph::AttributedGraph> >()))
    ;
    
    //#line 37 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10ConstructorCall_c
    (graphlist)->::x10::util::ArrayList<x10aux::ref<org::scalegraph::graph::AttributedGraph> >::_constructor();
    
    //#line 39 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": polyglot.ast.For_c
    {
        x10aux::ref<x10::lang::Iterator<x10aux::ref<x10::array::Point> > > item13557;
        for (
             //#line 39 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
             item13557 = x10aux::nullCheck(list)->FMGL(region)->iterator();
             x10::lang::Iterator<x10aux::ref<x10::array::Point> >::hasNext(x10aux::nullCheck(item13557));
             ) {
            
            //#line 39 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<x10::array::Point> item = x10::lang::Iterator<x10aux::ref<x10::array::Point> >::next(x10aux::nullCheck(item13557));
            
            //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": Eval of x10.ast.X10Call_c
            x10::io::Console::FMGL(OUT)->x10::io::Printer::println(
              ((x10aux::string_utils::lit("Reading file : ")) + ((__extension__ ({
                  
                  //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                  x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > p__21286 =
                    list;
                  
                  //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                  x10aux::ref<x10::array::Point> p__21287 =
                    item;
                  
                  //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                  x10aux::ref<x10::lang::String> ret21308;
                  
                  //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                  x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > x__21785 =
                    p__21286;
                  
                  //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                  x10aux::ref<x10::array::Point> x__pt21786 =
                    p__21287;
                  
                  //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10If_c
                  if (!((x10aux::struct_equals(x10aux::nullCheck(x__pt21786)->
                                                 FMGL(rank),
                                               x10aux::nullCheck(x__21785)->
                                                 FMGL(rank)))))
                  {
                      
                      //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10If_c
                      if (true) {
                          
                          //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": polyglot.ast.Throw_c
                          x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$pt.rank == x$0.rank)"))));
                      }
                      
                  }
                  
                  //#line 40 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": Eval of x10.ast.X10LocalAssign_c
                  ret21308 = (__extension__ ({
                      
                      //#line 496 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10aux::ref<x10::array::Point> pt21787 =
                        x__pt21786;
                      
                      //#line 496 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                      x10aux::ref<x10::lang::String> ret21788;
                      
                      //#line 497 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                      if (true && !(x10aux::nullCheck(x__21785)->
                                      FMGL(region)->contains(
                                      pt21787))) {
                          
                          //#line 498 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                          x10::array::Array<void>::raiseBoundsError(
                            pt21787);
                      }
                      
                      //#line 500 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                      ret21788 = (x10aux::nullCheck(x__21785)->
                                    FMGL(raw))->__apply((__extension__ ({
                          
                          //#line 1224 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10aux::ref<x10::array::Point> pt21783 =
                            pt21787;
                          
                          //#line 1224 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int ret21784;
                          
                          //#line 1225 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                          x10_int offset21782 = ((x10_int) ((x10aux::nullCheck(pt21783)->x10::array::Point::__apply(
                                                               ((x10_int)0))) - (x10aux::nullCheck(x__21785)->
                                                                                   FMGL(layout_min0))));
                          
                          //#line 1226 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                          if (((x10aux::nullCheck(pt21783)->
                                  FMGL(rank)) > (((x10_int)1))))
                          {
                              
                              //#line 1227 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                              offset21782 = ((x10_int) ((((x10_int) ((((x10_int) ((offset21782) * (x10aux::nullCheck(x__21785)->
                                                                                                     FMGL(layout_stride1))))) + (x10aux::nullCheck(pt21783)->x10::array::Point::__apply(
                                                                                                                                   ((x10_int)1)))))) - (x10aux::nullCheck(x__21785)->
                                                                                                                                                          FMGL(layout_min1))));
                              
                              //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                              x10_int i19669max21779 = ((x10_int) ((x10aux::nullCheck(pt21783)->
                                                                      FMGL(rank)) - (((x10_int)1))));
                              
                              //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
                              {
                                  x10_int i21780;
                                  for (
                                       //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                       i21780 = ((x10_int)2);
                                       ((i21780) <= (i19669max21779));
                                       
                                       //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                       i21780 = ((x10_int) ((i21780) + (((x10_int)1)))))
                                  {
                                      
                                      //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                      x10_int i21781 = i21780;
                                      
                                      //#line 1229 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                      offset21782 = ((x10_int) ((((x10_int) ((((x10_int) ((offset21782) * ((__extension__ ({
                                          
                                          //#line 1229 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                          x10aux::ref<x10::array::Array<x10_int> > this21773 =
                                            x10aux::nullCheck(x__21785)->
                                              FMGL(layout);
                                          
                                          //#line 416 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                          x10_int i21774 =
                                            ((x10_int) ((((x10_int)2)) * (((x10_int) ((i21781) - (((x10_int)2)))))));
                                          
                                          //#line 415 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                          x10_int ret21775;
                                          
                                          //#line 419 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret21775 = (x10aux::nullCheck(this21773)->
                                                        FMGL(raw))->__apply(i21774);
                                          ret21775;
                                      }))
                                      )))) + (x10aux::nullCheck(pt21783)->x10::array::Point::__apply(
                                                i21781))))) - ((__extension__ ({
                                          
                                          //#line 1229 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                          x10aux::ref<x10::array::Array<x10_int> > this21776 =
                                            x10aux::nullCheck(x__21785)->
                                              FMGL(layout);
                                          
                                          //#line 416 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                          x10_int i21777 =
                                            ((x10_int) ((((x10_int) ((((x10_int)2)) * (((x10_int) ((i21781) - (((x10_int)2)))))))) + (((x10_int)1))));
                                          
                                          //#line 415 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                          x10_int ret21778;
                                          
                                          //#line 419 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                          ret21778 = (x10aux::nullCheck(this21776)->
                                                        FMGL(raw))->__apply(i21777);
                                          ret21778;
                                      }))
                                      )));
                                  }
                              }
                              
                          }
                          
                          //#line 1232 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                          ret21784 = offset21782;
                          ret21784;
                      }))
                      );
                      ret21788;
                  }))
                  ;
                  ret21308;
              }))
              )));
            
            //#line 41 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<org::scalegraph::io::WeightedGraphReader> rdr =
               x10aux::ref<org::scalegraph::io::WeightedGraphReader>((new (memset(x10aux::alloc<org::scalegraph::io::WeightedGraphReader>(), 0, sizeof(org::scalegraph::io::WeightedGraphReader))) org::scalegraph::io::WeightedGraphReader()))
            ;
            
            //#line 23 "/nfs/home/kansyun/workspace/ScaleGraph/src/org/scalegraph/io/WeightedGraphReader.x10": x10.ast.X10ConstructorCall_c
            (rdr)->::x10::lang::Object::_constructor();
            
            //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
            x10aux::ref<org::scalegraph::graph::AttributedGraph> attrib =
              x10aux::nullCheck(rdr)->loadFromFile((__extension__ ({
                                                       
                                                       //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                                                       x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > p__21749 =
                                                         list;
                                                       
                                                       //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                                                       x10aux::ref<x10::array::Point> p__21750 =
                                                         item;
                                                       
                                                       //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                                                       x10aux::ref<x10::lang::String> ret21771;
                                                       
                                                       //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                                                       x10aux::ref<x10::array::Array<x10aux::ref<x10::lang::String> > > x__21801 =
                                                         p__21749;
                                                       
                                                       //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10LocalDecl_c
                                                       x10aux::ref<x10::array::Point> x__pt21802 =
                                                         p__21750;
                                                       
                                                       //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10If_c
                                                       if (!((x10aux::struct_equals(x10aux::nullCheck(x__pt21802)->
                                                                                      FMGL(rank),
                                                                                    x10aux::nullCheck(x__21801)->
                                                                                      FMGL(rank)))))
                                                       {
                                                           
                                                           //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10If_c
                                                           if (true)
                                                           {
                                                               
                                                               //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": polyglot.ast.Throw_c
                                                               x10aux::throwException(x10aux::nullCheck(x10::lang::FailedDynamicCheckException::_make(x10aux::string_utils::lit("!(x$pt.rank == x$0.rank)"))));
                                                           }
                                                           
                                                       }
                                                       
                                                       //#line 42 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": Eval of x10.ast.X10LocalAssign_c
                                                       ret21771 =
                                                         (__extension__ ({
                                                           
                                                           //#line 496 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                           x10aux::ref<x10::array::Point> pt21803 =
                                                             x__pt21802;
                                                           
                                                           //#line 496 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                           x10aux::ref<x10::lang::String> ret21804;
                                                           
                                                           //#line 497 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                           if (true &&
                                                               !(x10aux::nullCheck(x__21801)->
                                                                   FMGL(region)->contains(
                                                                   pt21803)))
                                                           {
                                                               
                                                               //#line 498 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10Call_c
                                                               x10::array::Array<void>::raiseBoundsError(
                                                                 pt21803);
                                                           }
                                                           
                                                           //#line 500 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                           ret21804 =
                                                             (x10aux::nullCheck(x__21801)->
                                                                FMGL(raw))->__apply((__extension__ ({
                                                               
                                                               //#line 1224 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                               x10aux::ref<x10::array::Point> pt21799 =
                                                                 pt21803;
                                                               
                                                               //#line 1224 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                               x10_int ret21800;
                                                               
                                                               //#line 1225 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                               x10_int offset21798 =
                                                                 ((x10_int) ((x10aux::nullCheck(pt21799)->x10::array::Point::__apply(
                                                                                ((x10_int)0))) - (x10aux::nullCheck(x__21801)->
                                                                                                    FMGL(layout_min0))));
                                                               
                                                               //#line 1226 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10If_c
                                                               if (((x10aux::nullCheck(pt21799)->
                                                                       FMGL(rank)) > (((x10_int)1))))
                                                               {
                                                                   
                                                                   //#line 1227 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                   offset21798 =
                                                                     ((x10_int) ((((x10_int) ((((x10_int) ((offset21798) * (x10aux::nullCheck(x__21801)->
                                                                                                                              FMGL(layout_stride1))))) + (x10aux::nullCheck(pt21799)->x10::array::Point::__apply(
                                                                                                                                                            ((x10_int)1)))))) - (x10aux::nullCheck(x__21801)->
                                                                                                                                                                                   FMGL(layout_min1))));
                                                                   
                                                                   //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                   x10_int i19669max21795 =
                                                                     ((x10_int) ((x10aux::nullCheck(pt21799)->
                                                                                    FMGL(rank)) - (((x10_int)1))));
                                                                   
                                                                   //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": polyglot.ast.For_c
                                                                   {
                                                                       x10_int i21796;
                                                                       for (
                                                                            //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                            i21796 =
                                                                              ((x10_int)2);
                                                                            ((i21796) <= (i19669max21795));
                                                                            
                                                                            //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                            i21796 =
                                                                              ((x10_int) ((i21796) + (((x10_int)1)))))
                                                                       {
                                                                           
                                                                           //#line 1228 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                           x10_int i21797 =
                                                                             i21796;
                                                                           
                                                                           //#line 1229 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                           offset21798 =
                                                                             ((x10_int) ((((x10_int) ((((x10_int) ((offset21798) * ((__extension__ ({
                                                                               
                                                                               //#line 1229 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                               x10aux::ref<x10::array::Array<x10_int> > this21789 =
                                                                                 x10aux::nullCheck(x__21801)->
                                                                                   FMGL(layout);
                                                                               
                                                                               //#line 416 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                               x10_int i21790 =
                                                                                 ((x10_int) ((((x10_int)2)) * (((x10_int) ((i21797) - (((x10_int)2)))))));
                                                                               
                                                                               //#line 415 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                               x10_int ret21791;
                                                                               
                                                                               //#line 419 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                               ret21791 =
                                                                                 (x10aux::nullCheck(this21789)->
                                                                                    FMGL(raw))->__apply(i21790);
                                                                               ret21791;
                                                                           }))
                                                                           )))) + (x10aux::nullCheck(pt21799)->x10::array::Point::__apply(
                                                                                     i21797))))) - ((__extension__ ({
                                                                               
                                                                               //#line 1229 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                               x10aux::ref<x10::array::Array<x10_int> > this21792 =
                                                                                 x10aux::nullCheck(x__21801)->
                                                                                   FMGL(layout);
                                                                               
                                                                               //#line 416 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                               x10_int i21793 =
                                                                                 ((x10_int) ((((x10_int) ((((x10_int)2)) * (((x10_int) ((i21797) - (((x10_int)2)))))))) + (((x10_int)1))));
                                                                               
                                                                               //#line 415 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": x10.ast.X10LocalDecl_c
                                                                               x10_int ret21794;
                                                                               
                                                                               //#line 419 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                                               ret21794 =
                                                                                 (x10aux::nullCheck(this21792)->
                                                                                    FMGL(raw))->__apply(i21793);
                                                                               ret21794;
                                                                           }))
                                                                           )));
                                                                       }
                                                                   }
                                                                   
                                                               }
                                                               
                                                               //#line 1232 "/nfs/data1/scalegraph/X10_runtime/X10-2.2.2-fulloptimized-withgc-mpi/x10.dist/stdlib/x10.jar:x10/array/Array.x10": Eval of x10.ast.X10LocalAssign_c
                                                               ret21800 =
                                                                 offset21798;
                                                               ret21800;
                                                           }))
                                                           );
                                                           ret21804;
                                                       }))
                                                       ;
                                                       ret21771;
                                                   }))
                                                   );
            
            //#line 43 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": Eval of x10.ast.X10Call_c
            x10aux::nullCheck(graphlist)->add(attrib);
        }
    }
    
    //#line 61 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": Eval of x10.ast.X10Call_c
    x10aux::nullCheck(obj)->run(graphlist);
}

//#line 17 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10MethodDecl_c
x10aux::ref<test::scalegraph::patternmatching::TestPatternMatching>
  test::scalegraph::patternmatching::TestPatternMatching::test__scalegraph__patternmatching__TestPatternMatching____test__scalegraph__patternmatching__TestPatternMatching__this(
  ) {
    
    //#line 17 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10Return_c
    return ((x10aux::ref<test::scalegraph::patternmatching::TestPatternMatching>)this);
    
}

//#line 17 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10ConstructorDecl_c
void test::scalegraph::patternmatching::TestPatternMatching::_constructor(
  ) {
    
    //#line 17 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.X10ConstructorCall_c
    (((x10aux::ref<x10::lang::Object>)this))->::x10::lang::Object::_constructor();
    
    //#line 17 "/nfs/home/kansyun/workspace/ScaleGraph/src/test/scalegraph/patternmatching/TestPatternMatching.x10": x10.ast.AssignPropertyCall_c
    
}
x10aux::ref<test::scalegraph::patternmatching::TestPatternMatching> test::scalegraph::patternmatching::TestPatternMatching::_make(
  ) {
    x10aux::ref<test::scalegraph::patternmatching::TestPatternMatching> this_ = new (memset(x10aux::alloc<test::scalegraph::patternmatching::TestPatternMatching>(), 0, sizeof(test::scalegraph::patternmatching::TestPatternMatching))) test::scalegraph::patternmatching::TestPatternMatching();
    this_->_constructor();
    return this_;
}


const x10aux::serialization_id_t test::scalegraph::patternmatching::TestPatternMatching::_serialization_id = 
    x10aux::DeserializationDispatcher::addDeserializer(test::scalegraph::patternmatching::TestPatternMatching::_deserializer, x10aux::CLOSURE_KIND_NOT_ASYNC);

void test::scalegraph::patternmatching::TestPatternMatching::_serialize_body(x10aux::serialization_buffer& buf) {
    x10::lang::Object::_serialize_body(buf);
    
}

x10aux::ref<x10::lang::Reference> test::scalegraph::patternmatching::TestPatternMatching::_deserializer(x10aux::deserialization_buffer& buf) {
    x10aux::ref<test::scalegraph::patternmatching::TestPatternMatching> this_ = new (memset(x10aux::alloc<test::scalegraph::patternmatching::TestPatternMatching>(), 0, sizeof(test::scalegraph::patternmatching::TestPatternMatching))) test::scalegraph::patternmatching::TestPatternMatching();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void test::scalegraph::patternmatching::TestPatternMatching::_deserialize_body(x10aux::deserialization_buffer& buf) {
    x10::lang::Object::_deserialize_body(buf);
    
}

x10aux::RuntimeType test::scalegraph::patternmatching::TestPatternMatching::rtt;
void test::scalegraph::patternmatching::TestPatternMatching::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const x10aux::RuntimeType* parents[1] = { x10aux::getRTT<x10::lang::Object>()};
    rtt.initStageTwo("test.scalegraph.patternmatching.TestPatternMatching",x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}
/* END of TestPatternMatching */
/*************************************************/

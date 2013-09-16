package org.scalegraph.external;
import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;
import org.scalegraph.util.MemoryChunk;
import x10.util.Team;
import x10.compiler.Ifndef;
import x10.compiler.Ifdef;

@NativeCPPInclude("MetisInterfaceHeader.h")
@NativeCPPCompilationUnit("MetisInterfaceCC.cc")
public final class MetisInterface {
    
    public static def _ParMETIS_V3_PartKway(vtxdist: MemoryChunk[Long],
                                            xadj: MemoryChunk[Long],
                                            adjncy: MemoryChunk[Long],
                                            vwgt: MemoryChunk[Long],
                                            adjWgt: MemoryChunk[Long],
                                            wgtflag: MemoryChunk[Long],
                                            numflag: MemoryChunk[Long],
                                            ncon: MemoryChunk[Long],
                                            nparts: MemoryChunk[Long],
                                            tpwgts: MemoryChunk[Double],
                                            ubvec: MemoryChunk[Double],
                                            options: MemoryChunk[Long],
                                            edgecut: MemoryChunk[Long],
                                            part: MemoryChunk[Long]): Int {
        var ret: Int = 0;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V3_PartKway(vtxdist->pointer(), xadj->pointer(), adjncy->pointer(), vwgt->pointer(), adjWgt->pointer(), wgtflag->pointer(), numflag->pointer(), ncon->pointer(), nparts->pointer(), tpwgts->pointer(), ubvec->pointer(), options->pointer(), edgecut->pointer(), part->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
        
    }
}
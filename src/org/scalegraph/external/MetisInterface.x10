package org.scalegraph.external;
import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import org.scalegraph.util.MemoryChunk;
import x10.util.Team;

@NativeCPPInclude("MetisInterfaceHeader.h")
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
                                            part: MemoryChunk[Long],
                                            comm: Team): Int {
        var ret: Int = 0;
        val teamId = new MemoryChunk[Int](1, (Long) => comm.id());
        @Native("c++", "ret = ParMETIS_V3_PartKway(vtxdist->pointer(), xadj->pointer(), adjncy->pointer(), vwgt->pointer(), adjWgt->pointer(), wgtflag->pointer(), numflag->pointer(), ncon->pointer(), nparts->pointer(), tpwgts->pointer(), ubvec->pointer(), options->pointer(), edgecut->pointer(), part->pointer(), teamId->pointer());") {
            // Java code
        }
        return ret;
    }
}
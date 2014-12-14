/*
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */


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
    
    @Native("c++", "PARMETIS_MTYPE_LOCAL")
    public  static PARMETIS_MTYPE_LOCAL: Long = Long.MAX_VALUE; // 0 is dummy
    
    @Native("c++", "PARMETIS_MTYPE_GLOBAL")
    public  static PARMETIS_MTYPE_GLOBAL: Long = Long.MAX_VALUE; // 0 is dummy
    
    @Native("c++", "PARMETIS_SRTYPE_GREEDY")
    public  static PARMETIS_SRTYPE_GREEDY: Long = Long.MAX_VALUE; // 0 is dummy
    
    @Native("c++", "PARMETIS_SRTYPE_2PHASE")
    public  static PARMETIS_SRTYPE_2PHASE: Long = Long.MAX_VALUE; // 0 is dummy
        
    public static def _ParMETIS_V3_PartKway(vtxdist: MemoryChunk[Long],
                                            xadj: MemoryChunk[Long],
                                            adjncy: MemoryChunk[Long],
                                            vwgt: MemoryChunk[Long],
                                            adjWgt: MemoryChunk[Long],
                                            wgtflag: Long,
                                            numflag: Long,
                                            ncon: Long,
                                            nparts: Long,
                                            tpwgts: MemoryChunk[Double],
                                            ubvec: MemoryChunk[Double],
                                            options: MemoryChunk[Long],
                                            edgecut: MemoryChunk[Long],
                                            part: MemoryChunk[Long]): Int {
        var ret: Int = 0n;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V3_PartKway(vtxdist->pointer(), xadj->pointer(), adjncy->pointer(), vwgt->pointer(), adjWgt->pointer(), &wgtflag, &numflag, &ncon, &nparts, tpwgts->pointer(), ubvec->pointer(), options->pointer(), edgecut->pointer(), part->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
    }
    
    public static def _ParMETIS_V3_PartGeomKway(vtxdist: MemoryChunk[Long],
                                            xadj: MemoryChunk[Long],
                                            adjncy: MemoryChunk[Long],
                                            vwgt: MemoryChunk[Long],
                                            adjWgt: MemoryChunk[Long],
                                            wgtflag: Long,
                                            numflag: Long,
                                            ndims: Long,
                                            xyz: MemoryChunk[Double],
                                            ncon: Long,
                                            nparts: Long,
                                            tpwgts: MemoryChunk[Double],
                                            ubvec: MemoryChunk[Double],
                                            options: MemoryChunk[Long],
                                            edgecut: MemoryChunk[Long],
                                            part: MemoryChunk[Long]): Int {
        var ret: Int = 0n;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V3_PartGeomKway(vtxdist->pointer(), xadj->pointer(), adjncy->pointer(), vwgt->pointer(), adjWgt->pointer(), &wgtflag, &numflag, &ndims, xyz->pointer(), &ncon, &nparts, tpwgts->pointer(), ubvec->pointer(), options->pointer(), edgecut->pointer(), part->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
    }
    
    public static def _ParMETIS_V3_PartGeom(vtxdist: MemoryChunk[Long],
                                                ndims: Long,
                                                xyz: MemoryChunk[Double],
                                                part: MemoryChunk[Long]): Int {
        var ret: Int = 0n;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V3_PartGeom(vtxdist->pointer(), &ndims, xyz->pointer(), part->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
    }
    
    public static def _ParMETIS_V3_PartMeshKway(elmdist: MemoryChunk[Long],
                                                eptr: MemoryChunk[Long],
                                                eind: MemoryChunk[Long],
                                                elmwgt: MemoryChunk[Long],
                                                wgtflag: Long,
                                                numflag: Long,
                                                ncon: Long,
                                                commonnodes: Long,
                                                nparts: Long,
                                                tpwgts: MemoryChunk[Double],
                                                ubvec: MemoryChunk[Double],
                                                options: MemoryChunk[Long],
                                                edgecut: MemoryChunk[Long],
                                                part: MemoryChunk[Long]): Int {
        var ret: Int = 0n;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V3_PartMeshKway(elmdist->pointer(), eptr->pointer(), eind->pointer(), elmwgt->pointer(), &wgtflag, &numflag, &ncon, &commonnodes, &nparts, tpwgts->pointer(), ubvec->pointer(), options->pointer(), edgecut->pointer(), part->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
    }
    
    public static def _ParMETIS_V3_AdaptiveRepart(vtxdist: MemoryChunk[Long],
                                            xadj: MemoryChunk[Long],
                                            adjncy: MemoryChunk[Long],
                                            vwgt: MemoryChunk[Long],
                                            size: MemoryChunk[Long],
                                            adjWgt: MemoryChunk[Long],
                                            wgtflag: Long,
                                            numflag: Long,
                                            ncon: Long,
                                            nparts: Long,
                                            tpwgts: MemoryChunk[Double],
                                            ubvec: MemoryChunk[Double],
                                            itr: Double,
                                            options: MemoryChunk[Long],
                                            edgecut: MemoryChunk[Long],
                                            part: MemoryChunk[Long]): Int {
        var ret: Int = 0n;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V3_AdaptiveRepart(vtxdist->pointer(), xadj->pointer(), adjncy->pointer(), vwgt->pointer(), size->pointer(), adjWgt->pointer(), &wgtflag, &numflag, &ncon, &nparts, tpwgts->pointer(), ubvec->pointer(), &itr, options->pointer(), edgecut->pointer(), part->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
    }
    
    public static def _ParMETIS_V3_RefineKway(vtxdist: MemoryChunk[Long],
                                                  xadj: MemoryChunk[Long],
                                                  adjncy: MemoryChunk[Long],
                                                  vwgt: MemoryChunk[Long],
                                                  adjWgt: MemoryChunk[Long],
                                                  wgtflag: Long,
                                                  numflag: Long,
                                                  ncon: Long,
                                                  nparts: Long,
                                                  tpwgts: MemoryChunk[Double],
                                                  ubvec: MemoryChunk[Double],
                                                  options: MemoryChunk[Long],
                                                  edgecut: MemoryChunk[Long],
                                                  part: MemoryChunk[Long]): Int {
        var ret: Int = 0n;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V3_RefineKway(vtxdist->pointer(), xadj->pointer(), adjncy->pointer(), vwgt->pointer(), adjWgt->pointer(), &wgtflag, &numflag, &ncon, &nparts, tpwgts->pointer(), ubvec->pointer(), options->pointer(), edgecut->pointer(), part->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
    }
    
    public static def _ParMETIS_V3_NodeND(vtxdist: MemoryChunk[Long],
                                              xadj: MemoryChunk[Long],
                                              adjncy: MemoryChunk[Long],
                                              numflag: Long,
                                              options: MemoryChunk[Long],
                                              order: MemoryChunk[Long],
                                              size: MemoryChunk[Long]): Int {
        var ret: Int = 0n;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V3_NodeND(vtxdist->pointer(), xadj->pointer(), adjncy->pointer(), &numflag, options->pointer(), order->pointer(), size->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
    }
    
    public static def _ParMETIS_V32_NodeND(vtxdist: MemoryChunk[Long],
                                          xadj: MemoryChunk[Long],
                                          adjncy: MemoryChunk[Long],
                                          vwgt: MemoryChunk[Long],
                                          numflag: Long,
                                          mtype: Long,
                                          rtype: Long,
                                          p_nseps: Long,
                                          s_nseps: Long,
                                          ubfrac: Double,
                                          seed: Long,
                                          dbglvl: Long,
                                          order: MemoryChunk[Long],
                                          size: MemoryChunk[Long]): Int {
        var ret: Int = 0n;
        @Ifdef("__CPP__") {
            @Native("c++", "ret = ParMETIS_V32_NodeND(vtxdist->pointer(), xadj->pointer(), adjncy->pointer(), vwgt->pointer(), &numflag, &mtype, &rtype, &p_nseps, &s_nseps, &ubfrac, &seed, &dbglvl, order->pointer(), size->pointer(), &METIS_DEFAULT_TEAM);") {
                // Java code does not support
            }
            return ret;
        }
        @Ifndef("__CPP__") {
            throw new UnsupportedOperationException();
        }
    }
    
    // TODO: Add ParMETIS_V32_Mesh2Dual
}

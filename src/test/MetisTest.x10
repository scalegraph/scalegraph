package test;
import org.scalegraph.external.MetisInterface;
import org.scalegraph.util.MemoryChunk;
import x10.util.Team;
import x10.compiler.Native;

public class MetisTest {
    
    
    public static def main(args: Array[String]) {
        Test_ParMETIS_V3_PartKway();
    }
    
    private static def Test_ParMETIS_V3_PartKway() {
        val _vtxDist = [0L, 8L, 8L];
        val _xadj = [0L, 3L, 6L, 10L, 14L, 17L, 20L];
        val _adjncy = [1L,2L,4L,
                       0L, 2L, 3L,
                       0L, 1L, 3L, 4L,
                       1L, 2L, 5L, 6L,
                       0L, 2L, 5L,
                       3L, 4L, 6L,
                       3L, 5L];
        
        val vtxDist = new MemoryChunk[Long](_vtxDist.raw());
        val xadj = new MemoryChunk[Long](_xadj.raw());
        val adjncy = new MemoryChunk[Long](_adjncy.raw());
        val parts = new MemoryChunk[Long](_xadj.size);
        val comm =Team.WORLD;
        comm.placeGroup().broadcastFlat(() => {
            val ret = MetisInterface._ParMETIS_V3_PartKway(vtxDist,
                                                           xadj,
                                                           adjncy,
                                                           MemoryChunk.getNull[Long](),
                                                           MemoryChunk.getNull[Long](),
                                                           0L,
                                                           0L,
                                                           0L,
                                                           2L,
                                                           new MemoryChunk[Double](2, (Long)=> 0.5D),
                                                           new MemoryChunk[Double](1, (Long)=> 1.05D),
                                                           new MemoryChunk[Long](1, (Long)=> 0L),
                                                           new MemoryChunk[Long](1, (Long)=> -1L),
                                                           parts
            );
            if (here == Place.FIRST_PLACE) {
                Console.OUT.println(ret);
            }
        });                             
        Console.OUT.println("---------------------------------------");
        comm.placeGroup().broadcastFlat(() => {
            val ret = MetisInterface._ParMETIS_V3_PartGeomKway(vtxDist,
                                                           xadj,
                                                           adjncy,
                                                           MemoryChunk.getNull[Long](),
                                                           MemoryChunk.getNull[Long](),
                                                           0L,
                                                           0L,
                                                           1L,
                                                           new MemoryChunk[Double](2, (Long)=> 0.5D),
                                                           0L,
                                                           2L,
                                                           new MemoryChunk[Double](2, (Long)=> 0.5D),
                                                           new MemoryChunk[Double](1, (Long)=> 1.05D),
                                                           new MemoryChunk[Long](1, (Long)=> 0L),
                                                           new MemoryChunk[Long](1, (Long)=> -1L),
                                                           parts);
            if (here == Place.FIRST_PLACE) {
                Console.OUT.println(ret);
            }
        });         
        Console.OUT.println("---------------------------------------");
        comm.placeGroup().broadcastFlat(() => {
            val ret = MetisInterface._ParMETIS_V3_PartGeom(vtxDist,
                                                               1L,
                                                               new MemoryChunk[Double](2, (Long)=> 0.5D),
                                                               parts);
            if (here == Place.FIRST_PLACE) {
                Console.OUT.println(ret);
            }
        });       
        Console.OUT.println("---------------------------------------");
        comm.placeGroup().broadcastFlat(() => {
            val ret = MetisInterface._ParMETIS_V3_PartMeshKway(vtxDist,
                                                               xadj,
                                                               adjncy,
                                                               MemoryChunk.getNull[Long](),
                                                               0L,
                                                               0L,
                                                               0L,
                                                               1L,
                                                               2L,
                                                               new MemoryChunk[Double](2, (Long)=> 0.5D),
                                                               new MemoryChunk[Double](1, (Long)=> 1.05D),
                                                               new MemoryChunk[Long](1, (Long)=> 0L),
                                                               new MemoryChunk[Long](1, (Long)=> -1L),
                                                               parts);
            if (here == Place.FIRST_PLACE) {
                Console.OUT.println(ret);
            }
        }); 
        Console.OUT.println("---------------------------------------");
        comm.placeGroup().broadcastFlat(() => {
            val ret = MetisInterface._ParMETIS_V3_AdaptiveRepart(vtxDist,
                                                           xadj,
                                                           adjncy,
                                                           MemoryChunk.getNull[Long](),
                                                           MemoryChunk.getNull[Long](),
                                                           MemoryChunk.getNull[Long](),
                                                           0L,
                                                           0L,
                                                           0L,
                                                           2L,
                                                           new MemoryChunk[Double](2, (Long)=> 0.5D),
                                                           new MemoryChunk[Double](1, (Long)=> 1.05D),
                                                           100D,
                                                           new MemoryChunk[Long](1, (Long)=> 0L),
                                                           new MemoryChunk[Long](1, (Long)=> -1L),
                                                           parts
            );
            if (here == Place.FIRST_PLACE) {
                Console.OUT.println(ret);
            }
        });   
        Console.OUT.println("---------------------------------------");
        comm.placeGroup().broadcastFlat(() => {
            val ret = MetisInterface._ParMETIS_V3_RefineKway(vtxDist,
                                                           xadj,
                                                           adjncy,
                                                           MemoryChunk.getNull[Long](),
                                                           MemoryChunk.getNull[Long](),
                                                           0L,
                                                           0L,
                                                           0L,
                                                           2L,
                                                           new MemoryChunk[Double](2, (Long)=> 0.5D),
                                                           new MemoryChunk[Double](1, (Long)=> 1.05D),
                                                           new MemoryChunk[Long](1, (Long)=> 0L),
                                                           new MemoryChunk[Long](1, (Long)=> -1L),
                                                           parts
            );
            if (here == Place.FIRST_PLACE) {
                Console.OUT.println(ret);
            }
        });    
        Console.OUT.println("---------------------------------------");
        comm.placeGroup().broadcastFlat(() => {
            val ret = MetisInterface._ParMETIS_V3_NodeND(vtxDist,
                                                             xadj,
                                                             adjncy,
                                                             0L,
                                                             new MemoryChunk[Long](1, (Long)=> 0L),
                                                             new MemoryChunk[Long](1, (Long)=> -1L),
                                                             new MemoryChunk[Long](1, (Long)=> -1L)
            );
            if (here == Place.FIRST_PLACE) {
                Console.OUT.println(ret);
            }
        });   
        Console.OUT.println("---------------------------------------");
        comm.placeGroup().broadcastFlat(() => {
            val ret = MetisInterface._ParMETIS_V32_NodeND(vtxDist,
                                                          xadj,
                                                          adjncy,
                                                          MemoryChunk.getNull[Long](),
                                                          0L,
                                                          MetisInterface.PARMETIS_MTYPE_LOCAL,
                                                          MetisInterface.PARMETIS_SRTYPE_GREEDY,
                                                          0L,
                                                          2L,
                                                          1.05D,
                                                          0L,
                                                          0L,
                                                          new MemoryChunk[Long](1, (Long)=> 0L),
                                                          new MemoryChunk[Long](1, (Long)=> -1L)
            );
            if (here == Place.FIRST_PLACE) {
                Console.OUT.println(ret);
            }
        });    
    }
}
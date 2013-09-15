package test;
import org.scalegraph.external.MetisInterface;
import org.scalegraph.util.MemoryChunk;
import x10.util.Team;

public class MetisTest {
    
    public static def main(args: Array[String]) {
        Test_ParMETIS_V3_PartKway();
    }
    
    private static def Test_ParMETIS_V3_PartKway() {
        val _vtxDist = [0L, 8L];
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
        MetisInterface._ParMETIS_V3_PartKway(vtxDist,
                                             xadj,
                                             adjncy,
                                             MemoryChunk.getNull[Long](),
                                             MemoryChunk.getNull[Long](),
                                             new MemoryChunk[Long](1, (Long)=> 0L),
                                             new MemoryChunk[Long](1, (Long)=> 0L),
                                             new MemoryChunk[Long](1, (Long)=> 0L),
                                             new MemoryChunk[Long](1, (Long)=> 2L),
                                             new MemoryChunk[Double](1, (Long)=> 0D),
                                             new MemoryChunk[Double](1, (Long)=> 0D),
                                             new MemoryChunk[Long](1, (Long)=> 0L),
                                             new MemoryChunk[Long](1, (Long)=> -1L),
                                             parts,
                                             Team.WORLD
                                             );
                                                         
    }
}
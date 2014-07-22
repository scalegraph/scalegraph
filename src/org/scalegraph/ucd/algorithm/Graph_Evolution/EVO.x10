package org.scalegraph.ucd.algorithm.Graph_Evolution;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import org.scalegraph.util.random.Random;

public class EVO extends AlgorithmTest{
/*
* g: Xpregel Graph;
* p and r: the forward and backward burning probability
* v : number of new vertices
* stepThreshold: number of iteration.
*/
    public def perform_EVO(g: XPregelGraph[Long, Double], p: Double, r: Double, v: Int, stepThreshold: Int){

               g.iterate((ctx :VertexContext[Long, Double, Long, Long], messages :MemoryChunk[Long]) => {
                    var counter :Int = 0;
                    var step :Int = 0;
  //                  val vtx: VertexContext[Long, Double, Long, Long] = null;
                    while(counter < v){
                    step = 1;

                    var ambassador: Long = ctx.dstId(getRandomAmbassador(ctx.outEdgesId().size()));
//                    vtx.addOutEdge(ambassador, 1);
                    while(step < stepThreshold){
                        val x = (1/(1-p));
                        val y = (1/(1-(r*p)));
                        var createdOutLinks: Int = 0;
                        var createdInLinks: Int = 0;

                        if(createdOutLinks < x){
                            ambassador = createOutLinks(step, ambassador);
                            createdOutLinks++;
                        }
                        if(createdInLinks < y){
                            ambassador = createInLinks(step, ambassador);
                            createdInLinks++;
                        }
                        step++;
                    }
                    counter++;
                    }
               },
               null,
               ((superstep :Int, aggVal :Long)=>{
                          return true;
               }));
    }

    private def getRandomAmbassador(n: Long): Long{
                val rand = new Random(0L ,0L);
                return rand.nextLong(n);
    }

    private def createOutLinks(s: Int, a: Long): Long {
                return 0L;
    }

    private def createInLinks(s: Int, a: Long): Long{
                return 0L;
        }

    public def run(args :Array[String](1), g :Graph): Boolean {

    	            // create sparse matrix
                    val csr = g.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true);

                    // create xpregel instance
                    val xpregel = XPregelGraph.make[Long, Double](csr);

                    perform_EVO(xpregel,.35,.20,4,5);

                    return true;

    	}

    	public static def main(args :Array[String](1)) {
    		new EVO().execute(args);
    	}

}
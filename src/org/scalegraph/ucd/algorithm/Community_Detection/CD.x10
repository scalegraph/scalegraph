package org.scalegraph.ucd.algorithm.Community_Detection;
import x10.compiler.Ifdef;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.Config;
import org.scalegraph.graph.Graph;
import x10.util.HashMap;
import x10.util.ArrayList;
import x10.util.Random;

public class CD extends AlgorithmTest{
        var labelScore: Float;
        val neighboursLabels = new HashMap[Float, Float]();
        val labelMaxScore = new HashMap[Float, Float]();
        var oldLabel: Float;
        var aggScore: Float;
        var  maxScore: Float;

        public def perform_CD(g: XPregelGraph[Float, Double], delta: Float){
		val sw = Config.get().stopWatch();
             maxScore = -100;
             g.iterate((ctx :VertexContext[Float, Double, Float, Long], messages :MemoryChunk[Float]) => {
                   var isLabelChanged: Boolean = true;
                   if(ctx.superstep() == 0){
                        ctx.setValue(ctx.id());
                        labelScore = 1.0f;
                   }
                   if(isLabelChanged){
                        oldLabel = ctx.value();
                        isLabelChanged = false;
                        val eq2 = getNewLabel(ctx);
                        val neighbourLabel = ctx.value();
                        if(neighboursLabels.containsKey(neighbourLabel)){
                            aggScore = neighboursLabels.getOrThrow(neighbourLabel);
                            aggScore = aggScore + eq2;
                            neighboursLabels.put(neighbourLabel, aggScore);

                            if(labelMaxScore.getOrThrow(neighbourLabel) <  ctx.value()){
                                labelMaxScore.put(neighbourLabel, ctx.value());
                            }}else{
                                neighboursLabels.put(neighbourLabel, eq2);
                                labelMaxScore.put(neighbourLabel, ctx.value());
                            }

                            val neighbour = neighboursLabels.keySet().iterator();
                            val potentialLabels = new ArrayList[Float]();

                            while(neighbour.hasNext()){

                                val tempLabel = neighbour.next();

                                val aggValue = neighboursLabels.getOrThrow(tempLabel);

                                if(aggValue > maxScore){
                                    maxScore = aggValue;
                                    ctx.setValue(tempLabel);
                                    potentialLabels.clear();
                                    potentialLabels.add(tempLabel);
                                }else if(aggValue == maxScore){
                                      potentialLabels.add(tempLabel);
                                }

                            }

                            if(potentialLabels.size() > 1){
                                val labelIndex = new Random().nextInt(potentialLabels.size());
                                ctx.setValue(potentialLabels.get(labelIndex));
                            }

                            labelScore = labelMaxScore.getOrThrow(ctx.value()) - delta;

                        isLabelChanged =true;
                        ctx.sendMessageToAllNeighbors(labelScore);
//Console.OUT.println("The Label score is :"+labelScore+" and vertex id is "+ctx.id());
                   }
             },
             null,
             ((superstep :Int, aggVal :Long)=>{
                                       return true;
             }));
sw.lap("CD Main Iterate (debug)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("CD Main Iterate (debug):"); }
        }

        private def getNewLabel(vtx: VertexContext[Float, Double, Float, Long]): Float{
            val label = vtx.value();
            val function = vtx.outEdgesId().size();
            return (labelScore * (MathAppend.nextPowerOf2(function)));
        }

        public def run(args :Array[String](1), g :Graph): Boolean {
val sw = Config.get().stopWatch();
               // create sparse matrix
               val csr = g.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true);
sw.lap("Graph construction");
               // create xpregel instance
               val xpregel = XPregelGraph.make[Float, Double](csr);

               perform_CD(xpregel,0.5f);

               return true;

        }

        public static def main(args :Array[String](1)) {
                		new CD().execute(args);
                	}

}

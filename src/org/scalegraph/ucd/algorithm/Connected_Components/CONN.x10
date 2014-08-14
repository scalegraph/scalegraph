package org.scalegraph.ucd.algorithm.Connected_Components;
import x10.compiler.Ifdef;
import org.scalegraph.xpregel.XPregelGraph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.Config;
import org.scalegraph.graph.Graph;

public class CONN extends AlgorithmTest{

    var minLabel: Long;
    val minLabelRef = new GlobalRef[Cell[Long]](new Cell[Long](0l));

    public def perform_CONN(g :XPregelGraph[Long, Double]){
val sw = Config.get().stopWatch();
        g.updateInEdge();
		sw.lap("Update In Edge");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Update In Edge:"); }
        g.iterate[Long,Long]((ctx :VertexContext[Long, Double, Long, Long], messages :MemoryChunk[Long]) => {

            //var label: Long = 0L;
            var isLabelChanged: Boolean = true;
            if(ctx.superstep() == 0){
                //ctx.value();
                ctx.setValue(ctx.id());
                minLabelRef()() = ctx.value();
                //ctx.sendMessageToAllNeighbors(label);
            }

            if(isLabelChanged){
                isLabelChanged = false;
                val neighbours = ctx.outEdges().get1();

                for(i in neighbours.range()){
                //find the min value here only.
                   // ctx.aggregate(neighbours(i));
                    // aggregate doesn't seems to work after every iteration.

                    calculateMinLabel(neighbours(i));

                    //minLabel = aggVal;//???????? use PlaceLocalHandle class

                    if (minLabelRef()() != ctx.id()){
                        ctx.setValue(minLabelRef()());
                        isLabelChanged = true;
                    }
                }
                ctx.sendMessageToAllNeighbors(ctx.id());
                //change current vertex label t in label and send min label to neighbour.
                //the neighbours will receive the min value and will set the in value using above logic and will send it again to its neighbour.
            }
        },
        null, //(values :MemoryChunk[Long]) => MathAppend.min(values),
        ((superstep :Int, aggVal :Long) => {
            return true;
        }));
		sw.lap("CONN Main Iterate (debug)");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("CONN Main Iterate (debug):"); }
}


        private def calculateMinLabel(neighbour: Long){

            if(neighbour < minLabelRef()()){
            minLabelRef()() = neighbour;
            }
        }

        public def run(args :Array[String](1), g :Graph): Boolean {

        	            // create sparse matrix
                        val csr = g.createDistSparseMatrix[Double](Config.get().dist1d(), "weight", true, true);

                        // create xpregel instance
                        val xpregel = XPregelGraph.make[Long, Double](csr);

                        perform_CONN(xpregel);

                        return true;

        	}

        public static def main(args :Array[String](1)) {
        		new CONN().execute(args);
        	}
}

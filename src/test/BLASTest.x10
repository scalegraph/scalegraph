package test;

import x10.util.Team;

import org.scalegraph.util.Dist2D;
import org.scalegraph.util.random.Random;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.Graph;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.blas.BLAS;
import org.scalegraph.util.Parallel;
import org.scalegraph.blas.DistDiagonalMatrix;

public class BLASTest {
	public static def main(args: Array[String](1)) {
		val team = Team.WORLD;
		val scale = Int.parse(args(0));

		Console.OUT.println("Generating edge list ...");
		val rnd = new Random(2, 3);
		val edgelist = GraphGenerator.genRMAT(scale, 16, 0.45, 0.15, 0.15, rnd, team);
		val weigh = GraphGenerator.genRandomEdgeValue(scale, 16, rnd, team);

		val g = Graph.make(team, edgelist);
		g.setEdgeAttribute("edgevalue", weigh);
		
		val R = 1 << (MathAppend.ceilLog2(team.size()) / 2);
		val C = team.size() / R;
		val dist = Dist2D.make2D(team, R, C);
		
		// undirected and inner
		val A = g.createDistSparseMatrix[Double](dist, "edgevalue", false, false);
		val N = A.ids().numberOfLocalVertexes2N();
		
		A.simplify(true, true, (r :MemoryChunk[Double]) => MathAppend.sum(r));

		// DegVec <- A %*% rbind(rep(1, times=N))
		val V = new DistMemoryChunk[Double](team.placeGroup(), () =>
			new MemoryChunk[Double](N, (Long) => 1.0));
		
		BLAS.mult[Double](1.0, A, false, V, 0.0, V);
		
		// Adj <- D^(-1/2) %*% Adj
		team.placeGroup().broadcastFlat(() => {
			val vec_ = V();
			Parallel.iter(vec_.range(), (tid :Long, r :LongRange) => {
				for(i in r) vec_(i) = Math.sqrt(1.0 / vec_(i));
			});
		});
		
		BLAS.mult[Double](1.0, DistDiagonalMatrix(V), A, false, 0.0, A);
		
		// V <- (I - Adj) %*% rbind(rep(1, times=N))
		team.placeGroup().broadcastFlat(() => {
			val vec_ = V();
			Parallel.iter(vec_.range(), (tid :Long, r :LongRange) => {
				for(i in r) vec_(i) = 1.0;
			});
		});
		
		BLAS.mult[Double](-1.0, A, false, V, 1.0, V);

		DistributedReader.write("outvec-%d.txt", team, V);
	}
}

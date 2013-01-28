package test;

import org.scalegraph.util.tuple.*;
import org.scalegraph.fileread.DistributedReader;
import x10.util.Team;
import org.scalegraph.graph.Graph;
import org.scalegraph.concurrent.Dist2D;

public class TestDistributedReader {
	public static val inputFormat = (s: String) => {
		
		val items = s.split(" ");
		return Tuple3[Long, Long, Double] (
				Long.parse(items(0)),
				Long.parse(items(1)),
				0D
		);
	};
	
	public static def main(args: Array[String](1)) {
		
		val team = Team.WORLD;
		val fileList = new Array[String](1);
		fileList(0) = args(0);
		
		var time: Long = System.currentTimeMillis();
		val rawData = DistributedReader.read(team, fileList, inputFormat);
		time = System.currentTimeMillis() - time;
		Console.OUT.println("Load time: " + (time));
		
		val edgeList = rawData.get1();
		val g = new Graph(team, Graph.VertexType.Long, false);
		
		g.addEdges(edgeList.data(team.placeGroup()));
		Console.OUT.println("Graph Loaded!!!");
		
		val csr = g.constructDistSparseMatrix(
				Dist2D.make1D(team, Dist2D.DISTRIBUTE_COLUMNS),
				true,
				true);
		
		
		Console.OUT.println("Complete!!!");
	}
}
package test;
import x10.util.Team;
import org.scalegraph.io.ID;
import org.scalegraph.io.impl.CSVReader;

public class CSVReaderTest {
	public static def main(args: Array[String](1)) {
		val team = Team.WORLD;
		val colTypes = [ID.TYPE_LONG as Int, ID.TYPE_LONG, ID.TYPE_NONE, ID.TYPE_DOUBLE];
		val nd = CSVReader.read(team, args(0), colTypes, false);
		
		// print result
		Console.OUT.println(nd.name());
	}
}

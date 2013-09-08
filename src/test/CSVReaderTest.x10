package test;
import x10.util.Team;
import org.scalegraph.io.ID;
import org.scalegraph.io.impl.CSVReader;
import org.scalegraph.io.impl.CSVWriter;
import x10.io.File;

public class CSVReaderTest {
	public static def main(args: Array[String](1)) {
		val team = Team.WORLD;
		val mode = 1;
		
		if(mode==1){
			val colTypes = [ID.TYPE_LONG as Int, ID.TYPE_LONG, ID.TYPE_NONE, ID.TYPE_DOUBLE];
			val nd = CSVReader.read(team, args(0), colTypes, false);
		
			// print result
			Console.OUT.println(nd.name());
		
			CSVWriter.write(team,"csvwTest",nd);
			//CSVWriter.writeSafe(team,"csvwTest",nd);
			
		}else if(mode==2){
			val colTypes = [ID.TYPE_LONG as Int, ID.TYPE_LONG];
			val nd = CSVReader.read(team, args(0), colTypes, false);
			Console.OUT.println("twitest");
			Console.OUT.println(nd.name());
			
			CSVWriter.write(team,"csvwTest",nd);
			
		}else if(mode==3){
			val O  = new File("fileouttest");
			val P    = O.printer();
			for( i in 0..2090000){
				P.print("hoge,hoga\n");
			}
		}
	}
}

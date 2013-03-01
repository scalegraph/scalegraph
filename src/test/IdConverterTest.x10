package test;

import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.util.random.Random;
import org.scalegraph.graph.id.Twod;
import org.scalegraph.graph.id.OnedC;
import org.scalegraph.graph.id.OnedR;

public class IdConverterTest {
	
	public static def refVtoS(ids :IdStruct, rr :Long) {
		val lgr = ids.lgr;
		val lgc = ids.lgc;
		val lgl = ids.lgl;
		return ((rr & ((1L << lgr) - 1L)) << lgl) | (rr >> (lgr + lgc));
	}
	
	public static def refVtoD(ids :IdStruct, rr :Long) {
		val lgr = ids.lgr;
		val lgc = ids.lgc;
		val lgl = ids.lgl;
		return (((rr >> lgr) & ((1L << lgc) - 1L)) << lgl) | (rr >> (lgr + lgc));
	}
	
	public static def twodTest() {
		val R = 32, C = 64, r = 17, c = 11;
		val maxVertexID = (1L << 45) - 1L;
		val ids = new IdStruct(5, 6, 34, false, 0, 0);
		val rnd = new Random(1, 2);
		
		for(i in 0..1000) {
			val vid = (rnd.nextLong() & maxVertexID);
			val s0 = refVtoS(ids, vid);
			val d0 = refVtoS(ids, vid);
			val s1 = Twod.VtoS(ids)(vid);
			assert (s1 == s0);
			val d1 = Twod.VtoD(ids)(vid);
			assert (d1 == d0);
			val v1 = Twod.StoV(ids, c)(s0);
			assert (v1 == vid);
			val d2 = Twod.StoD(ids, c)(s0);
			assert (d2 == d0);
			val v2 = Twod.DtoV(ids, r)(d0);
			assert (v2 == vid);
			val s2 = Twod.DtoS(ids, r)(d0);
			assert (s2 == s0);
		}
	}
	
	public static def onedCTest() {
		val R = 1, C = 64, r = 17, c = 11;
		val maxVertexID = (1L << 40) - 1L;
		val ids = new IdStruct(0, 6, 34, false, 0, 0);
		val rnd = new Random(1, 2);
		
		for(i in 0..1000) {
			val vid = (rnd.nextLong() & maxVertexID);
			val s0 = refVtoS(ids, vid);
			val d0 = refVtoS(ids, vid);
			val s1 = OnedC.VtoS(ids)(vid);
			assert (s1 == s0);
			val d1 = OnedC.VtoD(ids)(vid);
			assert (d1 == d0);
			val v1 = OnedC.StoV(ids, c)(s0);
			assert (v1 == vid);
			val d2 = OnedC.StoD(ids, c)(s0);
			assert (d2 == d0);
			val v2 = OnedC.DtoV(ids)(d0);
			assert (v2 == vid);
			val s2 = OnedC.DtoS(ids)(d0);
			assert (s2 == s0);
		}
	}
	
	public static def onedRTest() {
		val R = 32, C = 1, r = 17, c = 11;
		val maxVertexID = (1L << 39) - 1L;
		val ids = new IdStruct(5, 0, 34, false, 0, 0);
		val rnd = new Random(1, 2);
		
		for(i in 0..1000) {
			val vid = (rnd.nextLong() & maxVertexID);
			val s0 = refVtoS(ids, vid);
			val d0 = refVtoS(ids, vid);
			val s1 = OnedR.VtoS(ids)(vid);
			assert (s1 == s0);
			val d1 = OnedR.VtoD(ids)(vid);
			assert (d1 == d0);
			val v1 = OnedR.StoV(ids)(s0);
			assert (v1 == vid);
			val d2 = OnedR.StoD(ids)(s0);
			assert (d2 == d0);
			val v2 = OnedR.DtoV(ids, r)(d0);
			assert (v2 == vid);
			val s2 = OnedR.DtoS(ids, r)(d0);
			assert (s2 == s0);
		}
	}
	
    public static def main(args: Array[String]) {
    	twodTest();
    	onedCTest();
    	onedRTest();
    }
}
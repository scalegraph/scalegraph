/* 
 *  This file is part of the ScaleGraph project (https://sites.google.com/site/scalegraph/).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package test;
import x10.util.Team;
import x10.util.Timer;
import org.scalegraph.util.Debug;
import org.scalegraph.util.RemoteGetContext;
import org.scalegraph.util.RemotePutContext;
import org.scalegraph.util.RemoteContextEmulation;

public class OneSidedBenchmark {
	private static def message (str:String) : void {
		Console.OUT.println("" + Timer.milliTime() + ":osc: " + here + "(" + Runtime.workerId() + ")" + str);
		Console.OUT.flush();
	}
	
	static def getAlone(n:Int, count:Int) : void{
		message("one sided get");
		val comm = Team.WORLD;
		val places = comm.size();
		val mapping = PlaceLocalHandle.make[Array[Long],Int](PlaceGroup.WORLD,
				(p:Place) => p.id(),
//				(id:Int)=>new Array[Long]((n - 1) / places + 1, (i:Int)=>(places - id) * places - i - 1 as Long));
				(id:Int)=>new Array[Long]((n - 1) / places + 1, (i:Int)=>10 * (i * places + id) as Long));
		for (p in Place.places()) at (p) {
			message("mapping: " + mapping());
		}
		
		val vertices = new Array[Long](n, (i:Int)=> n - i - 1 as Long);
		
		val context = new RemoteGetContext(comm, here.id, vertices, (idx:Int) => mapping()(idx));
		val time_start = Timer.nanoTime();
		context.get(0..(vertices.size-1), (i:Int, get:(Int, Int, Int)=>void) => {
			val v = vertices(i);
			message("native map executed: i: " + i + ", v: " + v);
			get(i, (v % places) as Int, (v / places) as Int);
		});
		val time_middle = Timer.nanoTime();
		context.executeAlone();
		val time_end = Timer.nanoTime();
			message("getAlone: time: resevation: " + (time_middle - time_start));
			message("getAlone: time: communication: " + (time_end - time_middle));
			message("getAlone: time: total: " + (time_end - time_start));
	}
	static def getAll(m: Int, count:Int) : void{
		message("one sided put");
		val comm = Team.WORLD;
		val places = comm.size();
		val n = places * m;
		val mapping = PlaceLocalHandle.make[Array[Long],Int](PlaceGroup.WORLD,
				(p:Place) => p.id(),
//				(id:Int)=>new Array[Long]((n - 1) / places + 1, (i:Int)=>(places - id) * places - i - 1 as Long));
				(id:Int)=>new Array[Long]((n - 1) / places + 1, (i:Int)=>10 * (i * places + id) as Long));
		for (p in Place.places()) at (p) {
			message("mapping: " + mapping());
		}
		for (p in comm.places()) async at (comm.places()(p)) {
			val role = here.id;
			val vertices =new  Array[Long](m, (i:Int)=> m * (role + 1) - i - 1 as Long);
			message("vertices: " +vertices);
			
			
			// comm.barrier(role);
			message("native map start");
			val context = new RemoteGetContext(comm, here.id, vertices, (idx:Int) => mapping()(idx));
			val time_start = Timer.nanoTime();
			context.get(0..(vertices.size-1), (i:Int, get:(Int, Int, Int)=>void) => {
				val v = vertices(i);
				message("native map executed: i: " + i + ", v: " + v);
				get(i, (v % places) as Int, (v / places) as Int);
			});
			message("native map end");
			val time_middle = Timer.nanoTime();
			context.executeWithAll();
			message("executeWithAll end");
			val time_end = Timer.nanoTime();
			
			message("getAll: time: resevation: " + (time_middle - time_start));
			message("getAll: time: communication: " + (time_end - time_middle));
			message("getAll: time: total: " + (time_end - time_start));
		}
	}
	
	
	static def putAll(m: Int, count:Int) : void{
		message("one sided put");
		val comm = Team.WORLD;
		val places = comm.size();
		val n = places * m;
		val vertices =PlaceLocalHandle.make[Array[Long](1)](PlaceGroup.WORLD, ()=>new  Array[Long](m));
		val mapping = PlaceLocalHandle.make[Array[Long],Int](PlaceGroup.WORLD,
				(p:Place) => p.id(),
//				(id:Int)=>new Array[Long]((n - 1) / places + 1, (i:Int)=>(places - id) * places - i - 1 as Long));
				(id:Int)=>new Array[Long]((n - 1) / places + 1, (i:Int)=>10 * (i * places + id) as Long));
		for (p in Place.places()) at (p) {
			message("mapping: " + mapping());
		}
		for (p in comm.places()) async at (comm.places()(p)) {
			val role = here.id;
			message("vertices: " +vertices);
			
			
			// comm.barrier(role);
			message("native map start");
			val context = new RemotePutContext[Long](comm, here.id, vertices, (idx:Int) => mapping()(idx));
			val time_start = Timer.nanoTime();
			context.put(0..(vertices().size-1), (i:Int, put:(Int, Int, Long)=>void) => {
				val v = vertices()(i);
				message("native map executed: i: " + i + ", v: " + v);
				put((v % places) as Int, (v / places) as Int, v);
			});
			message("native map end");
			val time_middle = Timer.nanoTime();
			context.executeWithAll();
			message("executeWithAll end");
			val time_end = Timer.nanoTime();
			
			message("putAll: time: resevation: " + (time_middle - time_start));
			message("putAll: time: communication: " + (time_end - time_middle));
			message("putAll: time: total: " + (time_end - time_start));
		}
	}
	
	public static def main(args:Array[String](1)) : void{
		message("Team.WORLD: " + Team.WORLD);
		message("members of Team(0): " + Team.WORLD.places());
		
		val size = Int.parse(args(0));
		val count = Int.parse(args(1));
		getAlone(size, count);
		getAll(size, count);
		putAll(size, count);
	}
}

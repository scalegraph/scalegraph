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

package example;
import x10.util.Team;
import x10.util.Timer;
import org.scalegraph.util.RemoteGetContext;
import org.scalegraph.util.RemoteContextEmulation;

public class OneSidedExample {
	private static def message (str:String) : void {
		Console.OUT.println("" + Timer.milliTime() + ":osc: " + here + "(" + Runtime.workerId() + ")" + str);
		Console.OUT.flush();
	}
	
	static def onesided() : void{
		message("executeAlone() Test");
		val comm = Team.WORLD;
		val n = 8;
		val places = comm.size();
		val mapping = PlaceLocalHandle.make[Array[Long],Int](PlaceGroup.WORLD,
				(p:Place) => p.id(),
//				(id:Int)=>new Array[Long]((n - 1) / places + 1, (i:Int)=>(places - id) * places - i - 1 as Long));
				(id:Int)=>new Array[Long]((n - 1) / places + 1, (i:Int)=>10 * (i * places + id) as Long));
		for (p in Place.places()) at (p) {
			message("mapping: " + mapping());
		}
		
		val vertices = new Array[Long](n, (i:Int)=> n - i - 1 as Long);
		val vertices_oracle = new Array[Long](vertices);
		val context_oracle = new RemoteContextEmulation(comm, here.id, vertices_oracle, (idx:Int) => mapping()(idx));
		
		context_oracle.get(0..(vertices.size-1), (i:Int, get:(Int, Int, Int)=>void) => {
			val v = vertices(i);
			message("emulation map executed: i: " + i + ", v: " + v);
			get(i, (v % places) as Int, (v / places) as Int);
		});
		context_oracle.executeAlone();
			
		val context = new RemoteGetContext(comm, here.id, vertices, (idx:Int) => mapping()(idx));
		context.get(0..(vertices.size-1), (i:Int, get:(Int, Int, Int)=>void) => {
			val v = vertices(i);
			message("native map executed: i: " + i + ", v: " + v);
			get(i, (v % places) as Int, (v / places) as Int);
		});
		context.executeAlone();
		message("executeAlone output: " + vertices + ", expected: " + vertices_oracle);
	}
	static def onesidedall() : void{
		message("executeWithAll() Test");
		val comm = Team.WORLD;
		val m = 8;
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
			val vertices_oracle = new Array[Long](vertices);
			val context_oracle = new RemoteContextEmulation(comm, here.id, vertices_oracle, (idx:Int) => mapping()(idx));
			message("vertices: " +vertices);
			
			context_oracle.get(0..(vertices.size-1), (i:Int, get:(Int, Int, Int)=>void) => {
				val v = vertices(i);
				message("concept map executed: i: " + i + ", v: " + v);
				get(i, (v % places) as Int, (v / places) as Int);
			});
			context_oracle.executeWithAll();
			message("concept map end");
			
			// comm.barrier(role);
			message("native map start");
			val context = new RemoteGetContext(comm, here.id, vertices, (idx:Int) => mapping()(idx));
			context.get(0..(vertices.size-1), (i:Int, get:(Int, Int, Int)=>void) => {
				val v = vertices(i);
				message("native map executed: i: " + i + ", v: " + v);
				get(i, (v % places) as Int, (v / places) as Int);
			});
			message("native map end");
			context.executeWithAll();
			message("executeWithAll output: " + vertices + ", expected: " + vertices_oracle);
		}
	}
	public static def main(args:Array[String](1)) : void{
		message("Team.WORLD: " + Team.WORLD);
		message("members of Team(0): " + Team.WORLD.places());
		
		onesided();
		onesidedall();
	}
}

package org.scalegraph.concurrent;
import x10.compiler.Inline;
import x10.util.Team;
import x10.lang.Runtime;
import x10.util.ArrayList;
import x10.util.Timer;
import x10.util.IndexedMemoryChunk;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.util.*;

public class RemotePutContext[T] {T haszero}  {
		
	private static val debug = true;
	private static @Inline def debugln (str:String) : void {
		if (debug) {
			Console.OUT.println("" + Timer.milliTime() + ":ospc: " + here + "(" + Runtime.workerId() + "): " + str);
			Console.OUT.flush();
		}
	}
	
	/*
	private static struct Request[T] {
		public val role:Int;
		public val index:Int;
		public val value:T;
		
		def this (role: Int, index:Int, value:T) {
			this.role = role;
			this.index = index;
			this.value = value;
		}
	}
	 */

	private static struct Request[T]{
		public val value:T;
		public val index:Int;
		
		def this (value:T, index:Int) {
			this.value = value;
			this.index = index;
		}
	}
	private static struct IntIdx[T]{
		public val value:T;
		public val idx:Int;
		
		def this (value:T, idx:Int) {
			this.value = value;
			this.idx = idx;
		}
		public def toString() : String {
			return "IntIdx(" + value + "," + idx +")";
		}
	}

	private comm: Team;
	private role: Int;
	private vertices: PlaceLocalHandle[Array[T](1)];
	private getter: (idx: Int)=>T;
	private actions: Array[Array[IntIdx[T]](1)](1);
	
	/*
	 * At this implementation, each member of the team must pass the same getter.
	 */
	public def this (comm:Team, role:Int, vertices: PlaceLocalHandle[Array[T](1)], getter: (Int)=>T) {
		this.comm = comm;
		this.role = role;
		this.vertices = vertices;
		this.getter = getter;
		this.actions = new Array[Array[IntIdx[T]](1)](comm.size(), (i:Int)=>new Array[IntIdx[T]](IndexedMemoryChunk.allocateUninitialized[IntIdx[T]](0)));
	}
	
	public def reset(): void {
		Parallel.iter(0..(comm.size()-1), (src_role:Int)=>{
			actions(src_role) = new Array[IntIdx[T]](IndexedMemoryChunk.allocateUninitialized[IntIdx[T]](0));
		});
	}
	
	public def put(range: IntRange, f: (index:Int, put:(Int, Int,  T)=>void)=>void) : void {
		val tsize = comm.size();
		val requests = new Array[Array[ArrayList[IntIdx[T]]](1)](Runtime.MAX_THREADS, 
				(Int)=>new Array[ArrayList[IntIdx[T]]](tsize,
						(Int)=>new ArrayList[IntIdx[T]]()));
		val g = (Int, IntRange)=> {
			val wid = Runtime.workerId();
			val h = (src_role:Int, src_ind:Int, value: T)=>{
				requests(wid)(src_role).add(IntIdx[T](value, src_ind));
			};
			for (i in range) f(i, h);
		};
		Parallel.iter(range, g);
		Parallel.iter(0..(tsize-1), (src_role:Int)=>{
			var total_size:Int = actions(src_role).size;
			for (wid in 0 ..(Runtime.MAX_THREADS-1)) {
				total_size += requests(wid)(src_role).size();
			}
			val arr = new Array[IntIdx[T]](IndexedMemoryChunk.allocateUninitialized[IntIdx[T]](total_size));

			Array.copy(actions(src_role), 0, arr, 0, actions(src_role).size);
			// IndexedMemoryChunk.copy(actions(src_role).raw(), 0, arr.raw(), 0, actions(src_role).size);
			var offset:Int = actions(src_role).size;
			for (wid in 0 ..(Runtime.MAX_THREADS-1)) {
				val size = requests(wid)(src_role).size();
				if (size > 0) {
					Array.copy(requests(wid)(src_role).toArray(), 0, arr, offset, size);
					offset += size;
				}
			}
			actions(src_role) = arr;
		});
	}
	
	/*
	 * Do not call at more than one place simultenously.
	 * Please use barrier to satisfy the above condition, or use executeWithAll().
	 */
	public def executeAlone() : void {
		// get request
		val root = comm.roleHere()(0);
//		var vertices:Array[T](1) = vertices;
		finish for (role in 0..(comm.size()-1))  {
			if (role == root) async {
				val src = actions;
				val req:Array[IntIdx[T]](1) = comm.scattervSendAuto(role, root, src);
				Parallel.iter(0..(req.size-1),(i:Int)=>{
					vertices()(req(i).idx) = req(i).value;
				});
				reset();
			} else async at (comm.place(role)) {
				val req:Array[IntIdx[T]] = comm.scattervRecvAuto[IntIdx[T]](role, root);
				Parallel.iter(0..(req.size-1),(i:Int)=>{
					vertices()(req(i).idx) = req(i).value;
				});
			}
		}
	}
	
	public def executeWithAll() : void {
		val role = comm.roleHere()(0);
		val src = actions;
		val req:Array[IntIdx[T]](1) = comm.alltoallvAuto(role, src);
		Parallel.iter(0..(req.size-1),(i:Int)=>{
			vertices()(req(i).idx) = req(i).value;
		});
		reset();
	}
}
	

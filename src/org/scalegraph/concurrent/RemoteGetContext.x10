package org.scalegraph.concurrent;
import x10.compiler.Inline;
import x10.util.Team;
import x10.lang.Runtime;
import x10.util.ArrayList;
import x10.util.Timer;
import x10.util.concurrent.AtomicInteger;
import org.scalegraph.concurrent.Parallel;
import org.scalegraph.util.*;

public class RemoteGetContext[T] {
		
	private static val debug = true;
	private static @Inline def debugln (str:String) : void {
		if (debug) {
			Console.OUT.println("" + Timer.milliTime() + ":osgc: " + here + "(" + Runtime.workerId() + "): " + str);
			Console.OUT.flush();
		}
	}
	
	private static struct Request{
		public val src_index:Int;
		public val dst_role:Int;
		public val dst_index:Int;
		
		def this (src_index:Int, dst_role:Int, dst_index:Int) {
			this.src_index = src_index;
			this.dst_role = dst_role;
			this.dst_index = dst_index;
		}
	}

	private static struct Responce[T]{
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
	private vertices: Array[T](1);
	private getter: (idx: Int)=>T;
	private actions: Array[Array[IntIdx[Int]](1)](1);
	
	/*
	 * At this implementation, each member of the team must pass the same getter.
	 */
	public def this (comm:Team, role:Int, vertices: Array[T](1), getter: (Int)=>T) {
		this.comm = comm;
		this.role = role;
		this.vertices = vertices;
		this.getter = getter;
		this.actions = new Array[Array[IntIdx[Int]](1)](comm.size(), (i:Int)=>new Array[IntIdx[Int]](0));
	}
	
	public def reset(): void {
		Parallel.iter(0..(comm.size()-1), (src_role:Int)=>{
			actions(src_role) = new Array[IntIdx[Int]](0);
		});
	}
	
	public def put(range: IntRange, f: (index:Int, put:(Int, Int, Int)=>void)=>void) : void {
		throw new Exception("not impremented");
	}

	public def pureGet(range: IntRange, pureF: (index:Int, get:(Int, Int, Int)=>void)=>void) : void {
		val tsize = comm.size();
		val sizes = new Array[AtomicInteger](tsize,
						(Int)=>new AtomicInteger(0));
		val g = (Int, IntRange)=> {
			val h = (dst_ind:Int, src_role:Int, src_ind:Int)=>{
				sizes(src_role).incrementAndGet();
			};
			for (i in range) pureF(i, h);
		};
		Parallel.iter(range, g);

		Parallel.iter(0..(comm.size()-1), (src_role:Int)=>{
			actions(src_role) = new Array[IntIdx[Int]](sizes(src_role).get());
		});

		val offsets = new Array[AtomicInteger](tsize,
						(Int)=>new AtomicInteger(0));
		val g2 = (Int, IntRange)=> {
			val h = (dst_ind:Int, src_role:Int, src_ind:Int)=>{
				val offset = offsets(src_role).getAndIncrement();
				actions(src_role)(offset) = IntIdx[Int](dst_ind, src_ind);
			};
			for (i in range) pureF(i, h);
		};
		Parallel.iter(range, g2);
	}

	public def get(range: IntRange, f: (index:Int, get:(Int, Int, Int)=>void)=>void) : void {
		iter(range, f);
	}
	
	public def iter(range: IntRange, f: (index:Int, get:(Int, Int, Int)=>void)=>void) : void {
		val tsize = comm.size();
		val requests = new Array[Array[ArrayList[IntIdx[Int]]](1)](Runtime.MAX_THREADS, 
				(Int)=>new Array[ArrayList[IntIdx[Int]]](tsize,
						(Int)=>new ArrayList[IntIdx[Int]]()));
		val g = (Int, IntRange)=> {
			val wid = Runtime.workerId();
			val h = (dst_ind:Int, src_role:Int, src_ind:Int)=>{
				requests(wid)(src_role).add(IntIdx[Int](dst_ind, src_ind));
			};
			for (i in range) f(i, h);
		};
		Parallel.iter(range, g);
		Parallel.iter(0..(tsize-1), (src_role:Int)=>{
			var total_size:Int = actions(src_role).size;
			for (wid in 0 ..(Runtime.MAX_THREADS-1)) {
				total_size += requests(wid)(src_role).size();
			}
			val arr = new Array[IntIdx[Int]](total_size);
			
			Array.copy(actions(src_role), 0, arr, 0, actions(src_role).size);
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
		//finish for (i in vertices) async f(i, (di:Int, sr:Int, si:Int)=>{get(di, sr, si);});
	}
	
	/*
	 * Do not call at more than one place simultenously.
	 * Please use barrier to satisfy the above condition, or use executeWithAll().
	 */
	public def executeAlone() : void {
		// get request
		val root = comm.role()(0);
//		var vertices:Array[T](1) = vertices;
		finish for (role in 0..(comm.size()-1))  {
			if (role == root) async {
				val src = actions;
				val req:Array[IntIdx[Int]](1) = comm.scattervSendAuto(role, root, src);
				val res = new Array[IntIdx[T]](req.size);
				Parallel.iter(0..(req.size-1),(i:Int)=>{
					res(i) = IntIdx(getter(req(i).idx), req(i).value);
				});
				val results:Array[IntIdx[T]](1) = comm.gathervRecvAuto[IntIdx[T]](role, root, res);
				for ([i] in results) {
					val x = results(i);
					vertices(x.idx) = x.value;
				}
				reset();
			} else async at (comm.place(role)) {
				val req:Array[IntIdx[Int]] = comm.scattervRecvAuto[IntIdx[Int]](role, root);
				val res = new Array[IntIdx[T]](req.size);
				Parallel.iter(0..(req.size-1),(i:Int)=>{
					res(i) = IntIdx[T](getter(req(i).idx), req(i).value);
				});
				comm.gathervSendAuto(role, root, res);
			}
		}
	}
	
	public def executeWithAll() : void {
		val role = comm.role()(0);
		val src = actions;
		val req_tuple = comm.alltoallvAutoWithBreakdown(role, src);
		val req = req_tuple.first;
		val req_from = req_tuple.second;
		val res = new Array[IntIdx[T]](req.size);
		Parallel.iter(0..(req.size-1),(i:Int)=>{
			res(i) = IntIdx[T](getter(req(i).idx), req(i).value);
		});
		val results:Array[IntIdx[T]](1) = comm.alltoallvAuto[IntIdx[T]](role, res, req_from);
		for ([i] in results) {
			val x = results(i);
			vertices(x.idx) = x.value;
		}
		reset();
	}
}
	

/*
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *	  http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package test;

import x10.util.Team;
import x10.lang.Runtime;
import org.scalegraph.test.AlgorithmTest;
import org.scalegraph.graph.Graph;
import org.scalegraph.Config;
import org.scalegraph.id.Type;
import org.scalegraph.io.CSV;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.GlobalMemoryChunk;
import org.scalegraph.graph.EdgeList;
import org.scalegraph.graph.GraphGenerator;
import org.scalegraph.graph.id.OnedR;
import org.scalegraph.io.impl.CSVWriter;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.util.Parallel;
import org.scalegraph.blas.DistSparseMatrix;
public class ClusterTest extends AlgorithmTest {
	
	public static def main(args: Array[String](1)) {
		new ClusterTest().execute(args);
	}

	public def run(args :Array[String](1), graph :Graph): Boolean {
		
		if(args.size < 2) {
			println("Usage: [write|check] <path>");
			return false;
		}

		val config = Config.get();
		val team = config.worldTeam();
		val ps = team.size(); // place size
		val dist = config.dist1d();
		val outputPath = "cluster-%d";
		val sw = Config.get().stopWatch();
		val ts = Runtime.NTHREADS; // thread size

		val csr1 = graph.createDistEdgeIndexMatrix(dist, false, false);
		csr1.simplify(true, true, (v :MemoryChunk[Long]) => v(0));
		
		val v2n = csr1.ids().numberOfLocalVertexes2N();
		val lgl = csr1.ids().lgl;
		
		val DtoS = OnedR.DtoS(csr1.ids());
		val DtoV = OnedR.DtoV(csr1.ids());
		
		assert(csr1().offsets.size() == v2n+1);
		
		sw.lap("##########finish init#########");
		
		val degree = DistMemoryChunk.make[Long](team.placeGroup(),
				()=>MemoryChunk.make[Long](v2n, 0, true));
		team.placeGroup().broadcastFlat(() => {
			Parallel.iter(0..(v2n-1), (tid :Long, range: LongRange) => {
				for (i in range) {
					degree()(i) = csr1().offsets(i+1) - csr1().offsets(i);
				}
			});
		});
		sw.lap("count edge degree"); //kokomadeni baguga attara mousiranai
		
		val flag = DistMemoryChunk.make[Boolean](team.placeGroup(),
				()=>MemoryChunk.make[Boolean](csr1().offsets(v2n), 0, true));
		do {
			val mat_src = DistMemoryChunk.make[MemoryChunk[Long]](team.placeGroup(),
					()=>MemoryChunk.make[MemoryChunk[Long]](ps, 0, true));
			val mat_dst = DistMemoryChunk.make[MemoryChunk[Long]](team.placeGroup(),
					()=>MemoryChunk.make[MemoryChunk[Long]](ps, 0, true));
			val mat_idx = DistMemoryChunk.make[MemoryChunk[Long]](team.placeGroup(),
					()=>MemoryChunk.make[MemoryChunk[Long]](ps, 0, true));
			val num = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*ts,0,true));
			team.placeGroup().broadcastFlat(() => {
				Parallel.iter(0..(v2n-1), (tid:Long, range:LongRange)=>{
					for (i in range) {
						for (u in csr1().offsets(i)..(csr1().offsets(i+1)-1)) {
							val j = csr1().vertexes(u);
							val k = j>>lgl;
							assert(k < ps);
							num()(k*ts+tid)++;
						}
					}
				});
			});
			
			val sum = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*(ts+1),0,true));
			team.placeGroup().broadcastFlat(() => {
				for (i in 0..(ps-1)) {
					sum()(i*(ts+1)) = 0L;
					for (j in 1..(ts+1-1)) {
						sum()(i*(ts+1)+j) = sum()(i*(ts+1)+j-1)+num()(i*ts+j-1);
					}
				}
				num().del();
			});
			team.placeGroup().broadcastFlat(() => {
				for (i in 0..(ps-1)) {
					mat_src()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
					mat_dst()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
					mat_idx()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
				}
			});
			val count = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*ts,0,true));
			team.placeGroup().broadcastFlat(() => {
				Parallel.iter(0..(v2n-1), (tid:Long, range:LongRange)=>{
					for (i in range) {
						for (u in csr1().offsets(i)..(csr1().offsets(i+1)-1)) {
							val j = csr1().vertexes(u);
							val k = j>>lgl;
							val idx = sum()(k*(ts+1)+tid) + count()(k*ts+tid);
							mat_src()(k)(idx) = i;
							mat_dst()(k)(idx) = DtoS(j);
							mat_idx()(k)(idx) = u;
							count()(k*ts+tid)++;
						}
					}
				});
				sum().del();
				count().del();
			});
			sw.lap("finished matrix start graph make");
			
			for (p in 0..(ps-1)) {
				finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
					val pj = (pi+p)%ps;
					val degi = degree();
					val matd = mat_dst()(pj);
					val refMatd = GlobalMemoryChunk.make[Long](matd);
					val mats = matd.size();
					val degj = MemoryChunk.make[Long](mats, 0, true);
					val refDegj = GlobalMemoryChunk.make[Long](degj);
					at(team.placeGroup()(pj)) {
						val md = MemoryChunk.make[Long](mats, 0, true);
						finish {MemoryChunk.asyncCopyWithHash(refMatd, 0L, md);}
						val d = MemoryChunk.make[Long](mats, 0, true);
						Parallel.iter(md.range(), (tid:Long, range:LongRange)=>{
							for (u in range) {
								d(u) = degree()(md(u));
							}
						});
						md.del();
						finish {MemoryChunk.asyncCopyWithHash(d, refDegj, 0L);}
						d.del();
					}
					Parallel.iter(matd.range(), (tid:Long, range:LongRange)=>{
						for (u in range) {
							
							val i = mat_src()(pj)(u);
							val j = mat_dst()(pj)(u);
							val is = degi(i);
							val js = degj(u);
							if (is < js || (is == js && (i < j || (i == j && pi < pj)))) {
								flag()(mat_idx()(pj)(u)) = true;
							}
						}
					});
					degj.del();
					mat_src()(pj).del();
					mat_dst()(pj).del();
				}
			}
		} while(false);
		
		sw.lap("finish initbuff");
		
		val vertexes = DistMemoryChunk.make[Long](team.placeGroup(),
				()=>MemoryChunk.make[Long]());
		val offsets = DistMemoryChunk.make[Long](team.placeGroup(),
				()=>MemoryChunk.make[Long](v2n+1, 0, true));
		
		finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
			val deg = MemoryChunk.make[Long](v2n, 0, true);
			Parallel.iter(0..(v2n-1), (tid:Long, range:LongRange)=>{
				for (i in range) {
					for (u in csr1().offsets(i)..(csr1().offsets(i+1)-1)) {
						if (flag()(u)) {
							deg(i)++;
						}
					}
				}
			});
			offsets()(0) = 0L;
			for (i in 1..(v2n+1-1)) {
				offsets()(i) = offsets()(i-1) + deg(i-1);
			}
			deg.del();
			val count = MemoryChunk.make[Long](v2n, 0, true);
			vertexes() = MemoryChunk.make[Long](offsets()(v2n), 0, true);
			Parallel.iter(0..(v2n-1), (tid:Long, range:LongRange)=>{
				for (i in range) {
					for (u in csr1().offsets(i)..(csr1().offsets(i+1)-1)) {
						if (flag()(u)) {
							vertexes()(offsets()(i)+count(i)) = csr1().vertexes(u);
							count(i)++;
						}
					}
				}
			});
			count.del();
		}
		sw.lap("finished init start init2");
		
		val mat_src = DistMemoryChunk.make[MemoryChunk[Long]](team.placeGroup(),
				()=>MemoryChunk.make[MemoryChunk[Long]](ps, 0, true));
		val mat_dst = DistMemoryChunk.make[MemoryChunk[Long]](team.placeGroup(),
				()=>MemoryChunk.make[MemoryChunk[Long]](ps, 0, true));
		do {
			val num = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*ts,0,true));
			team.placeGroup().broadcastFlat(() => {
				Parallel.iter(0..(v2n-1), (tid:Long, range:LongRange)=>{
					for (i in range) {
						for (u in offsets()(i)..(offsets()(i+1)-1)) {
							val j = vertexes()(u);
							num()((j>>lgl)*ts+tid)++;
						}
					}
				});
			});
			
			val sum = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*(ts+1),0,true));
			team.placeGroup().broadcastFlat(() => {
				for (i in 0..(ps-1)) {
					sum()(i*(ts+1)) = 0L;
					for (j in 1..(ts+1-1)) {
						sum()(i*(ts+1)+j) = sum()(i*(ts+1)+j-1)+num()(i*ts+j-1);
					}
				}
				num.del();
			});
			
			team.placeGroup().broadcastFlat(() => {
				for (i in 0..(ps-1)) {
					mat_src()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
					mat_dst()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
				}
			});
			
			val count = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*ts,0,true));
			team.placeGroup().broadcastFlat(() => {
				Parallel.iter(0..(v2n-1), (tid:Long, range:LongRange)=>{
					for (i in range) {
						for (u in offsets()(i)..(offsets()(i+1)-1)) {
							val j = vertexes()(u);
							val k = j>>lgl;
							val idx = sum()(k*(ts+1)+tid) + count()(k*ts+tid);
							mat_src()(k)(idx) = i;
							mat_dst()(k)(idx) = DtoS(j);
							count()(k*ts+tid)++;
						}
					}
				});
				count.del(); sum.del();
			});
		} while(false);
		
		sw.lap("finished graph init start cluster calc");
		val tri_count = DistMemoryChunk.make[Long](team.placeGroup(), 
				()=>MemoryChunk.make[Long](v2n, 0, true));
		val tri_buffer = DistMemoryChunk.make[GrowableMemory[Long]](team.placeGroup(), 
				()=>MemoryChunk.make[GrowableMemory[Long]](ps, 0, true));
		val lg :Long = 1L << lgl;
		val cache_size = 1L << 32; //4GB
		val ca = cache_size / 8 / ps;
		for (p in 0..(ps-1)) {
			val md = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long]());
			val offset_j = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long]());
			val vertex_j = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long]());
			finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
				val pj = (pi+p)%ps;
				val mats = mat_src()(pj);
				val matd = mat_dst()(pj);
				val ms = matd.size();
				val refMatd = GlobalMemoryChunk.make[Long](matd);
				offset_j() = MemoryChunk.make[Long](v2n+1);
				val refO = GlobalMemoryChunk.make[Long](offset_j());
				at(team.placeGroup()(pj)) {
					finish {MemoryChunk.asyncCopyWithHash(offsets(), refO, 0L);}
				}
			}
			sw.lap("finished 0#"+p);
			finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
				val edn = offset_j()(v2n);
				vertex_j() = MemoryChunk.make[Long](edn);
			}
			finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
				val pj = (pi+p)%ps;
				val refEdv = GlobalMemoryChunk.make[Long](vertex_j());
				at(team.placeGroup()(pj)) {
					finish {MemoryChunk.asyncCopyWithHash(vertexes(), refEdv, 0L);}
				}
			}
			sw.lap("finished 1#"+p);
			val tb = DistMemoryChunk.make[GrowableMemory[Long]](team.placeGroup(), 
					()=>MemoryChunk.make[GrowableMemory[Long]](ps*ts, 0, true));
			finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
				val pj = (pi+p)%ps;
				val mats = mat_src()(pj);
				val matd = mat_dst()(pj);
				Parallel.iter(matd.range(), (tid :Long, range:LongRange) => {
					for (u in range) {
						val i = mats(u);
						val j = matd(u);
						var l1 : Long = offsets()(i);
						var l2 : Long = offset_j()(j);
						while (true) {
							if ((l1 >= offsets()(i+1)) || (l2 >= offset_j()(j+1))) break;
							
							val d1 = vertexes()(l1);
							val d2 = vertex_j()(l2);
							
							if (d1 == d2) {
								tri_count().atomicAdd(i, 1);
								atomic {
									//tri_buffer()(pj).add(j);
									//tri_buffer()(d1>>lgl).add(DtoS(d1));
								}
								tb()(pj*ts+tid).add(j);
								tb()((d1>>lgl)*ts+tid).add(DtoS(d1));
							}
							if (d1 <= d2) {
								l1++;
							}
							if (d2 <= d1) {
								l2++;
							}
						}
					}
				});
				for (pp in 0..(ps-1)) {
					for (t in 0..(ts-1)) {
						tri_buffer()(pp).add(tb()(pp*ts+t).raw());
						tb()(pp*ts+t).del();
					}
				}
				offset_j().del();
				vertex_j().del();	
			}
			sw.lap("finished 2#"+p);
			val used_f = DistMemoryChunk.make[Boolean](team.placeGroup(),
					()=>MemoryChunk.make[Boolean](ps, 0, true));
			finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
				for (pp in 0..(ps-1)) {
					val pj = (pi+pp)%ps;
					val eds = at(team.placeGroup()(pj)) {tri_buffer()(pi).raw().size()};
					if (eds > ca || p == ps-1) {
						val ed = MemoryChunk.make[Long](eds);
						val refTB = at(team.placeGroup()(pj)) {
							GlobalMemoryChunk.make[Long](tri_buffer()(pi).raw())
						};
						if (eds != refTB.size) {
							Console.OUT.println("e");
						}
						MemoryChunk.asyncCopyWithHash(refTB, 0L, ed);
						at(team.placeGroup()(pj)) used_f()(pi) = true;//tri_buffer()(pi).clear();

						Parallel.iter(ed.range(), (tid :Long, range :LongRange) => {
							for (i in range) {
								tri_count().atomicAdd(ed(i), 1);
							}
						});
						ed.del();
					}
				}
			}
			finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
				for (pj in 0..(ps-1)) {
					if (used_f()(pj)) {
						tri_buffer()(pj).del();
					}
				}
				used_f.del();
			}
			sw.lap("finished 3#"+p);
			md.del(); offset_j.del();
		}
		sw.lap("finished cluster calc");
		
		val resultD = DistMemoryChunk.make[Double](team.placeGroup(), 
				()=>MemoryChunk.make[Double](v2n, 0, true));
		val resSum = MemoryChunk.make[Double](ps, 0, true);
		val resSumN = MemoryChunk.make[Long](ps, 0, true);
		finish for (p in 0..(ps-1)) async {
			resSum(p) = at(team.placeGroup()(p)) {
				var sum:Double = 0.0;
				for (i in 0..(v2n-1)) {
					val s:Double = degree()(i);
					if (s < 2) {
						resultD()(i) = 0;
					} else {
						resultD()(i) = tri_count()(i)*2/s/(s-1);
					}
					sum += resultD()(i);
				}
				sum
			};
			resSumN(p) = at(team.placeGroup()(p)) {
				var sum:Long = 0;
				for (i in 0..(v2n-1)) {
					sum += tri_count()(i);
				}
				sum
			};
		}
		var sum:Double = 0.0;
		var sumN:Long = 0;
		for (p in 0..(ps-1)) {
			sum += resSum(p);
			sumN += resSumN(p);
		}
		sw.lap("finished result calc");
		Console.OUT.println("sum:"+sum);
		Console.OUT.println("sumN:"+sumN);
		if(args(0).equals("write")) {
			CSV.write(args(1), new NamedDistData(["cul_result" as String], [vertexes as Any]), true);
			return true;
		}
		else if(args(0).equals("check")) {
			return checkResult(vertexes, args(1), 0L);
		}
		else {
			throw new IllegalArgumentException("Unknown command :" + args(0));
		}
	}
}
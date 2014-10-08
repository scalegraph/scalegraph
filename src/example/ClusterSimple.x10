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


package example;

import x10.util.Team;
import x10.lang.Runtime;
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
public class ClusterSimple {

	public static def main(args:Array[String](1)) {
		val config = Config.get();
		val team = config.worldTeam();
		val ps = team.size(); // place size
		val dist = config.dist1d();
		val outputPath = "cluster-%d";
		val sw = Config.get().stopWatch();
		val ts = Runtime.NTHREADS; // thread size
		val graph = Graph.make(CSV.read(args(0), 
				[Type.Long, Type.Long, Type.Double],
				true));
		val csr1 = graph.createDistEdgeIndexMatrix(dist, false, false);
		csr1.simplify(true, true, (v :MemoryChunk[Long]) => v(0));
		
		val v2n = csr1.ids().numberOfLocalVertexes2N();
		val lgl = csr1.ids().lgl;
		
		val DtoS = OnedR.DtoS(csr1.ids());
		val DtoV = OnedR.DtoV(csr1.ids());
		
		sw.lap("##########finish init#########");
		
		val degree = DistMemoryChunk.make[Long](team.placeGroup(),
				()=>MemoryChunk.make[Long](v2n, 0, true));
		finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
			Parallel.iter(0..(v2n-1), (tid :Long, range: LongRange) => {
				for (i in range) {
					degree()(i) = csr1().offsets(i+1) - csr1().offsets(i);
				}
			});
		}
		
		sw.lap("count edge num");
		
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
			finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
				Parallel.iter(0..(v2n-1), (tid:Long, range:LongRange)=>{
					for (i in range) {
						for (u in csr1().offsets(i)..(csr1().offsets(i+1)-1)) {
							val j = csr1().vertexes(u);
							num()((j>>lgl)*ts+tid)++;
						}
					}
				});
			}
			
			val sum = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*(ts+1),0,true));
			finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
				finish for (i in 0..(ps-1)) async {
					sum()(i*(ts+1)) = 0L;
					for (j in 1..(ts+1-1)) {
						sum()(i*(ts+1)+j) = sum()(i*(ts+1)+j-1)+num()(i*ts+j-1);
					}
				}
			}
			finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
				finish for (i in 0..(ps-1)) async {
					mat_src()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
					mat_dst()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
					mat_idx()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
				}
			}
			val count = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*ts,0,true));
			finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
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
			}
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
						finish MemoryChunk.asyncCopy(refMatd, 0L, md);
						val d = MemoryChunk.make[Long](mats, 0, true);
						Parallel.iter(md.range(), (tid:Long, range:LongRange)=>{
							for (u in range) {
								d(u) = degree()(md(u));
							}
						});
						finish MemoryChunk.asyncCopy(d, refDegj, 0L);
						md.del();
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
					mat_src()(pj).del(); mat_dst()(pj).del(); mat_idx()(pj).del();
					degj.del();
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
			finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
				Parallel.iter(0..(v2n-1), (tid:Long, range:LongRange)=>{
					for (i in range) {
						for (u in offsets()(i)..(offsets()(i+1)-1)) {
							val j = vertexes()(u);
							num()((j>>lgl)*ts+tid)++;
						}
					}
				});
			}
			
			val sum = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*(ts+1),0,true));
			finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
				finish for (i in 0..(ps-1)) async {
					sum()(i*(ts+1)) = 0L;
					for (j in 1..(ts+1-1)) {
						sum()(i*(ts+1)+j) = sum()(i*(ts+1)+j-1)+num()(i*ts+j-1);
					}
				}
			}
			finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
				finish for (i in 0..(ps-1)) async {
					mat_src()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
					mat_dst()(i) = MemoryChunk.make[Long](sum()(i*(ts+1)+ts),0,true);
				}
			}
			val count = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long](ps*ts,0,true));
			finish for (p in 0..(ps-1)) at(team.placeGroup()(p)) async {
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
			}
		} while(false);
		
		sw.lap("finished graph init start cluster calc");
		val tri_count = DistMemoryChunk.make[Long](team.placeGroup(), 
				()=>MemoryChunk.make[Long](v2n, 0, true));
		val lg :Long = 1L << csr1.ids().lgl;
		for (p in 0..(ps-1)) {
			val tri_buffer = DistMemoryChunk.make[GrowableMemory[Long]](team.placeGroup(), 
					()=>MemoryChunk.make[GrowableMemory[Long]](ps, 0, true));
			val md = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long]());
			val edge_off = DistMemoryChunk.make[Long](team.placeGroup(),
					()=>MemoryChunk.make[Long]());
			finish for (pi in 0..(ps-1)) async at(team.placeGroup()(pi)) {
				val pj = (pi+p)%ps;
				val mats = mat_src()(pj);
				val matd = mat_dst()(pj);
				val ms = mat_src()(pj).size();
				val refMatd = GlobalMemoryChunk.make[Long](matd);
				val edge_offj = MemoryChunk.make[Long](ms+1);
				val refEO = GlobalMemoryChunk.make[Long](edge_offj);
				finish at(team.placeGroup()(pj)) {
					md() = MemoryChunk.make[Long](ms);
					finish MemoryChunk.asyncCopy(refMatd, 0L, md());
					val e = MemoryChunk.make[Long](ms+1);
					Parallel.iter(md().range(), (tid :Long, range :LongRange)=>{
						for (u in range) {
							val i = md()(u);
							e(u) = offsets()(i+1)-offsets()(i);
						}
					});
					edge_off() = MemoryChunk.make[Long](ms+1);
					edge_off()(0) = 0L;
					for (i in 1..(ms+1-1)) {
						edge_off()(i) = edge_off()(i-1) + e(i-1);
					}
					finish MemoryChunk.asyncCopy(edge_off(), refEO, 0L);
					e.del();
				}
				val edn = edge_offj(ms);
				val edv = MemoryChunk.make[Long](edn);
				val refEdv = GlobalMemoryChunk.make[Long](edv);
				at(team.placeGroup()(pj)) {
					val e = MemoryChunk.make[Long](edn);
					finish Parallel.iter(md().range(), (tid :Long, range :LongRange)=>{
						for (u in range) {
							val i = md()(u);
							for (j in 0..(offsets()(i+1)-offsets()(i)-1)) {
								e(edge_off()(u)+j) = vertexes()(offsets()(i)+j);
							}
						}
					});
					finish MemoryChunk.asyncCopy(e, refEdv, 0L);
					edge_off.del();
					e.del();
					md.del();
				}

				Parallel.iter(matd.range(), (tid :Long, range:LongRange) => {
					for (u in range) {
						val i = mats(u);
						val j = matd(u);
						var l1 : Long = offsets()(i);
						var l2 : Long = edge_offj(u);
						while (true) {
							if ((l1 >= offsets()(i+1)) || (l2 >= edge_offj(u+1))) break;
							
							val d1 = vertexes()(l1);
							val d2 = edv(l2);
							
							if (d1 == d2) {
								tri_count().atomicAdd(i, 1);
								atomic {
									tri_buffer()(pj).add(j);
									tri_buffer()(d1>>lgl).add(DtoS(d1));
								}
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
				edge_offj.del();
				edv.del();
				mats.del(); matd.del();
			}
			md.del();
			edge_off.del();
			sw.lap("finished 1#"+p);
			for (pp in 0..(ps-1)) {
				finish for (pi in 0..(ps-1)) at(team.placeGroup()(pi)) async {
					val pj = (pi+pp)%ps;
					val eds = at(team.placeGroup()(pj)) {tri_buffer()(pi).size()};
					val ed = MemoryChunk.make[Long](eds);
					val refEd = GlobalMemoryChunk.make[Long](ed);
					at(team.placeGroup()(pj)) {
						finish MemoryChunk.asyncCopy(tri_buffer()(pi).raw(), refEd, 0L);
						tri_buffer()(pi).del();
					}
					Parallel.iter(ed.range(), (tid :Long, range :LongRange) => {
						for (i in range) {
							tri_count().atomicAdd(ed(i), 1);
						}
					});
					ed.del();
				}
			}
			tri_buffer.del();
			sw.lap("finished 2#"+p);
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
		// Write output
		val namedDistData = new NamedDistData(["cul_result" as String], [tri_count as Any]);
		CSVWriter.write(team, outputPath, namedDistData, true);
	}
}
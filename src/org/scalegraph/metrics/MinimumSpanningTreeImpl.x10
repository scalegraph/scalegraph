/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.metrics;

import x10.compiler.Native;
import x10.util.Team;
import x10.util.ArrayList;
import x10.util.HashMap;

import org.scalegraph.Config;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.MathAppend;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.Parallel;
import org.scalegraph.fileread.DistributedReader;
import org.scalegraph.graph.Graph;
import org.scalegraph.xpregel.VertexContext;
import org.scalegraph.xpregel.XPregelGraph;
import x10.util.Pair;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.graph.Graph.VertexType;
import org.scalegraph.graph.EdgeList;
import x10.compiler.Ifdef;
import x10.compiler.Uninitialized;
import org.scalegraph.util.ProfilingDB;
import org.scalegraph.util.StopWatch;

public final class MinimumSpanningTreeImpl {
        
    public static final class VertexValue {
        var root: Long;
        var edgeTable: MemoryChunk[EdgeInfo];
        var incomingEdges: MemoryChunk[Long];
        var n: Long;
        public def this() {
            root = -1;
            n = -1;
        }
    }
    
    public static class EdgeInfo {
        var src: Long;
        var dst: Long;
        var srcRoot: Long;
        var dstRoot: Long;
        var w: Double;
        
        public def this(){
        }
        
        public def this(s: Long, d: Long, sr: Long, dr: Long, w_: Double) {
            src = s;
            dst = d;
            srcRoot = sr;
            dstRoot = dr;
            w = w_;
        }
        
        public def init(s: Long, d: Long, sr: Long, dr: Long, w_: Double) {
        	src = s;
        	dst = d;
        	srcRoot = sr;
        	dstRoot = dr;
        	w = w_;
        }
        
        // @Native("c++", "(#this)->FMGL(srcRoot) = #r")
        // public native def setSrcRoot(r: Long): void;
        // 
        // @Native("c++", "(#this)->FMGL(dstRoot) = #r")
        // public native def setDstRoot(r: Long): void;
        
        public def setSrcRoot(r: Long){
        	srcRoot = r;
        }
        public def setDstRoot(r: Long){
        	dstRoot = r;
        }
    }
    
    public static struct BroadcastMessage {
        val root: Long;
        val src: Long;
        val dst: Long;
        val w: Double;
        
        public def this(r: Long, s: Long, d: Long, w_: Double) {
            root = r;
            src = s;
            dst = d;
            w = w_;
        }
    }
        
	public static def run(csr: DistSparseMatrix[Double]): Graph {
	    val team = csr.dist().allTeam();
	    val xpregel = XPregelGraph.make[VertexValue, Double](csr);
		
	//	xpregel.updateInEdge();
		
		val sw = Config.get().stopWatch();
		sw.start();

		// Phase I: Create edge table
		xpregel.iterate[EdgeInfo,Double]((ctx :VertexContext[VertexValue, Double, EdgeInfo, Double], messages :MemoryChunk[EdgeInfo]) => {
		    
		    val obj = ctx.outEdges();
		    val ids = obj.get1();
		    val weight = obj.get2();
		    
		    val vertex = ctx.value();
		    val vid = ctx.id();
		    vertex.root = vid;
		    
		    if (ids.size() > 0) {
		        //val table = MemoryChunk.make[EdgeInfo](ids.size(), (i: Long) => new EdgeInfo(vid, ids(i), vid, ids(i), weight(i)));
		    	val table = MemoryChunk.make[EdgeInfo](ids.size() );
		    	for(i in ids.range()){
		    		table(i).init(vid, ids(i), vid, ids(i), weight(i));
		    	}
		    	vertex.edgeTable = table;
		    } else {
		        vertex.edgeTable = MemoryChunk.getNull[EdgeInfo]();
		        ctx.setVertexShouldBeActive(false);
		    }
		    ctx.voteToHalt();
		},
		null,
		(superstep :Int, aggVal :Double) => {
			return true;
		});

		/// sw.lap("Create Edge Table");
		@Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Create Edge Table"); }
		
		var loop: Long = 0;
		val numCom: GlobalRef[Cell[Long]] = new GlobalRef[Cell[Long]](new Cell[Long](0));
		do {
		    val loop_ = loop;
		    /// Console.OUT.println("\t\tLoop: " + loop);
		    
		    // Select minimum edge
		    xpregel.iterate[EdgeInfo,Double]((ctx :VertexContext[VertexValue, Double, EdgeInfo, Double], messages :MemoryChunk[EdgeInfo]) => {
		        
		        if (ctx.superstep() == 0) {
		            // Find minimum edge
		            val v = ctx.value();
		            val table = v.edgeTable;
		            var selectedIndex: Long = -1;
		            var minimumDstRoot: Long = Long.MAX_VALUE;
		            var minimumWeight: Double = Double.MAX_VALUE;
		            for (i in table.range()) {
		                val w = table(i).w;
		                if (w < minimumWeight) {
		                    selectedIndex = i;
		                    minimumWeight = w;
		                    minimumDstRoot = table(i).dstRoot;
		                } else if (w == minimumWeight && table(i).dstRoot < minimumDstRoot) {
		                    minimumDstRoot = table(i).dstRoot;
		                    selectedIndex = i;
		                    minimumWeight = w;
		                }
		            }
		            
		            assert(selectedIndex >= 0);
		            
		            val e = table(selectedIndex);
		            v.n = e.dstRoot;
		            // Console.OUT.printf("\t\tsend(%ld): (%ld, %ld, %ld, %ld, %lf)\n", ctx.id(), e.src, e.dst, e.srcRoot, e.dstRoot, e.w);
		            ctx.sendMessage(e.dstRoot, e);
		        } else if (ctx.superstep() == 1) {
		            
		            // Select root
		            val v = ctx.value();
		            val selectedRoot = v.n;
		            val myRoot = v.root;
		            v.incomingEdges = MemoryChunk.make[Long](messages.size(), (i: Long) => messages(i).srcRoot);

		            // Remove duplicate edge
		            for (i in messages.range()) {
		                val m = messages(i);
		                val from = m.srcRoot;
		                
		                if (selectedRoot == from && from < myRoot) {
		                    // waive selected edge, then do nothing
		                } else {
		                    // output selected edge
		                    ctx.output(0, m.dst);
		                    ctx.output(1, m.src);
		                    // Console.OUT.printf("\t\tsel(%ld): (%ld, %ld, %ld, %ld, %lf)\n", ctx.id(), m.src, m.dst, m.srcRoot, m.dstRoot, m.w);
		                }
		            }
		            //v.incomingEdges = messages.clone();
		            ctx.voteToHalt();
		        }
		    },
		    null,
		    (superstep :Int, aggVal :Double) => {
		        /// if (here.id == 0) {
		        ///    sw.lap("Loop: " + loop_ + ": " + (superstep == 0 ? "Find minimum edge" : "Select root"));
		        /// }
		        return superstep == 1;
		    });

		    @Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Select edge"); }
		    
		    // Connect components
		    xpregel.iterate[Long,Double]((ctx :VertexContext[VertexValue, Double, Long, Double], messages :MemoryChunk[Long]) => {
		        
		        val v = ctx.value();
		        var minimumRoot: Long = v.root; 
		        if (ctx.superstep() == 0) {
		            v.root = Long.MAX_VALUE;
		        } else {
		            for (i in messages.range()) {
		                val m = messages(i);
		                if (m < minimumRoot) {
		                    minimumRoot = m;
		                }
		            }
		        }
		        
		        if (minimumRoot < v.root) {
		            v.root = minimumRoot;
		            val incomingEdges = v.incomingEdges;
		            val selectedRoot = v.n;
		            var shouldSendToSelectedNode: Boolean = true;
		            for (i in incomingEdges.range()) {
		                val e = incomingEdges(i);
		                ctx.sendMessage(e, minimumRoot);
		                
		                if (e == selectedRoot)
		                    shouldSendToSelectedNode = false;
		            }
		            
		            // avoid sending message another node that is already selected
		            if (shouldSendToSelectedNode) {
		                ctx.sendMessage(selectedRoot, minimumRoot);
		            }
		        }
		        
		        // Console.OUT.println("\t\t" + ctx.id() + ": minimumRoot-> " + minimumRoot);
		        ctx.voteToHalt();
		    },
		    null,
		    (superstep :Int, aggVal :Double) => {
		        /// if (here.id == 0) {
		        ///    sw.lap("Loop: " + loop_ + ": " + "Connect components at " + superstep);
		        /// }
		        return false;
		    });

		    @Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Connect components"); }
		    
		    // Pointer Jumping & Gathering
		    xpregel.iterate[EdgeInfo,Long]((ctx :VertexContext[VertexValue, Double, EdgeInfo, Long], messages :MemoryChunk[EdgeInfo]) => {
		        val v = ctx.value();
		        if (ctx.superstep() == 0) {
		            
		            // Broadcast its edge info
		            // Console.OUT.println("----------------- Broadcast edge info ---------------");
		            val root = v.root;
		            val edges = v.edgeTable;
		            val selectedNode = v.n;
		            for (i in edges.range()) {
		                val e = edges(i);
		                e.setSrcRoot(root);
		                ctx.sendMessage(e.dstRoot, e);
		                // Console.OUT.printf("\t\t%ld: (%ld, %ld, %ld, %ld, %lf)\n", ctx.id(), e.src, e.dst, e.srcRoot, e.dstRoot, e.w);
		            }
		        } else if (ctx.superstep() == 1) {
		            
		            // redirect edges to its root - i.e. pointer jumping
		            // Console.OUT.println("----------------- Pointer Jumping ---------------");
		            val reachableRoot = v.root;
		            for (i in messages.range()) {
		                val e = messages(i);
		                val target = e.srcRoot;
		                if (target != reachableRoot) {
		                    e.setDstRoot(reachableRoot);
		                    ctx.sendMessage(target, e);
		                }
		                
		                // Console.OUT.printf("\t\t%ld: (%ld, %ld, %ld, %ld, %lf)\n", ctx.id(), e.src, e.dst, e.srcRoot, e.dstRoot, e.w);
		            }
		            // ctx.voteToHalt();
		        } else {
		            // Console.OUT.println("----------------- Gathering ---------------");
		            if (messages.size() == 0L) {
		                // Not a root node
		                // Console.OUT.println("----------------> Delete: " + ctx.id());
		                ctx.setVertexShouldBeActive(false);
		                ctx.value().edgeTable = MemoryChunk.getNull[EdgeInfo]();
		                ctx.value().incomingEdges = MemoryChunk.getNull[Long]();
		                ctx.voteToHalt();
		            } else {
		                for (i in messages.range()) {
		                    val e = messages(i);
		                    // Console.OUT.printf("\t\t%ld: (%ld, %ld, %ld, %ld, %lf)\n", ctx.id(), e.src, e.dst, e.srcRoot, e.dstRoot, e.w);
		                }
		                // Gathering
		                ctx.aggregate(1);
		                ctx.value().edgeTable = messages.clone();
		                ctx.voteToHalt();
		            }
		        }
		    },
		    (values :MemoryChunk[Long]) => MathAppend.sum[Long](values),
		    (superstep :Int, aggVal :Long) => {
		        if (superstep == 2 && numCom.home == here) {
		            numCom()() = aggVal;
		            /// Console.OUT.println("\t\tAggr: " + aggVal);
		        }
		        /// if (here.id == 0) {
		        ///    sw.lap("Loop: " + loop_ + ": " + "Pointer Jumping & Gathering at " + superstep);
		        /// }
		        return false;
		    }); 

		    @Ifdef("PROF_XP") { Config.get().dumpProfXPregel("Pointer Jumping & Gathering at "); }
		    
		    ++loop;
		} while (numCom()() > 0);

		val outSrc = xpregel.stealOutput[Long](0);
		val outDst = xpregel.stealOutput[Long](1);
		
		/// sw.lap("Finished computing MST");
		
		// Create Graph with selected edges
		return Graph.make(EdgeList(outSrc, outDst));
	}
}

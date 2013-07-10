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

package org.scalegraph.util;
import x10.util.ArrayList;
import x10.util.Team;

public class RemoteContextEmulation[T] {
	static type get = (Int, Int, Int)=>void;
	private comm: Team;
	private vertices: Array[T](1);
	private getter: (idx: Int)=>T;
	private actions: ArrayList[()=>void];

	public def this (comm: Team, role:Int, vertices: Array[T](1), getter: (Int)=>T) {
		this.comm = comm;
		this.vertices = vertices;
		this.getter = getter;
		//    		this.actions = new Array[ArrayList[T]](nativeSize(id), (int)=>new ArrayList[T]());
		this.actions = new ArrayList[()=>void]();
	}
	private def reset() : void {
		actions.clear();
	}
	private def put(dst_role: Int, dst_ind: Int, src_ind: Int) : void {
		atomic actions.add(()=>{
			val v = getter(src_ind);
			at (comm.place(dst_role)) {
				vertices(dst_ind) = v;
			}
		});
	}
	private def get(dst_ind: Int, src_role: Int, src_ind: Int) : void {
		atomic actions.add(()=>{
			val v = at(comm.place(src_role)) getter(src_ind);
			vertices(dst_ind) = v;
		});
	}
	// チャンク分けする
	public def put(vertices: Iterable[Int], f: (Int, (Int, Int, Int)=>void)=>void) : void {
		finish for (i in vertices) async f(i, (di:Int, sr:Int, si:Int)=>{put(di, sr, si);});
	}
	public def get(vertices: Iterable[Int], f: (Int, (Int, Int, Int)=>void)=>void) : void {
		finish for (i in vertices) async f(i, (di:Int, sr:Int, si:Int)=>{get(di, sr, si);});
	}
	public def iter(vertices: Iterable[Int], f: (Int, (Int, Int, Int)=>void)=>void) : void {
		finish for (i in vertices) async f(i, (di:Int, sr:Int, si:Int)=>{get(di, sr, si);});
	}
	public def executeAlone() : void {
		finish for (f in actions) async f();
		reset();
	}
	public def executeWithAll() : void {
		executeAlone();
		reset();
	}
}

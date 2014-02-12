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

package org.scalegraph.util;

import x10.util.Team;
import x10.util.ArrayUtils;
import x10.util.HashMap;
import x10.compiler.Pragma;

import org.scalegraph.util.tuple.*;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.id.IdStruct;

/** 2D Partitioning Distribution. This class provides the parameters for the 
 * 2D partitioning and the several teams for communications.
 * In the most case, single 2d distributed plane is enough. The plane means a single R x C distribution.
 * This class supports the multiple 2d distributed plane. 
 */
public final struct Dist2D {
	public static DISTRIBUTE_ROWS :Int = 1;
	public static DISTRIBUTE_COLUMNS :Int = 2;
	
	static type Rect2D = Region(2){rect==true,zeroBased==true};
	private static struct LocalData (
			mapping : Rect2D,
			nreplica : Int,
			parentTeam : Team,
			allTeam : Team,
			rowTeam : Cell[Team],
			columnTeam : Cell[Team],
			herePt : Point(2)
	) {
		public def this(mapping_ : Rect2D, nreplica_ : Int, parentTeam_ : Team, allTeam_ : Team, rowTeam_ :Cell[Team], columnTeam_ :Cell[Team], herePt_ :Point(2)) {
			property(mapping_, nreplica_, parentTeam_, allTeam_, rowTeam_, columnTeam_, herePt_);
		}
		public def this() {
			property(null, 0, Team.WORLD, Team.WORLD, null, null, null);
		}
	}
	
	private val data :PlaceLocalHandle[Cell[LocalData]];
	
    private def this(mapping : Rect2D, parentTeam :Team, oned :boolean) {
    	val R = mapping.max(0) + 1;
    	val C = mapping.max(1) + 1;
    	val RC = R * C;
    	val places = parentTeam.places();
    	val cycles = places.size / RC;
    	assert R*C == places.size;

    	// checking oned is correct
    	if(oned && R!=1 && C!=1)
    		throw new IllegalArgumentException();
    	
    	// create mapping from Place to Point.
    	val placeMap = new HashMap[Place, Point(2)]();
    	val orderedPlaces = new Array[Place](places.size);
    	for(c in 0..mapping.max(1)) {
    		for(r in 0..mapping.max(0)) {
    			val i = mapping.indexOf(r, c);
    			//val i = mapping.indexOf(c, r);
	    		orderedPlaces(r + c*R) = places(i);
				for(j in 0..(cycles-1)) {
	    			placeMap.put(places(i + RC*j), Point.make(r, c));
	    		}
	    	}
    	}
    	
    	var create_allteam :Boolean = false;
    	if(cycles > 1)
    		create_allteam = true;
    	else {
    		val pp = parentTeam.places();
    		for([i] in pp) {
    			if(pp(i) != orderedPlaces(i)) {
    				create_allteam = true;
    				break;
    			}
    		}
    	}
    	val create_allteam_ = create_allteam;
    	
    	data = PlaceLocalHandle.make[Cell[LocalData], Point(2)](parentTeam.placeGroup(), (p :Place):Point(2) => placeMap(p)() as Point(2), (p :Point(2)) => {
    		val r = p(0);
    		val c = p(1);
    		val role = r + c*R;
    		
    		var allTeam :Team;
    		if(create_allteam_) {
    			val z = parentTeam.role()(0) / RC;
    			allTeam = parentTeam.split(parentTeam.role()(0), z, role);
    			for(pp in parentTeam.placeGroup()) {
    				/// if(here == pp) {
    				///	Console.OUT.println(here);
    				///	Console.OUT.println("allTeam = " + allTeam);
    				///	Console.OUT.println("split(key=" + role + ",color=" + z + ")");
    				/// }
    				parentTeam.barrier(parentTeam.role()(0));
    			}
    		}
    		else {
    			allTeam = parentTeam;
    		}
    		
//    		assert role == allTeam.role()(0);
    		val rowTeam :Cell[Team];
    		val columnTeam :Cell[Team];
    		if(oned) {
	    		if(R == 1) {
	    			rowTeam = Cell.make[Team](allTeam);
	    			columnTeam = null;
	    		}
	    		else/* if(C == 1) */{
	    			rowTeam = null;
	    			columnTeam = Cell.make[Team](allTeam);
	    		}
    		}
    		else {
    			rowTeam = Cell.make[Team](allTeam.split(role, r, c));
    			columnTeam = Cell.make[Team](allTeam.split(role, c, r));
    		}
    		return new Cell[LocalData](LocalData(mapping, cycles, parentTeam, allTeam, rowTeam, columnTeam, p));
    	});
    }
    
    /** Creates R x C distribution. If the number of places of parentTeam is more than R x C, 
     * the same distribution is cycled for extra places.
     * @param C The number of columns
     * @param R The number of rows
     * @param parentTeam The base team from which split into.
     */
    public static def make2D(parentTeam :Team, R:Int, C:Int) {
		return new Dist2D(Region.makeRectangular([0, 0], [R-1, C-1]) as Rect2D, parentTeam, false);
    }
    
    /** Create R x R distribution.
     * @param R The number of rows and the number of columns
     * @param parentTeam The base team from which split into.
     */
    public static def make2D(parentTeam :Team, R:Int) {
    	return new Dist2D(Region.makeRectangular([0, 0], [R-1, R-1]) as Rect2D, parentTeam, false);
    }
    
    /** Creates 2D distribution from the mapping
     * @param mapping The mapping from point to place
     * @param parentTeam The base team from which split into.
     */
    public static def make2D(parentTeam :Team, mapping :Rect2D) {
    	return new Dist2D(mapping, parentTeam, false);
    }
    
    /** Creates 1D distribution.
     * @param parentTeam The base team from which split into.
     * @param distributionMethod The method for distribution. Avalable method are DISTRIBUTE_ROWS and DISTRIBUTE_COLUMNS.
     */
    public static def make1D(parentTeam :Team, distributionMethod :Int) {
    	val numPlaces = parentTeam.size();
    	if(distributionMethod == DISTRIBUTE_ROWS)
    		return new Dist2D(Region.makeRectangular([0, 0], [numPlaces-1, 0]) as Rect2D, parentTeam, true);
    	else if(distributionMethod == DISTRIBUTE_COLUMNS)
    		return new Dist2D(Region.makeRectangular([0, 0], [0, numPlaces-1]) as Rect2D, parentTeam, true);
    	else
    		throw new IllegalArgumentException();
    }
    
    /** Create 1D distribution.
     * @param mapping The mapping from point to place
     * @param parentTeam The base team from which split into.
     */
    public static def make1D(parentTeam :Team, mapping :Rect2D) {
    	return new Dist2D(mapping, parentTeam, true);
    }
    
    /** Returns the number of rows.
     */
    public def R() = data()().mapping.max(0) + 1;
    
    /** Returns the number of columns.
     */
    public def C() = data()().mapping.max(1) + 1;
    
    public def Z() = data()().parentTeam.size() / data()().allTeam.size();
    
    /** Returns the row rank for the current place.
     */
    public def r() = data()().herePt(0);
    
    /** Returns the column rank for the current place.
     */
    public def c() = data()().herePt(1);
    
    public def z() = data()().parentTeam.role()(0) / data()().allTeam.size();
    
    /** Returns the plane wide rank for the current place.
     */
    public def idx() = r() + c()*R();
    
    /** Returns the number of planes of this distribution.
     */
    public def numReplicas() = data()().nreplica;
    
    /** Returns the base team.
     */
    public def parentTeam() = data()().parentTeam;
    
    /** Returns the team for the current plane.
     */
    public def allTeam() = data()().allTeam;
    
    /** Returns the row team of the current plane.
     * @throw UnsupportedOperationException If the distribution is 1D column distribution.
     */
    public def rowTeam() = data()().rowTeam();
    
    /** Returns the column tema of the current plane.
     * @throw UnsupportedOperationException If the distribution is 1D row distribution.
     */
    public def columnTeam() = data()().columnTeam();
    
    /** Returns the place that has the same (r, c) rank and belongs to the z-th plane.
     * @param z The plane you want to get 
     */
    public def getCongruentPlace(z :Int) {
    	val pid = data()().allTeam.size() * z + data()().mapping.indexOf(data()().herePt);
    	return data()().parentTeam.places()(pid);
    }
    
    /** Creates IdStruct.
     * @param numberOfVertices: The max vertex id
     * @param outerOrInner Whether outer edge or inner edge (true: outer, false: inner)
     */
    public def getIds(numberOfVertices :Long, numberOfLocalVertices :Long, transpose :Boolean) {
    	var R:Int, C:Int;
    	if(!transpose) {
	    	R = R();
	    	C = C();
    	} else {
    		R = C();
    		C = R();
    	}
    	val size = R * C;
    	val avgNumberOfLocalVertices = (numberOfVertices + size - 1) / size;
    	if(!MathAppend.powerOf2(R) || !MathAppend.powerOf2(C))
    		throw new IllegalArgumentException();
    	val teamSize = allTeam().size();
    	return new IdStruct(MathAppend.ceilLog2(R), MathAppend.ceilLog2(C),
    			MathAppend.ceilLog2(avgNumberOfLocalVertices), transpose, numberOfLocalVertices, numberOfVertices);
    }
    
    /** Delete Dist2D and related objects.
     * The all places in allTeam must call this method.
     */
    public def del() {
    	val cachedData = data()();
    	if(cachedData.rowTeam != null &&
    	   cachedData.rowTeam().id() != cachedData.allTeam.id())
    		cachedData.rowTeam().del(c());
    	if(cachedData.columnTeam != null &&
    	   cachedData.columnTeam().id() != cachedData.allTeam.id())
    		cachedData.columnTeam().del(r());
    	if(cachedData.allTeam.id() != cachedData.parentTeam.id()) cachedData.allTeam.del(idx());
    	data()() = LocalData();
    }
    
    public def toString() {
    	return "Dist2D([" + C() + "," + R() + "]," + data()().allTeam.toString() + ")";
    }
    
}


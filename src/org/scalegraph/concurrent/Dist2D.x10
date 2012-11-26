package org.scalegraph.concurrent;

import x10.util.Team;

/*
 *  2D Partitioning Distribution
 */

public class Dist2D (
	dist : Dist{region.rect==true, region.zeroBased==true},
	places : Array[Place](1), // column major addressing
    allTeam : Team
//	rowPlaces : Array[Place](1),
//	columnPlaces : Array[Place](1),
//	rowTeam : Team,
//	columnTeam : Team,
//	hereIdx : Int,
 //   herePt : Point
) {

    public def this(dist_ : Dist{region.rect==true, region.zeroBased==true}) {
    //	assert dist.region.rect;
    //	assert dist.region.zeroBased;
    	val R = dist_.region.max(0) + 1;
    	val C = dist_.region.max(1) + 1;
//    	val herePt_ = dist_(here).minPoint();
//    	val hereIdx_ = herePt_(0) + herePt_(1)*R;
    	val places_ = new Array[Place](R*C, (i :Int) => dist_([i%R, i/R] as Point));
//    	val rowPlaces_ = new Array[Place](C, (i :Int) => dist_([herePt_(0), i] as Point));
//    	val columnPlaces_ = new Array[Place](R, (i :Int) => dist_([i, herePt_(1)] as Point));
    	val allTeam_ = new Team(places_);
    	property(dist_, places_, allTeam_);
//    	val rowTeam_ = new Team(rowPlaces_);
//    	val columnTeam_ = new Team(columnPlaces_);
//    	property(dist_, places_, allTeam_, rowPlaces_, columnPlaces_,
//    			rowTeam_, columnTeam_, hereIdx_, herePt_);
    }
    
    public def this(C:Int, R:Int) {
		this(Dist.makeBlockBlock(Region.makeRectangular([0, 0], [C-1, R-1]), 0, 1));
    }
    
    public def this(R:Int) {
		this(Dist.makeBlockBlock(Region.makeRectangular([0, 0], [R-1, R-1]), 0, 1));
    }
    
    public def R() = dist.region.max(0) + 1;
    public def C() = dist.region.max(1) + 1;
    
    public def toString() {
    	return "Dist2D([" + C() + "," + R() + "]," + allTeam.toString() + ")";
    }
    
}


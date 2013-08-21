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
package org.scalegraph;

import x10.util.Team;

import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MathAppend;

/** Provides the default data distribution, which includes world team and 1D/2D distribution.
 * Config is used by ScaleGraph API.
 */
public class Config {
	private static val instance :Cell[Config] = new Cell[Config](null);
	
	private static def canInitConfig(checkInstance :Boolean) {
		if(here.id != 0) {
			throw new BadPlaceException("Config initialization must be done on the first place.");
		}
		if(checkInstance) {
			if(instance() != null) {
				throw new IllegalOperationException("Config.init() is called but Config is already initialized.\n" +
						"It will not be changed. If you want to change Config value, call Config.del() method before init().");
			}
		}
	}
	
	private static def broadcast(cfg :Config) {
		cfg.world.placeGroup().broadcastFlat(() => {
			Config.instance() = cfg;
		});
	}
	
	/**
	 * Returns the instance of Config class.
	 * This method is the part of the singleton pattern.
	 * Only one instance of Config class can exit.<br>
	 * IMPORTANT: The first call of this method is NOT thread-safe.
	 * It is better to call this method at the begining of the program 
	 * in order to ensure that the instance is created.
	 */
	public static def get() {
		val ret = instance();
		if(ret == null) {
			canInitConfig(false);
			val team = Team.WORLD;
			val R = 1 << (MathAppend.ceilLog2(team.size()) / 2);
			val C = team.size() / R;
			val dist2D = Dist2D.make2D(team, R, C);
			val dist1D = Dist2D.make2D(team, 1, team.size());
			broadcast(new Config(true, team, dist1D, dist2D));
			return instance();
		}
		return ret;
	}
	
	/**
	 * Creates an instance of Config object.
	 * If the instance is already exists, this method will throw exception.
	 */
	public static def init(worldTeam :Team, distForXPregel :Dist2D, distForBLAS :Dist2D) {
		canInitConfig(true);
		broadcast(new Config(false, worldTeam, distForXPregel, distForBLAS));
	}
	
	/**
	 * Release the recources of Config object.
	 * After this method is called, you can call init() method to create fresh Config instance.
	 */
	public static def del() {
		val ret = instance();
		if(ret != null) {
			ret.world.placeGroup().broadcastFlat(() => {
				ret.del_();
				instance() = null;
			});
		}
	}
	
	private val own :Boolean;
	private val world :Team;
	private val distXPregel :Dist2D;
	private val distBLAS :Dist2D;
	
	private def this(ownByThis :Boolean, worldTeam :Team, distForXPregel :Dist2D, distForBLAS :Dist2D) {
		own = ownByThis;
		world = worldTeam;
		distXPregel = distForXPregel;
		distBLAS = distForBLAS;
	}
	
	private def del_() {
		if(own) {
			distXPregel.del();
			distBLAS.del();
		}
	}
	
	/** Returns thw world team */
	public def worldTeam() = world;
	
	/** Returns the distribution for XPregel, which is the 1D partitioning distribution. */
	public def distXPregel() = distXPregel;
	
	/** Returns the distribution for BLAS, which is the 2D partitioning distribution. */
	public def distBLAS() = distBLAS;
	
	/** Returns the 2D partitioning distribution */
	public def dist2d() = distBLAS;
	
	/** Returns the 1D partitioning distribution */ 
	public def dist1d() = distXPregel;
}

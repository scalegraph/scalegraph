package org.scalegraph;

import x10.util.Team;

import org.scalegraph.util.Dist2D;
import org.scalegraph.util.MathAppend;

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
	
	public static def init(worldTeam :Team, distForXPregel :Dist2D, distForBLAS :Dist2D) {
		canInitConfig(true);
		broadcast(new Config(false, worldTeam, distForXPregel, distForBLAS));
	}
	
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
	
	public def worldTeam() = world;
	public def distXPregel() = distXPregel;
	public def distBLAS() = distBLAS;
	
	public def dist2d() = distBLAS;
	public def dist1d() = distXPregel;
}

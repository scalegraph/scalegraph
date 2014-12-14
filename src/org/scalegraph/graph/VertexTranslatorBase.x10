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
package org.scalegraph.graph;

import x10.util.Team;

abstract class VertexTranslatorBase {
	
	protected team : Team;
	protected teamRank: Int;
	protected teamSize: Int;
	protected var maxVertexID :Long = 0;
	
	def this(team__:Team){
		team = team__;
		teamRank = team.role()(0);
		teamSize = team.size() as int;
	}

	public abstract def isTranslator() :Boolean;
	public abstract def sizeOfDictionary() :Long;

	/** maximum vertex ID that has been used
	 */
	public def maxVertexID() = maxVertexID;
}

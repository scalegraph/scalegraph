package org.scalegraph.io;

import x10.util.Team;

public class BlockAllocater {
	
	private val allBlock : Int;
	private val numBlock : Int;
	private val extraBlock : Int;
	private var pid : Int;
	private var count : Int;
	
	public def this(team : Team, n : Int) {
		allBlock = n;
		numBlock = n / team.size();
		extraBlock = n % team.size();
		pid = 0;
		count = 0 < extraBlock ? numBlock + 1 : numBlock;
	}
	
	public def numBlock() {
		return allBlock;
	}
	
	public def next() {
		val result = pid;
		count--;
		if(count <= 0) {
			pid++;
			count = pid < extraBlock ? numBlock + 1 : numBlock;
		}
		return result;
	}
	
	public def reset() {
		pid = 0;
		count = 0 < extraBlock ? numBlock + 1 : numBlock;
	}
}
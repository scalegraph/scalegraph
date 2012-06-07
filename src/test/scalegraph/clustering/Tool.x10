package test.scalegraph.clustering;

import x10.util.HashMap;
import x10.util.StringBuilder;

public class Tool {
	
	public static def print[K, V](array:DistArray[HashMap[K, V]]): void {
		for(p in Place.places()) at(p) {
			Console.OUT.println(array.dist.get(p));
			for(i in array.dist.get(p)){
				Console.OUT.println(here + ": DistArray" + i + " = " + Tool.toString(array(i)));
			}
		}
	}
	
	public static def print[T](array:DistArray[T]): void {
		for(p in Place.places()) at(p) {
			Console.OUT.println(array.dist.get(p));
			for(i in array.dist.get(p)){
				Console.OUT.println(here + ": DistArray" + i + " = " + array(i));
			}
		}
	}
	
	public static def print[K, V](hash:HashMap[K, V]): void {
		for(entry in hash.entries()){
			Console.OUT.println(entry.getKey() + " -> " + entry.getValue());
		}
	}
	
	public static def toString[K, V](array:DistArray[HashMap[K, V]]): String {
		val builder = new StringBuilder();
		for(p in Place.places()){
			for(i in array.dist.get(p)){
				val value = at(p) array(i);
				builder.add(p + ": DistArray" + i + " = " + Tool.toString(value) + "\n");
			}
		}
		return builder.result();
	}
	
	public static def toString[T](array:DistArray[T]): String {
		val builder = new StringBuilder();
		for(p in Place.places()){
			for(i in array.dist.get(p)){
				val value = at(p) array(i);
				builder.add(p + ": DistArray" + i + " = " + value + "\n");
			}
		}
		return builder.result();
	}
	
	public static def toString[K, V](hash:HashMap[K, V]): String {
		val builder = new StringBuilder();
		for(entry in hash.entries()){
			builder.add(entry.getKey() + " -> " + entry.getValue() + "\n");
		}
		return builder.result();
	}
}
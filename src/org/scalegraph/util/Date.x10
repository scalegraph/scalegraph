package org.scalegraph.util;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;


/**
 * Date Time class
 */
@NativeCPPInclude("DateWrapper.h")
@NativeCPPCompilationUnit("DateWrapper.cc")
public class Date implements Comparable[Date] {
	
	protected var seconds: Int = 0;
 	protected	var minutes: Int = 0;
 	protected var hours: Int = 0;
 	protected var date: Int = 0;
 	protected var month: Int = 0;
 	protected var year: Int = 0;
	
 	public static def now(): Date {
 		throw new UnsupportedOperationException();
 	}
 	
 	protected def this() {}
 	
	public def this(year: Int, month: Int, date: Int) {
		this.year = year;
		this.month = month;
		this.date = date;
		
		validateInput();
	}
	
	public def this(year: Int, month: Int, date: Int, hours: Int, minutes: Int) {
		this.year = year;
		this.month = month;
		this.date = date;
		this.hours = hours;
		this.minutes = minutes;
		
		validateInput();
	}
	
	public def this(year: Int, month: Int, date: Int, hours: Int, minutes: Int, seconds: Int) {
		this.year = year;
		this.month = month;
		this.date = date;
		this.hours = hours;
		this.minutes = minutes;
		this.seconds = seconds;
		
		validateInput();
	}
	
	public def getYear(): Int {
		return this.year;
	}
	
	public def getMonth(): Int {
		return this.month;
	}
	
	public def getDate(): Int {
		return this.date;
	}
	
	public def getHours(): Int {
		return this.hours;
	}
	
	public def getMinutes(): Int {
		return this.minutes;
	}
	
	public def getSeconds(): Int {
		return this.seconds;
	}
	
	public def getDay(): Int {
		var result: Int = 0;
		_getDayOfWeek(year, month, date, hours, minutes, seconds, result);
		return result;
	}
	
	public def getTime(): Long {
		var result: Long = 0;
		_getGmtTimeStamp(year, month, date, hours, minutes, seconds, result);
		return result;
	}
	
	public def toString(): String {
		var result: String = "";
		_getTimeString(year, month, date, hours, minutes, seconds, result);
		return result;
	}
	
	@Native("c++", "getGmtTimeStamp((#year), (#month), (#date), (#hours), (#minutes), (#seconds), &(#result));")
	public native static def _getGmtTimeStamp(year: Int, month: Int, date: Int, hours: Int, minutes: Int, seconds: Int, result: Long): void;
	
	@Native("c++", "getDayOfWeek((#year), (#month), (#date), (#hours), (#minutes), (#seconds), &(#result));")
	public native static def _getDayOfWeek(year: Int, month: Int, date: Int, hours: Int, minutes: Int, seconds: Int, result: Int): void;
	
	@Native("c++", "getTimeString((#year), (#month), (#date), (#hours), (#minutes), (#seconds), (#result));")
	public native static def _getTimeString(year: Int, month: Int, date: Int, hours: Int, minutes: Int, seconds: Int, result: String): void;
	
	
	
	
	public def equals(id: Any): Boolean {
		return false;
	}
	
	public def clone(): Date {
		return new Date(this.year, this.month, this.date, this.hours, this.minutes, this.seconds);
	}
	
	public def compareTo(that: Date): Int {
		
		if(this.year != that.getYear()) {
			return this.year.compareTo(that.getYear());
		} else if(this.month != that.getMonth()) {
			return this.month.compareTo(that.getMonth());
		} else if(this.date != that.getDate()) {
			return this.date.compareTo(that.getDate());
		} else if(this.hours != that.getHours()) {
			return this.hours.compareTo(that.getHours());
		} else if(this.minutes != that.getMinutes()) {
			return this.minutes.compareTo(that.getMinutes());
		}
		
		return this.seconds.compareTo(that.getSeconds());
	}
	
	/**
	 * 
	 */
	private def validateInput() {
		
		// Create array of number of dates
		val dateOfMonth  <: Array[Int](1) = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
		
		if(this.year >= 1900) {
			
			// In case of leap year feb has 29 dates
			if(this.year % 4 == 0) {
				if(this.year % 100 == 0) {
					if(this.year % 400 == 0) {
						dateOfMonth(1) = 29;
					}
				} else {
					dateOfMonth(1) = 29;
				}
			}
			
			if(this.month >= 1 && this.month <= 12) {
				if(this.date >= 1 && this.date <= dateOfMonth(this.month -1)) {
					if(this.hours >= 0 && this.hours <= 23) {
						if(this.minutes >= 0 && this.minutes <= 59) {
							if(this.seconds >= 0 && this.seconds <= 59) {
								// All parametersis valid
								
							} else {
								throw new Exception("Seconds must be between 0 - 59");
							}
						} else {
							throw new Exception("Minutes must be between 0 - 59");
						}
					} else {
						throw new Exception("Hours must be between 0 - 23");
					}
				} else {
					throw new Exception("Date must be between 1 - " + dateOfMonth(this.month -1));
				}
			} else {
				throw new Exception("Month must be between 1 - 12");
			}
		} else {
			throw new Exception("Year must be more that 1900");
		}
	}
	
}


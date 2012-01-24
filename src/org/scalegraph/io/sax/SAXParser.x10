package org.scalegraph.io.sax;

import x10.compiler.Native;
import x10.compiler.NativeCPPInclude;
import x10.compiler.NativeCPPCompilationUnit;
import x10.util.IndexedMemoryChunk;
import org.scalegraph.io.sax.SAXHandler;

/**
 * SAXParser for X10
 */
@NativeCPPInclude("SAXParserDriver.h")
@NativeCPPCompilationUnit("SAXParserDriver.cc")
@NativeCPPInclude("SAXHandlerDriver.h")
@NativeCPPCompilationUnit("SAXHandlerDriver.cc")
public class SAXParser {
	
	// Event constant
	private static val NO_EVENT: Int = 0;
	private static val START_ELEMENT: Int = 1;
	private static val END_ELEMENT: Int = 2;
	private static val START_AND_END_ELEMENT: Int = 3;
	private static val WARNING: Int = 4;
	private static val ERROR: Int = 5;
	private static val FATAL_ERROR: Int = 6;
	
	/**
	 * Parse input xml file
	 * @param fileName - input XML file name
	 * @param inputHandler - handler to handle events occur during parsing process
	 */
	public static def parse(fileName: String, inputHandler: SAXHandler): void {

		val maxAttributes: Int = 20;
		var elementName: String = "";
		var attributeCount: Int = 0;
		val eventType: Int = 0;
		var attributeKey: IndexedMemoryChunk[String] = IndexedMemoryChunk.allocateZeroed[String](maxAttributes);
		var attributeValue: IndexedMemoryChunk[String] = IndexedMemoryChunk.allocateZeroed[String](maxAttributes);
		var attributeType: IndexedMemoryChunk[String] = IndexedMemoryChunk.allocateZeroed[String](maxAttributes);
		var fatalErrorString: String = "";
		var errorString: String = "";
		var warningString: String = "";
		var isSuccess: Boolean = false;
		
		// Initialize Xerces library
		_initialize();
		
		// Initialize parsing process
		_parseFirst(fileName, isSuccess);
		
		if(!isSuccess) {
			throw new Exception("Cannot initialize parser");
		}
		
		var isMore: Boolean = false;
		var isEvent: Boolean = false;
		do {
			
			// Continue parsing. isMore determine more data is available to parse or not 
			_parseNext(isMore);
			
			// Retreive flag to determine whether 
			// in the previous call of _parseNext, any event has occured or not
			_isEvent(isEvent);
			
			if(isEvent) {
				
				// Event has occured so get data from library
				_getData(	eventType, 
							elementName, 
							attributeCount, 
							attributeKey, 
							attributeValue, 
							attributeType,
							fatalErrorString,
							errorString,
							warningString);
				
				// Check event type and forward to corresponding handler's method
				if(eventType == START_ELEMENT) {
				
					inputHandler.startElement(elementName, attributeCount, new Array[String](attributeKey),
							new Array[String](attributeValue),new Array[String](attributeType));

				} else if (eventType == END_ELEMENT) {
					
					inputHandler.endElement(elementName);
					
				} else if(eventType == START_AND_END_ELEMENT) {
					
					inputHandler.startElement(elementName, attributeCount, new Array[String](attributeKey),
							new Array[String](attributeValue),new Array[String](attributeType));
					inputHandler.endElement(elementName);
					
				}else if(eventType == FATAL_ERROR) {
					
					inputHandler.fatalError(fatalErrorString);
					
				} else if(eventType == ERROR) {
					
					inputHandler.error(errorString);
					
				} else if(eventType == WARNING) {
					
					inputHandler.warning(warningString);
					
				}
			}
		
		// if more data is availble continue parsing
		} while(isMore);
		
		_finalize();
		
	}
	
	
	@Native("c++", "SAXParserDriver::initialize();")
	public native static def _initialize(): void;
	
	
	@Native("c++", "SAXParserDriver::finalize();")
	public native static def _finalize(): void;
	
	
	@Native("c++", "SAXParserDriver::parseFirst((#fileName), (#isSuccess));")
	public native static def _parseFirst(fileName:String, isSuccess: Boolean): void;
	
	
	@Native("c++", "SAXParserDriver::parseNext((#isMore));")
	public native static def _parseNext(isMore: Boolean): void;
	
	
	@Native("c++", "SAXParserDriver::isEvent((#isEvent));")
	public native static def _isEvent(isEvent: Boolean): void;
	
	
	@Native("c++", "SAXParserDriver::getData((#eventType),(#elementName), (#attributeCount), (#attributeKey), (#attributeValue), (#attributeType), (#fatalErrorString), (#errorString), (#warningString));")
	public native static def _getData(
			eventType: Int,
			elementName: String,
			attributeCount: Int,
			attributeKey: IndexedMemoryChunk[String],
			attributeValue: IndexedMemoryChunk[String],
			attributeType: IndexedMemoryChunk[String],
			fatalErrorString:String,
			errorString: String,
			warningString: String): void; 
	
}

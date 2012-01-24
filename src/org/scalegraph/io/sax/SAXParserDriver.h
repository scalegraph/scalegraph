#ifndef _SAXPARSERDRIVER_H_
#define _SAXPARSERDRIVER_H_

#include "SAXHandlerDriver.h"

#include <xercesc/parsers/SAXParser.hpp>
#include <xercesc/sax/HandlerBase.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/framework/XMLPScanToken.hpp>

#include <x10aux/ref.h>
#include <x10/lang/String.h>
#include <x10/util/IndexedMemoryChunk.h>

#include <iostream>

using namespace std;
using namespace xercesc;

/* Event constant for each parsing call */
#define NO_EVENT			0
#define START_ELEMENT	1
#define END_ELEMENT  	2
#define START_AND_END_ELEMENT 3
#define WARNING			4
#define ERROR				5
#define FATAL_ERROR		6

#define MAX_ATTRIBUTE	256

/**
 * This class is a Xerces library Wrapper.
 * This class is not thread-safe;
 */
class SAXParserDriver {

public:

	/**
	 * Initialize Xerces library. It must be called once before starting each parse.
	 * Each initialize call must be matched by finalize call
	 */
	static void initialize();

	/**
	 * Finalize Xerces library
	 * Each finalize call must be matched by initalize call
	 */
	static void finalize();

	/**
	 * Initialize parser
	 * @param file - xml file path to parse
	 * @param isSuccess - returned flag set if parser is succefully initialized
	 */
	static void parseFirst(x10aux::ref<x10::lang::String> file, bool & isSuccess);

	/**
	 * Continue parsing
	 * @param isMore - returned flag set if more data available to parse
	 */
	static void parseNext(bool & isMore);

	/**
	 * Determine the libary found new event or not
	 * For event information plese reference event constant
	 * @param flag - returned flag set if an event has occurred
	 */
	static void isEvent(bool & flag);

	/**
	 * Get data from Xerces
	 * For evtType = NO_EVENT no parameter is valid
	 * For evtTyppe = START_ELEMENT or START_END_ELEMENT
	 * 		name, attributeCount, attributeKey, attributeValue
	 * 		attributeType are valid
	 * For evtType = END_ELEMENT only name is valid
	 * For evtType = fatalError only fatalError is valid
	 * For evtType = error only error is valid
	 * For evtType = warning only warning is valid
	 *
	 * @param evtType - constant of occurring event
	 * @param name - name of found tag
	 * @param attributeCount - number of tag attribute
	 * @param attributeKey - array of attribute key
	 * @param attributeValue - array of attribute value
	 * @parram attributeType - array of attributeType
	 * @param fatalError - fatal error message from Xerces
	 * @param error - error message from Xerces
	 * @param warning - warning message from Xerces
	 */
	static void getData( int & evtType,
							x10aux::ref<x10::lang::String> & name,
							int & attributeCount,
							x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > & attributeKey,
							x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > & attributeValue,
							x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > & attributeType,
							x10aux::ref<x10::lang::String> & fatalError,
							x10aux::ref<x10::lang::String> & error,
							x10aux::ref<x10::lang::String> & warning);

	/**
	 * Handle start element event from SAX Parser
	 * This method is not meant to be called directly by user
	 */
	static void startElement(const XMLCh * const name, AttributeList & attributes);

	/**
	 * Handle end element event from SAX parser
	 * This method is not meant to be called directly by user
	 */
	static void endElement(const XMLCh* const name);

	/**
	 * Handle fatal error event from SAX Parser
	 * This method is not meant to be called directly by user
	 */
	static void fatalError(const SAXParseException& exception);

	/**
	 * Handle error event from SAX Parser
	 * This method is not meant to be called directly by user
	 */
	static void error(const SAXParseException& exception);

	/**
	 * Handle warning event from SAX Parser
	 * This method is not meant to be called directly by user
	 */
	static void warning(const SAXParseException& exception);


private:

	/**
	 * Free memory of varibles which were allocated by malloc function
	 */
	static void clearAllocatedMemory();

	/**
	 * Xerces SAXParser object
	 */
	static SAXParser * parser;

	/**
	 * Pointer to base handle object for handling all events during parsing
	 */
	static HandlerBase * handler;

	/**
	 * Keep current state of parsing
	 */
	static XMLPScanToken token;

	/**
	 * Determine whether any event occured or not
	 */
	static bool isEventFlag;

	/**
	 * Local storage for input XML file name
	 */
	static char * filename;

	/**
	 * Determine whether more data is available to parse or not
	 */
	static bool isDataLeft;

	/**
	 * Determine occurring event during parsing
	 */
	static int eventType;

	/**
	 * Keep number of attributes of the XML tag
	 */
	static int attributeCount;

	/**
	 * Keep name of XML tag
	 */
	static x10aux::ref<x10::lang::String> tagName;

	/**
	 * Keep warning string from Xerces
	 */
	static x10aux::ref<x10::lang::String> warningString;

	/**
	 * Keep error string from Xerces
	 */
	static x10aux::ref<x10::lang::String> errorString;

	/**
	 * Kepp fatal error string from Xerces
	 */
	static x10aux::ref<x10::lang::String> fatalErrorString;

	/**
	 * Global storage for attribtue key
	 */
	static x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > globalAttributeKey;

	/**
	 * Global storage for attribute value
	 */
	static x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > globalAttributeValue;

	/**
	 * global storage for attribute type
	 */
	static x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > globalAttributeType;

};

#endif

#include "SAXParserDriver.h"

using namespace std;
using namespace xercesc;

SAXParser * SAXParserDriver::parser = 0;
HandlerBase * SAXParserDriver::handler = 0;
XMLPScanToken SAXParserDriver::token;
char * SAXParserDriver::filename = 0;
bool SAXParserDriver::isDataLeft = false;
bool SAXParserDriver::isEventFlag = false;
int SAXParserDriver::eventType = NO_EVENT;
int SAXParserDriver::attributeCount = 0;

x10aux::ref<x10::lang::String> SAXParserDriver::tagName;
x10aux::ref<x10::lang::String> SAXParserDriver::warningString;
x10aux::ref<x10::lang::String> SAXParserDriver::errorString;
x10aux::ref<x10::lang::String> SAXParserDriver::fatalErrorString;

x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > SAXParserDriver::globalAttributeKey \
	= x10::util::IndexedMemoryChunk<void>::allocate< x10aux::ref<x10::lang::String> >(MAX_ATTRIBUTE,8, false, false);

x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > SAXParserDriver::globalAttributeValue \
	= x10::util::IndexedMemoryChunk<void>::allocate< x10aux::ref<x10::lang::String> >(MAX_ATTRIBUTE,8, false, false);

x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > SAXParserDriver::globalAttributeType \
	= x10::util::IndexedMemoryChunk<void>::allocate< x10aux::ref<x10::lang::String> >(MAX_ATTRIBUTE,8, false, false);


void SAXParserDriver::initialize() {

	XMLPlatformUtils::Initialize();
}


void SAXParserDriver::parseFirst(x10aux::ref<x10::lang::String> file, bool & isSuccess) {

	// If user forgot calling finalize, we need to clear previous allocated memory first
	clearAllocatedMemory();

	// copy filename to allocated storage
	const char * temp = (file->c_str());
	int len = strlen(temp);
	SAXParserDriver::filename = (char *)malloc(len + 1);
	strncpy(SAXParserDriver::filename, temp, len + 1);

	// Create SAX Parser
	SAXParserDriver::parser = new SAXParser();
	SAXParserDriver::handler = static_cast<HandlerBase *> (new SAXHandlerDriver());
	SAXParserDriver::isDataLeft = false;

	// Assign handler
	DocumentHandler* docHandler = (DocumentHandler*) handler;
	ErrorHandler* errHandler = (ErrorHandler*) handler;

	SAXParserDriver::parser->setDocumentHandler(docHandler);
	SAXParserDriver::parser->setErrorHandler(errHandler);

	try {
		isSuccess = parser->parseFirst(filename, token);
	} catch(...) {
		isSuccess = false;
	}
}


void SAXParserDriver::getData(int & evtType,
		x10aux::ref<x10::lang::String> & name,
		int & attributeCount,
		x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > & attributeKey,
		x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > & attributeValue,
		x10::util::IndexedMemoryChunk< x10aux::ref<x10::lang::String> > & attributeType,
		x10aux::ref<x10::lang::String> & fatalError,
		x10aux::ref<x10::lang::String> & error,
		x10aux::ref<x10::lang::String> & warning) {

		if(SAXParserDriver::eventType == NO_EVENT) {
			// No any event, do nothing
			evtType = NO_EVENT;
			return;
		}

		if (SAXParserDriver::eventType == START_ELEMENT ||
			SAXParserDriver::eventType == START_AND_END_ELEMENT) {

			// return tag name
			name = SAXParserDriver::tagName;

			// return attribute count
			attributeCount = SAXParserDriver::attributeCount;

			// return array of keys
			x10::util::IndexedMemoryChunk<void>::copy(
					SAXParserDriver::globalAttributeKey, 0, attributeKey, 0,
					attributeCount);
			x10::util::IndexedMemoryChunk<void>::copy(
					SAXParserDriver::globalAttributeValue, 0, attributeValue, 0,
					attributeCount);
			x10::util::IndexedMemoryChunk<void>::copy(
					SAXParserDriver::globalAttributeType, 0, attributeType, 0,
					attributeCount);

		} else if(SAXParserDriver::eventType == END_ELEMENT) {

			// return tag name
			name = SAXParserDriver::tagName;

		} else if(SAXParserDriver::eventType == FATAL_ERROR) {
			fatalError = SAXParserDriver::fatalErrorString;
		} else if(SAXParserDriver::eventType == ERROR) {
			error = SAXParserDriver::errorString;
		} else if(SAXParserDriver::eventType == WARNING) {
			warning = SAXParserDriver::warningString;
		}

		// return event type and clear event flag in the library
		evtType = SAXParserDriver::eventType;
		SAXParserDriver::isEventFlag = false;
		SAXParserDriver::eventType = NO_EVENT;
}


void SAXParserDriver::parseNext(bool & isMore) {
		isMore = parser->parseNext(token);
}


void SAXParserDriver::clearAllocatedMemory() {

	if(filename) {
		free(filename);
		filename = 0;
	}

	if(parser) {
		delete parser;
		parser = 0;
	}

	if(handler) {
		delete handler;
		handler = 0;
	}
}


void SAXParserDriver::finalize() {

	clearAllocatedMemory();
	XMLPlatformUtils::Terminate();
}


void SAXParserDriver::isEvent(bool & flag) {
	flag = isEventFlag;
}


void SAXParserDriver::startElement(const XMLCh * const name, AttributeList & attributes) {

	char * localString = 0;
	char * rawString = 0;

	// Copy XML string and create X10 string, assign X10 to free it
	rawString = XMLString::transcode(name);
	SAXParserDriver::tagName = x10::lang::String::_make(rawString, true);

	// Copy attributes to global IndexedMemoryChunk of String
	int i;
	char * tempName;
	int attributeLength = attributes.getLength();

	for(i = 0; i < attributeLength; i++) {

		// Copy attribute name. Create new string and assign x10 to release it
		rawString =  XMLString::transcode(attributes.getName(i));
		globalAttributeKey[i] = x10::lang::String::_make(rawString, true);

		// Copy attribute value. Create new string and assign x10 to release it
		rawString =  XMLString::transcode(attributes.getValue(i));
		globalAttributeValue[i] = x10::lang::String::_make(rawString, true);

		// Copy attribute type. Create new string and assign x10 to release it
		rawString =  XMLString::transcode(attributes.getType(i));
		globalAttributeType[i] = x10::lang::String::_make(rawString, true);
	}

	// Store number of attributes in global storage
	SAXParserDriver::attributeCount = attributeLength;

	// Event is available to query
	SAXParserDriver::isEventFlag = true;
	SAXParserDriver::eventType = START_ELEMENT;

}


void SAXParserDriver::endElement(const XMLCh* const name) {

	// Create X10 string, assign X10 to release it
	char * rawString = XMLString::transcode(name);
	SAXParserDriver::tagName = x10::lang::String::_make(rawString, true);

	// Set Eventflag
	if(SAXParserDriver::isEventFlag == true &&
	SAXParserDriver::eventType == START_ELEMENT) {

		// open tag and close tag are in the same element,
		// Xerces library will call startElement and endElement ]
		// in the same parseNext call
		// Ex -> "<tag atribute=val />"
		SAXParserDriver::isEventFlag = true;
		SAXParserDriver::eventType = START_AND_END_ELEMENT;;

	} else {

		// Start tag and close tag are found seperately in file
		SAXParserDriver::isEventFlag = true;
		SAXParserDriver::eventType = END_ELEMENT;
	}

}


void SAXParserDriver::fatalError(const SAXParseException& exception) {

	char * message = XMLString::transcode(exception.getMessage());
	char * errorMessage = (char *)malloc(strlen(message) + 124);

	// Convert SAX exception to string
	sprintf(errorMessage, "Fatal error: %s at line: %lu", message, exception.getLineNumber());
	SAXParserDriver::fatalErrorString =  x10::lang::String::_make(errorMessage, true);
	XMLString::release(&message);

	SAXParserDriver::isEventFlag = true;
	SAXParserDriver::eventType = FATAL_ERROR;
}

/**
 *
 */
void SAXParserDriver::error(const SAXParseException& exception) {

	char * message = XMLString::transcode(exception.getMessage());
	char * errorMessage = (char *)malloc(strlen(message) + 124);

	// Convert SAX exception to string
	sprintf(errorMessage, "Error: %s at line: %lu", message, exception.getLineNumber());
	SAXParserDriver::errorString =  x10::lang::String::_make(errorMessage, true);
	XMLString::release(&message);

	SAXParserDriver::isEventFlag = true;
	SAXParserDriver::eventType = ERROR;
}

/**
 *
 */
void SAXParserDriver::warning(const SAXParseException& exception) {

	char * message = XMLString::transcode(exception.getMessage());
	char * errorMessage = (char *)malloc(strlen(message) + 124);

	// Convert SAX exception to string
	sprintf(errorMessage, "Warning: %s at line: %lu", message, exception.getLineNumber());
	SAXParserDriver::warningString =  x10::lang::String::_make(errorMessage, true);
	XMLString::release(&message);

	SAXParserDriver::isEventFlag = true;
	SAXParserDriver::eventType = WARNING;
}

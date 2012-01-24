#include "SAXHandler.h"
#include "SAXParserDriver.h"

void SAXHandlerDriver::startElement(const XMLCh* const name,
                           AttributeList& attributes)
{
	// Forward event to SAXParser driver
    SAXParserDriver::startElement(name, attributes);
}

void SAXHandlerDriver::fatalError(const SAXParseException& exception) {
	// Forward event to SAXParser driver
    SAXParserDriver::fatalError(exception);
}

void SAXHandlerDriver::error(const SAXParseException& exception) {
	// Forward event to SAXParser driver
    SAXParserDriver::error(exception);
}

void SAXHandlerDriver::warning(const SAXParseException& exception) {
	// Forward event to SAXParser driver
	SAXParserDriver::warning(exception);
}

void SAXHandlerDriver::endElement(const XMLCh* const name) {
	// Forward event to SAXParser driver
	SAXParserDriver::endElement(name);
}

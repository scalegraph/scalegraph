#ifndef _SAXHANDLER_H_
#define _SAXHANDLER_H_

#include <xercesc/sax/HandlerBase.hpp>
#include <xercesc/sax/AttributeList.hpp>
#include <iostream>

using namespace std;
using namespace xercesc;

/**
 * SAX Event Handler for native code
 */
class SAXHandlerDriver : public HandlerBase {

public:

	/**
	 * Handle event that open tag is found
	 */
    void startElement(const XMLCh* const, AttributeList&);

    /**
     * Handle event that close tag is found
     */
    void endElement(const XMLCh* const);

    /**
     * Handle event that fatal error occurs
     */
    void fatalError(const SAXParseException&);

    /**
     * Handle event that error occur
     */
    void error(const SAXParseException&);

    /**
     * Handle event that warning occur
     */
    void warning(const SAXParseException&);


};

#endif

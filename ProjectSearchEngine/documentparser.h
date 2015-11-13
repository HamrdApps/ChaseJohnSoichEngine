#ifndef DOCUMENTPARSER_H
#define DOCUMENTPARSER_H

#include "pugixml.hpp"
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;
using namespace pugi;

class DocumentParser
{
private:
    xml_document doc;
    xml_parse_result result;
public:
    DocumentParser();
    void loadDocument(string docName);
    void parseToAvl();
    void parseToHash();
    void traversePractice();

};

#endif // DOCUMENTPARSER_H

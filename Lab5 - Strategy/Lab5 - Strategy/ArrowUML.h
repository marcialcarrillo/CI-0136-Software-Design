#pragma once

#include "ClassUML.h"
#include <sstream>
#include <iostream>


class ArrowUML {
public:
	string id;
	string type;
	string source;
	string target;

	ArrowUML();
	ArrowUML(string id, string type, string source, string target);
	virtual ~ArrowUML() {}
	string toString();
	
};
#pragma once

#include "ClassUML.h"
#include <sstream>
#include <iostream>


class ArrowUML {
public:
	int id;
	string type;
	int source;
	int target;

	ArrowUML();
	ArrowUML(string type, int source, int target);
	virtual ~ArrowUML() {}
	string toString();
	
};
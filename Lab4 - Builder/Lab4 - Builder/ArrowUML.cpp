#include "ArrowUML.h"

ArrowUML::ArrowUML(string type, int source, int target) : type(type), source(source), target(target) {}

string ArrowUML::toString()
{
	ostringstream oss;
	oss << "This arrow connects node: " << source << " with node: " << target;
	return oss.str();
}

#include "ArrowUML.h"

ArrowUML::ArrowUML() {
	type = "";
	source = "";
	target = "";
}

ArrowUML::ArrowUML(string id, string type, string source, string target) : id(id), type(type), source(source), target(target) {}

string ArrowUML::toString()
{
	ostringstream oss;
	oss << "This arrow connects node: " << source << " with node: " << target;
	return oss.str();
}

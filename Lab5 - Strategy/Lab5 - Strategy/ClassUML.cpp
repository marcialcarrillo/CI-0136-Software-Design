#include "ClassUML.h"

ClassUML::ClassUML(string id, string title) : id(id), title(title) {}

ClassUML::ClassUML(string id, string title, vector<string> attributes, vector<string> operations) : id(id), title(title), attributes(attributes), operations(operations) {}
#include "ClassUML.h"

ClassUML::ClassUML(string title) : id(-1), title(title) {}

ClassUML::ClassUML(int id, string title) : id(id), title(title) {}

ClassUML::ClassUML(int id, string title, vector<string> attributes, vector<string> operations) : id(id), title(title), attributes(attributes), operations(operations) {}
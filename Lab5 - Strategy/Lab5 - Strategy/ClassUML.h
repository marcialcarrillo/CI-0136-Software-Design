#pragma once

#include <string>
#include <vector>

using namespace std;

class ClassUML {
public:
	ClassUML(string id, string title);
	ClassUML(string id, string title, vector<string> attributes, vector<string> operations);
	~ClassUML() {};
	string id;
	string title;
	vector<string> attributes;
	vector<string> operations;
};
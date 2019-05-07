#pragma once

#include <string>
#include <vector>

using namespace std;

class ClassUML {
public:

	ClassUML(int id, string title);
	ClassUML(int id, string title, vector<string> attributes, vector<string> operations);
	int id;
	string title;
	vector<string> attributes;
	vector<string> operations;

	
	virtual ~ClassUML() {};
};
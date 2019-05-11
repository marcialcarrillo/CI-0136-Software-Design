#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class TagElement
{
	public:
		string name;
		string text;
		vector<TagElement> elements;

		TagElement() {};
		TagElement(string name, string text) : name(name), text(text) {};
		TagElement(string name, string text, vector<TagElement> elements) : name(name), text(text), elements(elements) {};

};

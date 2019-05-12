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
		vector<TagElement> attributes; //sub tags
		vector<TagElement> elements; //properties of the element


		TagElement() {};
		TagElement(string name, string text) : name(name), text(text)  {};
		TagElement(string name, vector<TagElement> elements) : name(name), text(text), elements(elements) {};

		void add_attribute(string attribute_name, string attribute_text)
		{
			
			attributes.emplace(attributes.end(), attribute_name, attribute_text);
		};

		void add_attributes(vector<TagElement> attributes_to_add)
		{
			attributes.insert(attributes.end(), attributes_to_add.begin(), attributes_to_add.end());
		};

		void add_element(string element_name, string element_text)
		{
			elements.emplace(elements.end(), element_name, element_text);
		};

		void add_elements(vector<TagElement> elements_to_add)
		{
			elements.insert(elements.end(), elements_to_add.begin(), elements_to_add.end());
		};
};

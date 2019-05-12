#pragma once
#include "TagElement.h"
#include "MockReader.h"

class MockJSONReader : public MockReader
{
public:
	TagElement* loaded_graph;
	//MockJSONReader(TagElement *input) : MockReader(*input) loaded_graph(input) {};
	MockJSONReader(TagElement *input) : MockReader(input)
	{
		loaded_graph = input;
		//loaded_graph = new TagElement("graph", "");
	};
	~MockJSONReader() {};

	void read_file() //create mock file
	{
		cout << "SIMULATING THE READING & PARSING OF A JSON FILE!" << endl;

		//Since the difference lies on HOW the file is read and NOT on the file structures produced we reuse the same MockClass for both approaches
		//However, in a real implementation, we would retrive the information we are adding below to the loaded_graph by either using a library to read the JSON file
		//(in this case) or by creating a parser that reads the file.

		loaded_graph->add_attribute("id", "0");
		loaded_graph->add_attribute("edgedefault", "directed");
		loaded_graph->add_element("node", "");
		loaded_graph->elements[0].add_attribute("id", "0");
		loaded_graph->elements[0].add_attribute("name", "ClassBase");
		loaded_graph->elements[0].add_element("attribute", "+classBase1: int"); //all node elements are marked with "data key=" so it is ommited on read
		loaded_graph->elements[0].add_element("operation", "+int getClassBase 1()");
		loaded_graph->elements[0].add_element("operation", "+void setClassBase1(int o)");
		loaded_graph->add_element("node", "");
		loaded_graph->elements[1].add_attribute("id", "1");
		loaded_graph->elements[1].add_attribute("name", "ClassA");
		loaded_graph->elements[1].add_element("attribute", "+classA: float");
		loaded_graph->elements[1].add_element("operation", "+float getClassA()");
		loaded_graph->elements[1].add_element("operation", "+void setClassA(float o)");
		loaded_graph->add_element("node", "");
		loaded_graph->elements[2].add_attribute("id", "2");
		loaded_graph->elements[2].add_attribute("name", "ClassB");
		loaded_graph->elements[2].add_element("attribute", "+classB: string");
		loaded_graph->elements[2].add_element("operation", "+string getClassB()");
		loaded_graph->elements[2].add_element("operation", "+void setClassB(string o)");
		loaded_graph->add_element("node", "");
		loaded_graph->elements[3].add_attribute("id", "3");
		loaded_graph->elements[3].add_attribute("name", "ClassC");
		loaded_graph->add_element("node", "");
		loaded_graph->elements[4].add_attribute("id", "4");
		loaded_graph->elements[4].add_attribute("name", "ClassD");
		loaded_graph->add_element("edge", "");
		loaded_graph->elements[5].add_attribute("id", "0");
		loaded_graph->elements[5].add_attribute("source", "1");
		loaded_graph->elements[5].add_attribute("target", "0");
		loaded_graph->elements[5].add_attribute("type", "inheritance");
		loaded_graph->add_element("edge", "");
		loaded_graph->elements[6].add_attribute("id", "1");
		loaded_graph->elements[6].add_attribute("source", "2");
		loaded_graph->elements[6].add_attribute("target", "0");
		loaded_graph->elements[6].add_attribute("type", "inheritance");
		loaded_graph->add_element("edge", "");
		loaded_graph->elements[7].add_attribute("id", "2");
		loaded_graph->elements[7].add_attribute("source", "3");
		loaded_graph->elements[7].add_attribute("target", "1");
		loaded_graph->elements[7].add_attribute("type", "composition");
		loaded_graph->add_element("edge", "");
		loaded_graph->elements[8].add_attribute("id", "3");
		loaded_graph->elements[8].add_attribute("source", "4");
		loaded_graph->elements[8].add_attribute("target", "2");
		loaded_graph->elements[8].add_attribute("type", "dependency");

		//return *loaded_graph;
	};
};


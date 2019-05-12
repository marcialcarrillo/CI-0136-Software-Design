#pragma once
#include "TagElement.h"

class MockReader
{
public:
	TagElement* loaded_graph;
	MockReader(TagElement *input) : loaded_graph(input) {};
	~MockReader() {};


	virtual void read_file() = 0; //create mock file

};


#pragma once
#include <vector>
#include <string>
#include "GraphUML.h"
#include "ClassUML.h"
#include "ArrowUML.h"

class AbstractGraphPrinter
{
private:
	string serialization;
public:
	virtual void print_graph(GraphUML * graph) = 0;
	virtual void print_header() = 0;
	virtual void print_classes(vector< ClassUML* > classes) = 0;
	virtual void print_class(ClassUML * node) = 0;
	virtual void print_arrows(vector< ArrowUML* > arrows) = 0;
	virtual void print_arrow(ArrowUML* arrow) = 0;
	virtual void print_end() = 0;
	virtual string get_serialization() = 0;

};
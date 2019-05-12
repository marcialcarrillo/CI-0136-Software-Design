#pragma once

#pragma once

#pragma once

#include "AbstactGraphPrinter.h"
#include <string>

class XMLGraphPrinter : public AbstractGraphPrinter {

private:
	string serialization;
public:
	XMLGraphPrinter();
	~XMLGraphPrinter();
	virtual void print_graph(GraphUML* graph) override;
	virtual void print_header() override;
	virtual void print_classes(vector< ClassUML* > classes) override;
	virtual void print_class(ClassUML* node) override;
	virtual void print_arrows(vector< ArrowUML* > arrows) override;
	virtual void print_arrow(ArrowUML* arrow) override;
	virtual void print_end() override;
	virtual string get_serialization() override;
};

XMLGraphPrinter::XMLGraphPrinter() : serialization("")
{
}

XMLGraphPrinter::~XMLGraphPrinter()
{
}

void XMLGraphPrinter::print_header() {
	serialization += "<?xml version=\"1.0\" encoding=\"UTF - 8\"?>\n";
	serialization += "< graphml xmlns = \"http://graphml.graphdrawing.org/xmlns\"\n";
	serialization += "xmlns:xsi = \"http://www.w3.org/2001/XMLSchema-instance\"\n";
	serialization += "xsi : schemaLocation = \"http://graphml.graphdrawing.org/xmlns\n";
	serialization += "http ://graphml.graphdrawing.org/xmlns/1.0/graphml.xsd\">";
	serialization += "\t<key id = \"at\" for = \"node\" attr.name = \"attribute\" attr.type = \"string\"/>\n";
	serialization += "\t<key id = \"mt\" for = \"node\" attr.name = \"method\" attr.type = \"string\"/>\n";
	serialization += "\t<key id = \"tp\" for = \"edge\" attr.name = \"type\" attr.type = \"string\"/>\n";

}

void XMLGraphPrinter::print_classes(vector<ClassUML*> classes)
{
	for (int i = 0; i < classes.size(); i++)
	{
		print_class(classes[i]);
	}
}

void XMLGraphPrinter::print_class(ClassUML* node)
{
	serialization += "\t\t<node id = \"" + node->id + "\"/>\n";
	bool hasData = false;
	if (node->attributes.size() > 0) {
		hasData = true;
		for (int i = 0; i < node->attributes.size(); i++)
		{
			serialization += "\t\t\t<data key = \"at\">" + node->attributes[i] + "< / data>\n";
		}
	}

	if (node->operations.size() > 0) {
		hasData = true;
		for (int i = 0; i < node->operations.size(); i++)
		{
			serialization += "\t\t\t<data key = \"mt\">" + node->operations[i] + "< / data>\n";
		}
	}

	if (hasData) {
		serialization += "\t\t</node>\n";
	}

}

void XMLGraphPrinter::print_arrows(vector<ArrowUML*> arrows)
{
	for (int i = 0; i < arrows.size(); i++)
	{
		print_arrow(arrows[i]);
	}
}

void XMLGraphPrinter::print_arrow(ArrowUML* arrow)
{
	serialization += "\t\t<edge id = \"" + arrow->id + "\" source = \" " + arrow->source + "\" target = \"" + arrow->target + "\">\n";
	serialization += "\t\t\t<data key = \"tp\">" + arrow->type + "< / data>\n";
	serialization += "\t\t</edge>\n";
}


void XMLGraphPrinter::print_end() {
	serialization += "\t</graph>\n";
	serialization += "</graphml>";
}

string XMLGraphPrinter::get_serialization()
{
	return serialization;
}

void XMLGraphPrinter::print_graph(GraphUML* graph) {
	print_header();
	serialization += "\t<graph id = \"" + graph->get_graph_id() + "\"";
	if (graph->get_directed()) {
		serialization += "edgedefault = \"directed\">\n";
	}
	else {
		serialization += "edgedefault = \"undirected\">\n";
	}
}
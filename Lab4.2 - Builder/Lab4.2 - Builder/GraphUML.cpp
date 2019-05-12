#include "GraphUML.h"

GraphUML::GraphUML(){
	this->directed = true;
	this->graph_id = "g0";
}

GraphUML::GraphUML(bool directed, string id) {
	this->directed = directed;
	this->graph_id = id;
}

string GraphUML::get_graph_id()
{
	return graph_id;
}

bool GraphUML::get_directed() {
	return directed;
}

vector<ClassUML*> GraphUML::getClasses()
{
	return classes;
}

vector<ArrowUML*> GraphUML::getArrows()
{
	return arrows;
}

ClassUML* GraphUML::getClass(int index)
{
	return classes[index];
}

ArrowUML* GraphUML::getArrow(int index)
{
	return arrows[index];
}

void GraphUML::add_node(ClassUML * node)
{
	classes.push_back(node);
}

void GraphUML::add_arrow(ArrowUML * arrow)
{
	arrows.push_back(arrow);
}

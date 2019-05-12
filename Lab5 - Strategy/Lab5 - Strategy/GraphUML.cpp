#include "GraphUML.h"

int GraphUML::get_cantor_pair(int node1, int node2)
{
	int x = node1;
	int y = node2;
	if (node1 < node2) //we sort the nodes to remove the importance of the order in which the nodes are inputed in the function, to avoid duplicates in the arrow map
	{
		x = node2;
		y = node1;
	}
	return ((x + y) * (x + y + 1)) / 2 + y;;
}

void GraphUML::add_node(ClassUML node)
{
	if (node.id == -1)
	{
		node.id = node_id_generator;
		node_id_generator++;
	}
	classes.push_back(node);
}

void GraphUML::emplace_arrow(string type, int source, int target)
{
	arrows.emplace(arrows.end(), type, source, target);
}

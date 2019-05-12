#include "GraphUML.h"
#include "MockXMLReader.h"
#include "TagElement.h"
#include <string>

using namespace std;

int main()
{
	TagElement imported_tags("graph","");
	MockXMLReader reader(&imported_tags);
	reader.read_file();
	
	ClassUML *node;
	vector<string> node_attributes;
	vector<string> node_operations;

	GraphUML imported_graph;

	for (int i = 0; i < imported_tags.elements.size(); i++)
	{
		int type;

		if (imported_tags.elements[i].name == "node")
		{
			type = 0;
		}
		else if (imported_tags.elements[i].name == "edge")
		{
			type = 1;
		}
		else
		{
			type = -1; //error
		}		

		switch (type)
		{
		case 0:

			

			for (int j = 0; j < imported_tags.elements[i].elements.size(); j++)
			{
				int node_subtype;

				if (imported_tags.elements[i].elements[j].name == "attribute")
				{
					node_subtype = 0;
				}
				else if (imported_tags.elements[i].elements[j].name == "operation")
				{
					node_subtype = 1;
				}
				else
				{
					node_subtype = -1; //error
				}

				switch (node_subtype)
				{
				case 0:
					node_attributes.push_back(imported_tags.elements[i].elements[j].text);
					cout << "added an attribute to node " << i << endl;
					break;
				case 1:
					node_operations.push_back(imported_tags.elements[i].elements[j].text);
					cout << "added an operation to node " << i << endl;
					break;
				default:
					cout << "failed adding node's parameters" << endl;
					break;
				}
			}
		

			node = new ClassUML(stoi(imported_tags.elements[i].attributes[0].text), imported_tags.elements[i].attributes[1].text, node_attributes, node_operations);
			cout << "got a node!" << endl;
			imported_graph.add_node(*node);
			node_attributes.clear();
			node_operations.clear();
			break;

		case 1 :
			imported_graph.emplace_arrow(imported_tags.elements[i].attributes[3].text, stoi(imported_tags.elements[i].attributes[1].text), stoi(imported_tags.elements[i].attributes[2].text));
			cout << "got an arrow!" << endl;
			break;

		default:
			cout << "got a default case my boy" << endl;
		}
	}


	cin.ignore();
	return 0;
}


#include "GraphUML.h"
#include "MockXMLReader.h"
#include "MockJSONReader.h"
#include "TagElement.h"
#include <string>
#include <memory>

using namespace std;

void translate_file_structure_into_graph(TagElement);

int main()
{
	TagElement imported_tags("graph","");
	shared_ptr<MockReader> XMLReader = shared_ptr<MockReader>(new MockXMLReader(&imported_tags));
	MockReader& myXMLReader = *XMLReader;

	myXMLReader.read_file();
	
	translate_file_structure_into_graph(imported_tags);	

	cout << endl << endl << "Launching new run with JSON" << endl << endl;

	TagElement imported_tags2("graph", "");
	shared_ptr<MockReader> JSONReader = shared_ptr<MockReader>(new MockJSONReader(&imported_tags2));
	MockReader& myJSONReader = *JSONReader;

	myJSONReader.read_file();

	translate_file_structure_into_graph(imported_tags2);

	cin.ignore();
	return 0;
}

void translate_file_structure_into_graph(TagElement input_tags)
{
	ClassUML *node;
	vector<string> node_attributes;
	vector<string> node_operations;

	GraphUML imported_graph;

	//Translating the file we read, a TagElement, into an internal graph (GraphUML)

	for (int i = 0; i < input_tags.elements.size(); i++)
	{
		int type;

		if (input_tags.elements[i].name == "node")
		{
			type = 0;
		}
		else if (input_tags.elements[i].name == "edge")
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



			for (int j = 0; j < input_tags.elements[i].elements.size(); j++)
			{
				int node_subtype;

				if (input_tags.elements[i].elements[j].name == "attribute")
				{
					node_subtype = 0;
				}
				else if (input_tags.elements[i].elements[j].name == "operation")
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
					node_attributes.push_back(input_tags.elements[i].elements[j].text);
					cout << "added an attribute to node " << i << endl;
					break;
				case 1:
					node_operations.push_back(input_tags.elements[i].elements[j].text);
					cout << "added an operation to node " << i << endl;
					break;
				default:
					cout << "failed adding node's parameters" << endl;
					break;
				}
			}


			node = new ClassUML(stoi(input_tags.elements[i].attributes[0].text), input_tags.elements[i].attributes[1].text, node_attributes, node_operations);
			cout << "added node " << i << "!" << endl;
			imported_graph.add_node(*node);
			node_attributes.clear();
			node_operations.clear();
			break;

		case 1:
			imported_graph.emplace_arrow(input_tags.elements[i].attributes[3].text, stoi(input_tags.elements[i].attributes[1].text), stoi(input_tags.elements[i].attributes[2].text));
			cout << "got an arrow!" << endl;
			break;

		default:
			cout << "got an undentified graph type, NO node OR arrow (Error)" << endl;
		}
	}

	//Translation completed; we have the graph in the internal memory

}


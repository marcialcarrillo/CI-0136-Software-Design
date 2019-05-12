#pragma once
#include "ArrowUML.h"
#include <map>

using namespace std;

class GraphUML 
{
	private:
		bool directed;
		int graph_id;
		vector<ClassUML> classes;
		vector<ArrowUML> arrows;
		int node_id_generator = 0;
		int arrow_id_generator = 0;

	public:
		int get_cantor_pair(int node1, int node2);
		void add_node(ClassUML node);
		void emplace_arrow(string type, int source, int target);

		
};
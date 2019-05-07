#pragma once
#include "ArrowUML.h"
#include <map>

using namespace std;

class GraphUML 
{
	private:
		vector<ClassUML *> classes;
		map<int, ArrowUML *> arrows;
		int idGenerator = 0;

	public:
		int get_cantor_pair(int node1, int node2);
		void add_node(ClassUML* node);
		void add_arrow(ArrowUML* arrow);

		
};
#pragma once
#include "ArrowUML.h"
#include <map>

using namespace std;

class GraphUML 
{
	private:
		bool directed;
		string graph_id;
		vector<ClassUML *> classes;
		vector<ArrowUML *> arrows;

	public:
		GraphUML();
		GraphUML(bool directed, string id);
		string get_graph_id();
		bool get_directed();
		vector<ClassUML*> getClasses();
		vector<ArrowUML*> getArrows();
		ClassUML* getClass(int index);
		ArrowUML* getArrow(int index);
		void add_node(ClassUML* node);
		void add_arrow(ArrowUML* arrow);

		
};
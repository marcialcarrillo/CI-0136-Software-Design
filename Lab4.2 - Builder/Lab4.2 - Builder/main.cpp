#include "AbstactGraphPrinter.h"
#include "ArrowUML.h"
#include "ClassUML.h"
#include "GraphUML.h"
#include "JSONGraphPrinter.h"
#include "XMLGraphPrinter.h"

int main() {
	GraphUML graph(true, "g0");
	
	ClassUML classBase("n0", "ClassBase");
	classBase.attributes.push_back("+classBase1: int");
	classBase.operations.push_back("+int getClassBase1()");
	classBase.operations.push_back("+void setClassBase1(int o)");
	
	ClassUML classA("n1", "ClassA");
	classA.attributes.push_back("+classA: float");
	classA.operations.push_back("+float getClassA()");
	classA.operations.push_back("+void setClassA(float o)");

	ClassUML classB("n2", "ClassB");
	classB.attributes.push_back("+classB: string");
	classB.operations.push_back("+string getClassB()");
	classB.operations.push_back("+void setClassB(string o)");

	ClassUML classC("n3", "ClassC");
	ClassUML classD("n4", "ClassD");
	
	ArrowUML arrow1("a1", "Herencia", "n1", "n0");
	ArrowUML arrow2("a2", "Herencia", "n2", "n0");
	ArrowUML arrow3("a3", "Composition", "n3", "n1");
	ArrowUML arrow4("a4", "<<use>>", "n4", "n2");

	graph.add_node(&classA);
	graph.add_node(&classB);
	graph.add_node(&classC);
	graph.add_node(&classD);

	graph.add_arrow(&arrow1);
	graph.add_arrow(&arrow2);
	graph.add_arrow(&arrow3);
	graph.add_arrow(&arrow4);

	AbstractGraphPrinter * printer1 = new JSONGraphPrinter();
	printer1->print_graph(&graph);
	string JsonFile = printer1->get_serialization();
	cout << JsonFile << endl;

	AbstractGraphPrinter * printer2 = new XMLGraphPrinter();
	printer2->print_graph(&graph);
	string XMLFile = printer2->get_serialization();
	cout << XMLFile << endl;

	delete printer1;
	delete printer2;
	cin.ignore();
	return 0;
}
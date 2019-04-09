#include "GrafoUML.h"


GrafoUML::GrafoUML(){}

void GrafoUML::addNode(Nodo * nodo){
	grafo.addNode(nodo);
}

void GrafoUML::addRelation(int nodo1, int nodo2, Arista * arista){
	grafo.addRelation(nodo1, nodo2, arista);
}

string GrafoUML::getRelation(int nodo1, int nodo2){
	string relation = grafo.getRelation(nodo1, nodo2);
	return relation;
}

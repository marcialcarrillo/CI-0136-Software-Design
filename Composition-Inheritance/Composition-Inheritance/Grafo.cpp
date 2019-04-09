#include "Grafo.h"

Grafo::Grafo() {

}

Grafo::~Grafo() {

}

void Grafo::addNode(Nodo * nodo){
	nodos.push_back(nodo);
}

Nodo * Grafo::getNode(int nodo) {
	return nodos[nodo];
}

void Grafo::addRelation(int nodo1, int nodo2, Arista * arista){
	int key = (nodo1 * 10) + nodo2;
	aristas.insert( pair< int, Arista * >(key, arista) );
}
string Grafo::getRelation(int nodo1, int nodo2) const{
	int key = (nodo1 * 10) + nodo2;
	ostringstream oss;
	if (aristas.find(key) != aristas.end())
	{
		oss << (aristas.find(key)->second)->toString();
	}
	else
	{
		cout << "Relation not found";
	}
	return oss.str();

}

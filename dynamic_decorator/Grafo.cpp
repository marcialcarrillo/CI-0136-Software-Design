#include "Grafo.h"

Grafo::Grafo() {

}

Grafo::~Grafo() {

}

void Grafo::addNode(Nodo * nodo){
	nodos.push_back(nodo);
}

void Grafo::addRelation(int nodo1, int nodo2, Arista * arista){
	int key = (nodo1 * 10) + nodo2;
	aristas.insert( pair< int, Arista * >(key, arista) );
}
string Grafo::getRelation(int nodo1, int nodo2){
	int key = (nodo1 * 10) + nodo2;
	ostringstream oss;
	oss << *(aristas.find(key)->second) << radius;
	return oss.str();

}

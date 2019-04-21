#include "Grafo.h"

int Grafo::get_cantor_pair(int node1, int node2)
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

Grafo::Grafo(AdjacencyManager* adjManager) : adjManager(adjManager) {

}

Grafo::~Grafo() {

}

void Grafo::addNode(Nodo * nodo){
	nodos.push_back(nodo);
	adjManager->add_node();
}

void Grafo::addRelation(int nodo1, int nodo2, Arista * arista){
	int key = get_cantor_pair(nodo1, nodo2);
	aristas.insert( pair< int, Arista * >(key, arista) );
	adjManager->addAdjacency(nodo1, nodo2);
}

string Grafo::getRelation(int nodo1, int nodo2) {
	int key = get_cantor_pair(nodo1,nodo2);
	ostringstream oss;
	if (aristas.find(key) != aristas.end())
	{
		oss << (aristas.find(key)->second)->toString;
	}
	else
	{
		cout << "Relation not found";
	}
	return oss.str();

}

bool Grafo::isAdjacent(int node1, int node2)
{
	return adjManager->isAdjacent(node1, node2);
}

void Grafo::addAdjacency(int node1, int node2)
{
	adjManager->addAdjacency(node1, node2);
}

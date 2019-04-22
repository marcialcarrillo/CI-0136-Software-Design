#include "Arista.h"
#include "Grafo.h"
#include "AdjacencyManager.h"
#include "MatrixAdjacency.h"
#include "ListAdjacency.h"
#include "Nodo.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	

	MatrixAdjacency* ma = new MatrixAdjacency;
	//= new MatrixAdjacency;
	Grafo graph(ma);

	Nodo* node0 = new Nodo("node0", 5, 5);
	graph.addNode(node0);

	Nodo* node1 = new Nodo("node1", 5, 5);
	graph.addNode(node1);

	Arista* arrow0 = new Arista(node0, node1);
	graph.addRelation(node0->id, node1->id, arrow0);

	Nodo* node2 = new Nodo("node2", 5, 5);
	graph.addNode(node2);

	Nodo* node3 = new Nodo("node3", 5, 5);
	graph.addNode(node3);

	Arista* arrow1 = new Arista(node1, node2);
	graph.addRelation(node1->id, node2->id, arrow1);

	Arista* arrow2 = new Arista(node1, node3);
	graph.addRelation(node1->id, node3->id, arrow2);

	Arista* arrow3 = new Arista(node2, node3);
	graph.addRelation(node2->id, node3->id, arrow3);
	

	vector<int> node1adjacencies = graph.getAllAdjacencies(node1->id);
	for (auto adjacentnode : node1adjacencies)
	{
		cout << "Via Matrix: Node 1 is adjacent to Node " << adjacentnode << endl;
	}

	vector<int> node2adjacencies = graph.getAllAdjacencies(node2->id);
	for (auto adjacentnode : node2adjacencies)
	{
		cout << "Via Matrix: Node 2 is adjacent to Node " << adjacentnode << endl;
	}

	

	///***** VIA LIST ****////

	ListAdjacency* la = new ListAdjacency;
	//= new MatrixAdjacency;
	Grafo graphLA(la);

	Nodo* nodeLA0 = new Nodo("nodeLA0", 5, 5);
	graphLA.addNode(nodeLA0);

	Nodo* nodeLA1 = new Nodo("nodeLA1", 5, 5);
	graphLA.addNode(nodeLA1);

	Arista* arrowLA0 = new Arista(nodeLA0, nodeLA1);
	graphLA.addRelation(nodeLA0->id, nodeLA1->id, arrowLA0);

	Nodo* nodeLA2 = new Nodo("nodeLA2", 5, 5);
	graphLA.addNode(nodeLA2);

	Nodo* nodeLA3 = new Nodo("nodeLA3", 5, 5);
	graphLA.addNode(nodeLA3);

	Arista* arrowLA1 = new Arista(nodeLA1, nodeLA2);
	graphLA.addRelation(nodeLA1->id, nodeLA2->id, arrowLA1);

	//Arista* arrowLA2 = new Arista(nodeLA1, nodeLA3);
	//graphLA.addRelation(nodeLA1->id, nodeLA3->id, arrowLA2);

	Arista* arrowLA3 = new Arista(nodeLA2, nodeLA3);
	graphLA.addRelation(nodeLA2->id, nodeLA3->id, arrowLA3);

	vector<int> nodeLA1adjacencies = graphLA.getAllAdjacencies(nodeLA1->id);
	for (auto adjacentnodeLA : nodeLA1adjacencies)
	{
		cout << "Via List: nodeLA 1 is adjacent to nodeLA " << adjacentnodeLA << endl;
	}

	vector<int> nodeLA2adjacencies = graphLA.getAllAdjacencies(nodeLA2->id);
	for (auto adjacentnodeLA : nodeLA2adjacencies)
	{
		cout << "Via List: nodeLA 2 is adjacent to nodeLA " << adjacentnodeLA << endl;
	}



	cout << "done\n";
	//string anykeytoexit;
	cin.ignore();

	return 0;
}
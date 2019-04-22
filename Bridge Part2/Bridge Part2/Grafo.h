#pragma once

#include "Nodo.h"
#include <map>
#include "Arista.h"
#include <vector>
#include <sstream>
#include <string>
#include "AdjacencyManager.h"

using namespace std;

template <class T>
class Grafo{
	private:
		vector<Nodo *> nodos;
		map<int, Arista *> aristas;
		T* adjManager;
		//int get_cantor_pair(int, int);
		int idGenerator = 0;
		
	public:

		/*
		Grafo();
		~Grafo();
		void addNode(Nodo *);
		void addRelation(int, int, Arista *);
		string getRelation(int, int);
		bool isAdjacent(int, int);
		//void addAdjacency(int, int); //included in "addRelation method
		vector<int> getAllAdjacencies(int);
		*/

		
		 int get_cantor_pair(int node1, int node2)
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

		 Grafo() {
			adjManager = new T;
		}

		 ~Grafo() {

		}

		
		 void addNode(Nodo * nodo) {
			nodo->id = idGenerator;
			idGenerator++;
			nodos.push_back(nodo);
			adjManager->add_node();
		}

		
		 void addRelation(int nodo1, int nodo2, Arista * arista) {
			int key = get_cantor_pair(nodo1, nodo2);
			aristas.insert(pair< int, Arista * >(key, arista));
			adjManager->addAdjacency(nodo1, nodo2);
		}

		
		 string getRelation(int nodo1, int nodo2) {
			int key = get_cantor_pair(nodo1, nodo2);
			ostringstream oss;
			if (aristas.find(key) != aristas.end())
			{
				oss << aristas.find(key)->second->toString();
			}
			else
			{
				cout << "Relation not found";
			}
			return oss.str();

		}

		
		 bool isAdjacent(int node1, int node2)
		{
			return adjManager->isAdjacent(node1, node2);
		}

		
		 vector<int> getAllAdjacencies(int node)
		{
			return adjManager->getAllAdjacencies(node);
		}



		//void addAdjacency(int node1, int node2)
		//{
		//	adjManager->addAdjacency(node1, node2);
		//}

};
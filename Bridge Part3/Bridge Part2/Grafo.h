#pragma once

#include "Nodo.h"
#include <map>
#include "Arista.h"
#include <vector>
#include <sstream>
#include <string>
#include "AdjacencyManager.h"

using namespace std;

class Grafo{
	private:
		vector<Nodo *> nodos;
		map<int, Arista *> aristas;
		AdjacencyManager* adjManager;
		int get_cantor_pair(int, int);
		int idGenerator = 0;
		
	public:
		Grafo(AdjacencyManager*);
		~Grafo();
		void addNode(Nodo *);
		void addRelation(int, int, Arista *);
		string getRelation(int, int);
		bool isAdjacent(int, int);
		//void addAdjacency(int, int); //included in "addRelation method
		vector<int> getAllAdjacencies(int);
};
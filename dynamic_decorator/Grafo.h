#include "Nodo.h"
#include <map>
#include "Arista.h"
#include <vector>

class Grafo{
	private:
		vector<Nodo *> nodos;
		map<int, Arista *> aristas;
	public:
		Grafo() {};
		~Grafo() {};
		void addNode(Nodo *);
		void addRelation(int, int);
		string getRelation(int, int);
};
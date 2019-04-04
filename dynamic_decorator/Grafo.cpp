#include "Nodo.h"
#include <map>

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
}
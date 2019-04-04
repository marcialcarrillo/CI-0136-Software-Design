#include "Grafo.h"
#include "Arista.h"
#include <string>

class GrafoUML{
	private:
		Grafo grafo;
	public:
		GrafoUML();
		void addNode(Nodo *);
		void addRelation(int, int, Arista *);
		string getRelation(int, int);
};
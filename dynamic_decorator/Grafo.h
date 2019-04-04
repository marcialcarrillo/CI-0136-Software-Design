#include "Nodo.h"
#include <map>
#include "Arista.h"
#include <vector>
#include <sstream>
using namespace std;

class Grafo{
	private:
		vector<Nodo *> nodos;
		map<int, Arista *> aristas;
	public:
		Grafo();
		~Grafo();
		void addNode(Nodo *);
		void addRelation(int, int, Arista *);
		string getRelation(int, int) const;
};
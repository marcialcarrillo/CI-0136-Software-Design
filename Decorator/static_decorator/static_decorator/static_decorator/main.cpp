#include "Arista.h"
#include "AristaAggregation.h"
#include "AristaAssociation.h"
#include "AristaComposition.h"
#include "AristaContainment.h"
#include "AristaDependency.h"
#include "AristaDirectional.h"
#include "AristaGeneralization.h"
#include "AristaRealization.h"
#include "Grafo.h"
#include "GrafoUML.h"
#include "Nodo.h"
#include "NodoUML.h"

using namespace std;

int main() {
	Grafo grafo;

	Nodo* nodo1 = new Nodo("Nodo1", 0, 0);
	Nodo* nodo2 = new Nodo("Nodo2", 0, 1);
	Nodo* nodo3 = new Nodo("Nodo3", 1, 1);

	grafo.addNode(nodo1);
	grafo.addNode(nodo2);
	grafo.addNode(nodo3);

	AristaDirectional aristaNonDirectional(false);
	AristaAggregation< AristaDirectional > aristaAggDir(false);
	AristaComposition < AristaAssociation < AristaDirectional > > aristaCompAsso(false);
	grafo.addRelation(1, 0, &aristaNonDirectional);
	grafo.addRelation(0, 2, &aristaAggDir);
	grafo.addRelation(1, 2, &aristaCompAsso);

	cout << grafo.getRelation(1, 0) << endl << endl;
	cout << grafo.getRelation(0, 2) << endl << endl;
	cout << grafo.getRelation(1, 2) << endl << endl;

	return 0;
}

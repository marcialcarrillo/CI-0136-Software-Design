#include "Arista.h"
#include "AristaAggregation.h"
#include "AristaAssociation.h"
#include "AristaComposition.h"
#include "AristaContainment.h"
#include "AristaDependency.h"
#include "AristaDirectional.h"
#include "AristaGeneralization.h"
#include "AristaRealization.h"
#include "Diagrama.h"
#include "Elementos.h"
#include "Grafo.h"
#include "GrafoUML.h"
#include "Nodo.h"
#include "NodoUML.h"
#include "Paquete.h"

using namespace std;

int main() {
	Grafo grafo;
	
	Nodo* nodo1 = new Nodo("Nodo1", 0, 0);
	Nodo* nodo2 = new Nodo("Nodo2", 0, 1);
	Nodo* nodo3 = new Nodo("Nodo3", 1, 1);

	grafo.addNode(nodo1);
	grafo.addNode(nodo2);
	grafo.addNode(nodo3);
	Paquete subpaquete(grafo, "Subpaquete vacio");

	Diagrama diagrama(grafo, "Diagrama principal");
	diagrama.agregarNodo(grafo.getNode(0));
	diagrama.agregarNodo(grafo.getNode(1));
	diagrama.agregarNodo(grafo.getNode(2));

	diagrama.seleccionar();
	cin.ignore();
	return 0;
}

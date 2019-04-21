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
	MatrixAdjacency ma;
	//= new MatrixAdjacency;
	Grafo graph(ma);

	return 0;
}
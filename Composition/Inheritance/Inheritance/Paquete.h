#pragma once
#include <list>
#include <string.h>
#include "Elementos.h"
#include "Grafo.h"
using namespace std;

class Paquete : public list < Nodo * >, public Elementos < Paquete >
{
private:
	Grafo grafo;
	string pathToIcon;
public:
	Paquete(Grafo, string);
	~Paquete();
	void agregarNodo(Nodo *);
	void setIcon(string);
	string getIcon();

};
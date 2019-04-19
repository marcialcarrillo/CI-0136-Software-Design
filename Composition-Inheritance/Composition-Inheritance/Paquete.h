#pragma once
#include <list>
#include <string.h>
#include "Elementos.h"
#include "Grafo.h"
using namespace std;

class Paquete : public list < Elementos* >, public Elementos
{
private:
	Grafo grafo;
	string pathToIcon;
	string title;
public:
	Paquete(Grafo, string);
	~Paquete();
	void agregarNodo(Elementos *);
	void setIcon(string);
	string getIcon();
	void seleccionar();
	void cortar();
	void pegar();
	void eliminar();
	void aumentar(float);
	void reducir(float);
	void dibujar();

};
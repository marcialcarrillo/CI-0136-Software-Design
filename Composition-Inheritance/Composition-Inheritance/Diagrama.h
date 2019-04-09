#pragma once
#include <vector>
#include "Elementos.h"
#include "Grafo.h"
using namespace std;

class Diagrama : public vector < Elementos >
{
	private:
		Grafo grafo;
		string pathToIcon;
	public: 
		Diagrama(Grafo);
		~Diagrama();
		void agregarNodo(int);
		string pathToIcon;
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
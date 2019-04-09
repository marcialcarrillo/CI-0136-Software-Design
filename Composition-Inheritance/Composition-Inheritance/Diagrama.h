#pragma once
#include <vector>
#include <string.h>
#include "Elementos.h"
#include "Grafo.h"
using namespace std;

class Diagrama : public vector < Elementos * >, public Elementos
{
	private:
		Grafo grafo;
		string pathToIcon;
		string title;
	public: 
		Diagrama(Grafo, string);
		~Diagrama();
		void agregarNodo(int);
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
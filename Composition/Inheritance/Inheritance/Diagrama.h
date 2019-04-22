#pragma once
#include <vector>
#include <string.h>
#include "Elementos.h"
#include "Grafo.h"
using namespace std;

class Diagrama : public vector < Nodo * >, public Elementos < Diagrama >
{
	private:
		Grafo grafo;
		string pathToIcon;
	public: 
		Diagrama(Grafo, string);
		~Diagrama();
		void agregarNodo(Nodo *);
		void setIcon(string);
		string getIcon();
		
};
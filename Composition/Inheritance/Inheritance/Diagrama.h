#pragma once
#include <vector>
#include <string.h>
#include "Elementos.h"
#include "Grafo.h"
using namespace std;

class Diagrama : public vector < Elementos * >, public Elementos < Diagrama >
{
	private:
		Grafo grafo;
		string pathToIcon;
	public: 
		Diagrama(Grafo, string);
		~Diagrama();
		void agregarNodo(Elementos *);
		void setIcon(string);
		string getIcon();
		
};
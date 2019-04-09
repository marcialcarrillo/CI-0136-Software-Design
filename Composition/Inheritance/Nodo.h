#pragma once

#include <string>
#include <iostream>
#include "Elementos.h"
using namespace std;

class Nodo : public Elementos{
	protected:
		int x;
		int y;
		string title;
	public:
		Nodo(string,int,int);
		 ~Nodo();
		void seleccionar();
		void cortar();
		void pegar();
		void eliminar();
		void aumentar(float);
		void reducir(float);
		void dibujar();
};
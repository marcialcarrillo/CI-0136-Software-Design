#pragma once

#include "Nodo.h"
#include <list>

class NodoUML : public Nodo{
	private:
		list<string> methods;
		list<string> attributes;

	public:
		NodoUML(string, int, int);
		void addMethod(string);
		void addAttribute(string);
		virtual void seleccionar() = 0;
		virtual void cortar() = 0;
		virtual void pegar() = 0;
		virtual void eliminar() = 0;
		virtual void aumentar() = 0;
		virtual void reducir() = 0;
		virtual void dibujar() = 0;
};
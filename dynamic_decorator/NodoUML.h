#include "Nodo.h"
#include <list>

class NodoUML : public Nodo{
	private:
		Nodo& Nodo;
		list<string> methods;
		list<string> attributes;

	public:
		NodoUML(&Nodo);
		void addMethod(string);
		void addAttribute(string);
};
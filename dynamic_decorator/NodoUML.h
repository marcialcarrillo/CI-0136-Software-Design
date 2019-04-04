#include "Nodo.h"
class NodoUML : public Nodo{
	private:
		Nodo& Nodo;
		list<string> methods;
		list<string> attributes;

	public:
		NodoUML(Nodo& nodo);
		void addMethod(string);
		void addAttribute(string);
}
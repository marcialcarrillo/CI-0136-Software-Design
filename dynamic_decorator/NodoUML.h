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
};
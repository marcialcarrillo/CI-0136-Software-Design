#include "NodoUML.h"

NodoUML::NodoUML(string title, int x, int y) : Nodo(title, x, y){

}

void NodoUML::addMethod(string method)
{
	methods.push_back(method);
}

void NodoUML::addAttribute(string attribute)
{
	attributes.push_back(attribute);
}

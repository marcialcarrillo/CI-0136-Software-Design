#include "Paquete.h"

Paquete::Paquete(Grafo grafo, string title) {
	this->grafo = grafo;
	this->title = title;
}
Paquete::~Paquete() {

}

void Paquete::setIcon(string inputPathToIcon)
{
	pathToIcon = inputPathToIcon;
}

string Paquete::getIcon()
{
	return pathToIcon;
}

void Paquete::agregarNodo(Elementos * elemento) {
	push_back(elemento);
}
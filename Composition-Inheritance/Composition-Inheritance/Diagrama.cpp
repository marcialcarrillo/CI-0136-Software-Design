#include "Diagrama.h"

Diagrama::Diagrama(Grafo grafo, string title) {
	this->grafo = grafo;
	this->title = title;
}
Diagrama::~Diagrama() {

}

void Diagrama::setIcon(string inputPathToIcon)
{
	pathToIcon = inputPathToIcon;
}

string Diagrama::getIcon()
{
	return pathToIcon;
}


void Diagrama::agregarNodo(int nodo) {
	push_back(grafo.getNode(nodo));
}

void Diagrama::seleccionar() {
	cout << "Se seleccionó el diagrama " << title << endl;
	for (Elementos& elemento : static_cast<Elementos*>(this))
	{
		
	}
}

void Diagrama::cortar() {
	cout << "Se cortó el diagrama " << title << endl;
}

void Diagrama::pegar() {
	cout << "Se pegó el diagrama " << title << endl;
}

void Diagrama::eliminar() {
	cout << "Se eliminó el diagrama" << title << endl;
}

void Diagrama::aumentar(float aumento) {
	cout << "Se aumentó el diagrama" << title << " en " << aumento << endl;
}

void Diagrama::reducir(float decremento) {
	cout << "Se redujo el diagrama" << title << " en " << decremento << endl;
}

void Diagrama::dibujar() {
	cout << "Se dibuja el diagrama " << title << endl;
}
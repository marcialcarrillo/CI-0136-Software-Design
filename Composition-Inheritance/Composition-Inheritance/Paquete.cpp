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


void Paquete::agregarNodo(int nodo) {
	push_back(grafo.getNode(nodo));
}

void Paquete::seleccionar() {
	cout << "Se seleccionó el Paquete " << title << endl;
	for (Elementos* element : (*this))
	{
		element->seleccionar();
	}
}

void Paquete::cortar() {
	cout << "Se cortó el Paquete " << title << endl;
	for (Elementos* element : (*this))
	{
		element->cortar();
	}
}

void Paquete::pegar() {
	cout << "Se pegó el Paquete " << title << endl;
	for (Elementos* element : (*this))
	{
		element->pegar();
	}
}

void Paquete::eliminar() {
	cout << "Se eliminó el Paquete" << title << endl;
	for (Elementos* element : (*this))
	{
		element->eliminar();
	}
}

void Paquete::aumentar(float aumento) {
	cout << "Se aumentó el Paquete" << title << " en " << aumento << endl;
	for (Elementos* element : (*this))
	{
		element->aumentar(aumento);
	}
}

void Paquete::reducir(float decremento) {
	cout << "Se redujo el Paquete" << title << " en " << decremento << endl;
	for (Elementos* element : (*this))
	{
		element->reducir(decremento);
	}
}

void Paquete::dibujar() {
	cout << "Se dibuja el Paquete " << title << endl;
	for (Elementos* element : (*this))
	{
		element->seleccionar();
	}
}
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


void Diagrama::agregarNodo(Elementos * elemento) {
	push_back(elemento);
}

void Diagrama::seleccionar() {
	cout << "Se seleccion� el diagrama " << title << endl;
	for (Elementos* element : (*this))
	{
		cout << "     ";
		element->seleccionar();
	}
}

void Diagrama::cortar() {
	cout << "Se cort� el diagrama " << title << endl;
	for (Elementos* element : (*this))
	{
		cout << "     ";
		element->cortar();
	}
}

void Diagrama::pegar() {
	cout << "Se peg� el diagrama " << title << endl;
	for (Elementos* element : (*this))
	{
		cout << "     ";
		element->pegar();
	}
}

void Diagrama::eliminar() {
	cout << "Se elimin� el diagrama" << title << endl;
	for (Elementos* element : (*this))
	{
		cout << "     ";
		element->eliminar();
	}
}

void Diagrama::aumentar(float aumento) {
	cout << "Se aument� el diagrama" << title << " en " << aumento << endl;
	for (Elementos* element : (*this))
	{
		cout << "     ";
		element->aumentar(aumento);
	}
}

void Diagrama::reducir(float decremento) {
	cout << "Se redujo el diagrama" << title << " en " << decremento << endl;
	for (Elementos* element : (*this))
	{
		cout << "     ";
		element->reducir(decremento);
	}
}

void Diagrama::dibujar() {
	cout << "Se dibuja el diagrama " << title << endl;
	for (Elementos* element : (*this))
	{
		cout << "     ";
		element->seleccionar();
	}
}


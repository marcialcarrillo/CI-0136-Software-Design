#include "Diagrama.h"

void Diagrama::setIcon(string inputPathToIcon)
{
	pathToIcon = inputPathToIcon;
}

string Diagrama::getIcon()
{
	return pathToIcon;
}


void Diagrama::agregarNodo(int nodo) {
	this->push_back.grafo.getNode(nodo);
}

void Diagrama::seleccionar() {
	cout << "Se seleccion� el nodo" << title << endl;

void Diagrama::seleccionar() {
	cout << "Se seleccion� el diagrama" << title << endl;
}

void Diagrama::cortar() {
	cout << "Se cort� el diagrama " << title << endl;
}
void Diagrama::pegar() {
	cout << "Se peg� el diagrama " << title << endl;
}
void Diagrama::eliminar() {
	cout << "Se elimin� el diagrama" << title << endl;
}
void Diagrama::aumentar(float aumento) {
	cout << "Se aument� el diagrama" << title << " en " << aumento << endl;
}
void Diagrama::reducir(float decremento) {
	cout << "Se redujo el diagrama" << title << " en " << decremento << endl;
}
void Diagrama::dibujar() {
	cout << "Se dibuja el diagrama " << title << endl;
}
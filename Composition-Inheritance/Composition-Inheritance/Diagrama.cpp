#include "Diagrama.h"

void setIcon(string inputPathToIcon)
{
	pathToIcon = inputPathToIcon;
}

string getIcon()
{
	return pathToIcon;
}

void Diagrama::agregarNodo(int nodo) {
	this->push_back.grafo.getNode(nodo);
}

void Diagrama::seleccionar() {
	cout << "Se seleccion� el nodo" << title << endl;
}
void Nodo::cortar() {
	cout << "Se cort� el nodo " << title << endl;
}
void Nodo::pegar() {
	cout << "Se peg� el nodo " << title << endl;
}
void Nodo::eliminar() {
	cout << "Se elimin� el nodo" << title << endl;
}
void Nodo::aumentar(float aumento) {
	cout << "Se aument� el nodo" << title << " en " << aumento << endl;
}
void Nodo::reducir(float decremento) {
	cout << "Se redujo el nodo" << title << " en " << decremento << endl;
}
void Nodo::dibujar() {
	cout << "Se dibuja el nodo " << title << endl;
}
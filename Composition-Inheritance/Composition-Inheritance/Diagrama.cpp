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
	cout << "Se seleccionó el nodo" << title << endl;
}
void Nodo::cortar() {
	cout << "Se cortó el nodo " << title << endl;
}
void Nodo::pegar() {
	cout << "Se pegó el nodo " << title << endl;
}
void Nodo::eliminar() {
	cout << "Se eliminó el nodo" << title << endl;
}
void Nodo::aumentar(float aumento) {
	cout << "Se aumentó el nodo" << title << " en " << aumento << endl;
}
void Nodo::reducir(float decremento) {
	cout << "Se redujo el nodo" << title << " en " << decremento << endl;
}
void Nodo::dibujar() {
	cout << "Se dibuja el nodo " << title << endl;
}
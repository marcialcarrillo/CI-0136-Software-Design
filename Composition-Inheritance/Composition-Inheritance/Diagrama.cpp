#include "Diagrama.h"

void Diagrama::setIcon(string inputPathToIcon)
{
	pathToIcon = inputPathToIcon;
}

string Diagrama::getIcon()
{
	return pathToIcon;
}

void Diagrama::Diagrama::seleccionar() {
	cout << "Se seleccionó el diagrama" << title << endl;
}
void Diagrama::Diagrama::cortar() {
	cout << "Se cortó el diagrama " << title << endl;
}
void Diagrama::Diagrama::pegar() {
	cout << "Se pegó el diagrama " << title << endl;
}
void Diagrama::Diagrama::eliminar() {
	cout << "Se eliminó el diagrama" << title << endl;
}
void Diagrama::Diagrama::aumentar(float aumento) {
	cout << "Se aumentó el diagrama" << title << " en " << aumento << endl;
}
void Diagrama::Diagrama::reducir(float decremento) {
	cout << "Se redujo el diagrama" << title << " en " << decremento << endl;
}
void Diagrama::Diagrama::dibujar() {
	cout << "Se dibuja el diagrama " << title << endl;
}
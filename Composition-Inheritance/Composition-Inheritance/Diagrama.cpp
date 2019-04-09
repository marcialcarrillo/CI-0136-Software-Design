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
	cout << "Se seleccion� el diagrama" << title << endl;
}
void Diagrama::Diagrama::cortar() {
	cout << "Se cort� el diagrama " << title << endl;
}
void Diagrama::Diagrama::pegar() {
	cout << "Se peg� el diagrama " << title << endl;
}
void Diagrama::Diagrama::eliminar() {
	cout << "Se elimin� el diagrama" << title << endl;
}
void Diagrama::Diagrama::aumentar(float aumento) {
	cout << "Se aument� el diagrama" << title << " en " << aumento << endl;
}
void Diagrama::Diagrama::reducir(float decremento) {
	cout << "Se redujo el diagrama" << title << " en " << decremento << endl;
}
void Diagrama::Diagrama::dibujar() {
	cout << "Se dibuja el diagrama " << title << endl;
}
#include "Nodo.h"

Nodo::Nodo(string title, int x, int y) : title( title ), x( x ), y( y )
{

}

//Nodo::Nodo(string title, int x, int y)
//{
//	this.title = title;
//	this.x = x;
//	this.y = y;
//}

Nodo::~Nodo(){}

void Nodo::setIcon(string inputPathToIcon)
{
	pathToIcon = inputPathToIcon;
}

string Nodo::getIcon()
{
	return pathToIcon;
}

 void Nodo::seleccionar(){
	 cout << "Se seleccionó el nodo" << title << endl;
 }
 void Nodo::cortar(){
	 cout << "Se cortó el nodo " << title << endl;
 }
 void Nodo::pegar(){
	 cout << "Se pegó el nodo " << title << endl;
 }
 void Nodo::eliminar(){
	 cout << "Se eliminó el nodo" << title << endl;
}
 void Nodo::aumentar(float aumento){
	 cout << "Se aumentó el nodo" << title << " en " << aumento << endl;
}
 void Nodo::reducir(float decremento){
	 cout << "Se redujo el nodo" << title << " en " << decremento << endl;
 }
 void Nodo::dibujar(){
	 cout << "Se dibuja el nodo " << title << endl;
 }

#include "Nodo.h"

//int Nodo::idProvider = -1; //so the first node starts in 0, easier to work with vectors[id] that way
//CHANGED THE IDGENERATOR TO BE GRAPH SPECIFIC

//Nodo::Nodo(string title, int x, int y) :id(++idProvider), title( title ), x( x ), y( y )
//{
//}

Nodo::Nodo(string title, int x, int y) : title(title), x(x), y(y)
{
}

//Nodo::Nodo(string title, int x, int y)
//{
//	this.title = title;
//	this.x = x;
//	this.y = y;
//}

Nodo::~Nodo(){}

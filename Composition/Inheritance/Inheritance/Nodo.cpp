#include "Nodo.h"

Nodo::Nodo(string title, int x, int y)
{
	this->title = title;
	this->x = x;
	this->y = y;
}

Nodo::~Nodo(){}

void Nodo::setIcon(string inputPathToIcon)
{
	pathToIcon = inputPathToIcon;
}

string Nodo::getIcon()
{
	return pathToIcon;
}

Nodo * Nodo::begin() { 
	return this; 
}

Nodo * Nodo::end() { 
	return this + 1; 
}

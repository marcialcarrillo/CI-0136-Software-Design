#pragma once

#include "Nodo.h"
#include <sstream>
#include <iostream>


class Arista{
	protected:
		Nodo* first;
		Nodo* second;
	public:
		Arista() {}
		Arista(Nodo* first, Nodo* second){
			this->first = first;
			this->second = second;
		}
		string pathToIcon;
		void setIcon(string inputPathToIcon)
		{
			pathToIcon = inputPathToIcon;
		}

		string getIcon()
		{
			return pathToIcon;
		}
		virtual ~Arista() {}
		virtual string toString() const = 0;
};
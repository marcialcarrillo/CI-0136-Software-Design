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
		virtual ~Arista() {}
		string toString()
		{
			ostringstream oss;
			oss << "This arrow connects node: " << first->id << " with node: " << second->id;
			return oss.str();
		}
};
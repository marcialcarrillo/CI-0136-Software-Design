#pragma once

#include <string>
#include <iostream>
#include "Elementos.h"
using namespace std;

class Nodo : public Elementos< Nodo >{
	protected:
		int x;
		int y;
	public:
		Nodo(string,int,int);
		~Nodo();
		string pathToIcon;
		void setIcon(string);
		string getIcon();
		Nodo* begin();
		Nodo* end();
};
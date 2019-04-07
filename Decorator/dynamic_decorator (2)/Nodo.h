#pragma once

#include <string>
using namespace std;

class Nodo{
	protected:
		int x;
		int y;
		string title;
	public:
		Nodo(string,int,int);
		virtual ~Nodo();
};
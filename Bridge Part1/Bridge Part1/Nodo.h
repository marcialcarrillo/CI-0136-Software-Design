#pragma once

#include <string>
#include <list>
using namespace std;

class Nodo{
	protected:		
		int id;
		string title;
		int x;
		int y;

		static int idProvider;
	public:
		Nodo(string,int,int);
		virtual ~Nodo();
};
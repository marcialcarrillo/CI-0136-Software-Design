#pragma once

#include <string>
#include <list>
using namespace std;

class Nodo{
	public:		
		int id;
		string title;
		int x;
		int y;

		static int idProvider;

		Nodo(string,int,int);
		virtual ~Nodo();
};
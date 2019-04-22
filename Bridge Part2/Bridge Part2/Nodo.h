#pragma once

#include <string>
#include <list>
using namespace std;

class Nodo{
	public:		
		//static int idProvider; //CHANGED IT TO BE GRAPH SPECIFIC
		int id;
		string title;
		int x;
		int y;	

		Nodo(string,int,int);
		virtual ~Nodo();
};
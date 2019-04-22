#pragma once
#include "AristaComposition.h"
#include <iostream>
using namespace std;


AristaComposition::AristaComposition(Arista& arista) : arista(arista), type{ "composition" }
{
}


AristaComposition::~AristaComposition()
{
	cout << "destroys the association-type arrow" << endl;
	(&arista)->~Arista();
}

string AristaComposition::toString() const
{
	ostringstream oss;
	oss << type << "-type arrow.";
	return oss.str();
}
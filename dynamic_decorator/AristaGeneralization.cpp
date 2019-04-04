#pragma once
#include "AristaGeneralization.h"
#include <iostream>
using namespace std;


AristaGeneralization::AristaGeneralization(Arista& arista) : arista(arista), type("generalization")
{
}


AristaGeneralization::~AristaGeneralization()
{
	cout << "destroys the generalization-type arrow" << endl;
	(&arista)->~Arista();
}

string AristaGeneralization::toString() const
{
	ostringstream oss;
	oss << type << "-type arrow.";
	return oss.str();
}
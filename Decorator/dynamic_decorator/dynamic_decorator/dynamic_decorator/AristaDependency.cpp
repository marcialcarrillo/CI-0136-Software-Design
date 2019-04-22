#pragma once
#include "AristaDependency.h"
#include <iostream>
using namespace std;


AristaDependency::AristaDependency(Arista& arista) : arista(arista), type("dependency")
{
}


AristaDependency::~AristaDependency()
{
	cout << "destroys the dependency-type arrow" << endl;
	(&arista)->~Arista();
}

string AristaDependency::toString() const
{
	ostringstream oss;
	oss << type << "-type arrow.";
	return oss.str();
}
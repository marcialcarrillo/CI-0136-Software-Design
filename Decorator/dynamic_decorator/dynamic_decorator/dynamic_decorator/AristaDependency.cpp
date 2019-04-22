#pragma once
#include "AristaDependency.h"
#include <iostream>
using namespace std;


AristaDependency::AristaDependency(Arista& arista) : arista(arista), type("dependency")
{
}


AristaDependency::~AristaDependency()
{
	(&arista)->~Arista();
}

string AristaDependency::toString() const
{
	ostringstream oss;
	oss << arista.toString() << type << "-type arrow ";
	return oss.str();
}
#pragma once
#include "AristaContainment.h"
#include <iostream>
using namespace std;


AristaContainment::AristaContainment(Arista& arista) : arista(arista), type("containment")
{
}


AristaContainment::~AristaContainment()
{
	cout << "destroys the containment-type arrow" << endl;
	(&arista)->~Arista();
}

string AristaContainment::toString() const
{
	ostringstream oss;
	oss << type << "-type arrow.";
	return oss.str();
}
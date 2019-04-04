#pragma once
#include "AristaRealization.h"
#include <iostream>
using namespace std;


AristaRealization::AristaRealization(Arista& arista) : arista(arista), type("realization")
{
}


AristaRealization::~AristaRealization()
{
	cout << "destroys the realization-type arrow" << endl;
	(&arista)->~Arista();
}

string AristaRealization::toString() const
{
	ostringstream oss;
	oss << "A realization-type arrow.";
	return oss.str();
}
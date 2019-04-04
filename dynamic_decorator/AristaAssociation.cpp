#pragma once
#include "AristaAssociation.h"
#include <iostream>
using namespace std;


AristaAssociation::AristaAssociation(Arista& arista) : arista(arista), type("association")
{
}


AristaAssociation::~AristaAssociation()
{
	cout << "destroys the association-type arrow" << endl;
	(&arista)->~Arista();
}

string AristaAssociation::toString() const
{
	ostringstream oss;
	oss << type << "-type arrow.";
	return oss.str();
}
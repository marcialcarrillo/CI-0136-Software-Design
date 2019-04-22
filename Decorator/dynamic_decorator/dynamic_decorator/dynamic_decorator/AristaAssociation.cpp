#pragma once
#include "AristaAssociation.h"
#include <iostream>
using namespace std;


AristaAssociation::AristaAssociation(Arista& arista) : arista(arista), type{"association"}
{
}


AristaAssociation::~AristaAssociation()
{
	(&arista)->~Arista();
}

string AristaAssociation::toString() const
{
	ostringstream oss;
	oss << arista.toString() << type << "-type arrow ";
	return oss.str();
}
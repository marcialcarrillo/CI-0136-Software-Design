#pragma once
#include "AristaGeneralization.h"
#include <iostream>
using namespace std;


AristaGeneralization::AristaGeneralization(Arista& arista) : arista(arista), type("generalization")
{
}


AristaGeneralization::~AristaGeneralization()
{
	(&arista)->~Arista();
}

string AristaGeneralization::toString() const
{
	ostringstream oss;
	oss << arista.toString() << type << "-type arrow ";
	return oss.str();
}
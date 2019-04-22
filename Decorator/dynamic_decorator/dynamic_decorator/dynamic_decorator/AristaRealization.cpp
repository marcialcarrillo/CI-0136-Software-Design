#pragma once
#include "AristaRealization.h"
#include <iostream>
using namespace std;


AristaRealization::AristaRealization(Arista& arista) : arista(arista), type("realization")
{
}


AristaRealization::~AristaRealization()
{
	(&arista)->~Arista();
}

string AristaRealization::toString() const
{
	ostringstream oss;
	oss << arista.toString() << type << "-type arrow ";
	return oss.str();
}
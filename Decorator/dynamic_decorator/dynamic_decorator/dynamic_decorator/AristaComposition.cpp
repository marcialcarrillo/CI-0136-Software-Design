#pragma once
#include "AristaComposition.h"
#include <iostream>
using namespace std;


AristaComposition::AristaComposition(Arista& arista) : arista(arista), type{ "composition" }
{
}


AristaComposition::~AristaComposition()
{
	(&arista)->~Arista();
}

string AristaComposition::toString() const
{
	ostringstream oss;
	oss << arista.toString() << type << "-type arrow ";
	return oss.str();
}
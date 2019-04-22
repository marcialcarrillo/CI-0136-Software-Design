#pragma once
#include "AristaContainment.h"
#include <iostream>
using namespace std;


AristaContainment::AristaContainment(Arista& arista) : arista(arista), type("containment")
{
}


AristaContainment::~AristaContainment()
{
	(&arista)->~Arista();
}

string AristaContainment::toString() const
{
	ostringstream oss;
	oss << arista.toString() << type << "-type arrow ";
	return oss.str();
}
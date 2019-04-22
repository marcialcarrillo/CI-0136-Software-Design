#pragma once
#include "AristaAggregation.h"
#include <iostream>
using namespace std;


AristaAggregation::AristaAggregation(Arista& arista) : arista(arista), type("aggregation")
{
}


AristaAggregation::~AristaAggregation()
{
	(&arista)->~Arista();
}

string AristaAggregation::toString() const
{
	ostringstream oss;
	oss << arista.toString() << type << "-type arrow ";
	return oss.str();
}

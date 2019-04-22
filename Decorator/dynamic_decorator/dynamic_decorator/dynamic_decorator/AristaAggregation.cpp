#pragma once
#include "AristaAggregation.h"
#include <iostream>
using namespace std;


AristaAggregation::AristaAggregation(Arista& arista) : arista(arista), type("aggregation")
{
}


AristaAggregation::~AristaAggregation()
{
	cout << "destroys the aggregation-type arrow" << endl;
	(&arista)->~Arista();
}

string AristaAggregation::toString() const
{
	ostringstream oss;
	oss << type << "-type arrow.";
	return oss.str();
}

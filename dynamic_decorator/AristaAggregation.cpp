#pragma once
#include "AristaAggregation.h"

AristaAggregation::AristaAggregation(Arista& Arista) : Arista{ Arista }
{
	Type = "Aggregation";
}

AristaAggregation::~AristaAggregation()
{
	cout << "destroys the aggregation arrow" << endl;
	(&Arista)->~Arista();
}

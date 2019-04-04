#pragma once
#include "AristaAggregation.h"
#include <iostream>
using namespace std;


AristaAggregation::AristaAggregation(Arista& arista){
	this->arista = arista;
	type = "Aggregation";
}

AristaAggregation::~AristaAggregation()
{
	cout << "destroys the aggregation arrow" << endl;
	(&arista)->~Arista();
}

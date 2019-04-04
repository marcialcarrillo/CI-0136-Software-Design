#pragma once
#include "Arista.h"
using namespace std;

class AristaAggregation : public Arista
{
public:
	AristaAggregation(Arista& arista);
	~AristaAggregation();

private:
	Arista& arista;
	string Type;
};

#pragma once

#include "Arista.h"
using namespace std;

class AristaAggregation : public Arista
{
public:
	AristaAggregation(Arista& arista);
	~AristaAggregation();
	virtual string toString() const override;

private:
	Arista& arista;
	string type;
};

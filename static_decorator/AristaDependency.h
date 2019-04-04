#pragma once

#include "Arista.h"
using namespace std;

class AristaDependency : public Arista
{
public:
	AristaDependency(Arista& arista);
	~AristaDependency();
	virtual string toString() const override;

private:
	Arista& arista;
	string type;
};
#pragma once
#include "Arista.h"
using namespace std;

class AristaContainment : public Arista
{
public:
	AristaContainment(Arista& arista);
	~AristaContainment();
	virtual string toString() const override;

private:
	Arista& arista;
	string type;
};

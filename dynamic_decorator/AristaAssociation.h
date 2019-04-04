#pragma once
#include "Arista.h"
using namespace std;

class AristaAssociation : public Arista
{
public:
	AristaAssociation(Arista& arista);
	~AristaAssociation();
	virtual string toString() const override;

private:
	Arista& arista;
	string type;
};

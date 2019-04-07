#pragma once

#include "Arista.h"

using namespace std;

class AristaGeneralization : public Arista
{
public:
	AristaGeneralization(Arista& arista);
	~AristaGeneralization();
	virtual string toString() const override;

private:
	Arista& arista;
	string type;
};
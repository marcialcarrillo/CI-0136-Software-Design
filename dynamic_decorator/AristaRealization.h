#pragma once
#include "Arista.h"
using namespace std;

class AristaRealization : public Arista
{
public:
	AristaRealization(Arista& arista);
	~AristaRealization();
	virtual string toString() const override;

private:
	Arista& arista;
	string type;
};
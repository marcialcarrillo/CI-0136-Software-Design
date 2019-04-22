#pragma once


#include "Arista.h"
using namespace std;

class AristaComposition : public Arista
{
public:
	AristaComposition(Arista& arista);
	~AristaComposition();
	virtual string toString() const override;

private:
	Arista& arista;
	string type;
};
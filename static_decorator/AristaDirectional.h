#pragma once

#include "Arista.h"
using namespace std;

class AristaDirectional : public Arista
{
public:
	AristaDirectional(Arista& arista, bool directional);
	~AristaDirectional();
	virtual string toString() const override;

private:
	Arista& arista;
	bool directional;
};
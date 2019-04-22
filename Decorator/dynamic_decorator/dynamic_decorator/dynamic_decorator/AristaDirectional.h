#pragma once

#include "Arista.h"
using namespace std;

class AristaDirectional : public Arista
{
public:
	AristaDirectional(bool directional);
	~AristaDirectional();
	virtual string toString() const override;

private:
	bool directional;
};
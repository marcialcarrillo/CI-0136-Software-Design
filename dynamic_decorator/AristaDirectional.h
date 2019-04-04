#pragma once
#include "Arista.h"
using namespace std;

class AristaDirectional : public Arista
{
public:
	AristaDirectional(Arista& arista, bool directional);
	~AristaDirectional();

private:
	Arista& arista;
	bool directional;
};

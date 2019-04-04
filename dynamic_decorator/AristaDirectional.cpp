#pragma once
#include "AristaAggregation.h"

AristaDirectional::AristaDirectional(Arista& arista, bool directional) : arista{ arista } directional{ directional }
{
}

AristaDirectional::~AristaDirectional()
{
	cout << "destroys the directional arrow" << endl;
	(&Arista)->~Arista();
}
#pragma once

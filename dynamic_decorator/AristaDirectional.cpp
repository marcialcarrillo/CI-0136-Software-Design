#pragma once
#include "AristaAggregation.h"
#include "AristaDirectional.h"

AristaDirectional::AristaDirectional(Arista& arista, bool directional) : arista(arista), directional(directional)
{
}

AristaDirectional::~AristaDirectional()
{
	cout << "destroys the directional arrow" << endl;
	(&arista)->~Arista();
}
string AristaDirectional::toString() const
{
	ostringstream oss;
	if (directional)
	{
		oss << "A directional ";
		return oss.str();
	}
	else
	{
		oss << "A non directional ";
		return oss.str();
	}
	
}


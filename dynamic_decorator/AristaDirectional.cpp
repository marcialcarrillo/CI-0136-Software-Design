#pragma once
#include "AristaDirectional.h"

AristaDirectional::AristaDirectional(Arista& arista, bool directional) : arista(arista), directional(directional)
{
}

AristaDirectional::~AristaDirectional()
{
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


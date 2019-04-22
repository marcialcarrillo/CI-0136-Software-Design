#pragma once
#include "AristaDirectional.h"

AristaDirectional::AristaDirectional( bool directional) :directional(directional)
{
}

AristaDirectional::~AristaDirectional()
{
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


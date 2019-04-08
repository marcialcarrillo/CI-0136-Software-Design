#pragma once

#include "Arista.h"
#include <sstream>
#include <iostream>
using namespace std;

class AristaDirectional : public Arista
{
public:
	AristaDirectional();
	explicit AristaDirectional(const bool directional);

	~AristaDirectional();

	//getters setters
	bool getDirectional();
	void setDirectional(bool directional);

	virtual string toString() const override;

private:
	bool directional;
};
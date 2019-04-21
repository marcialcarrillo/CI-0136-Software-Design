#pragma once
#include "Arista.h"
#include "vector"

using namespace std;

class AdjacencyManager {

public:
	virtual void add_node() = 0;
	virtual void addAdjacency(int, int) = 0;
	virtual bool isAdjacent(int, int) = 0;
	virtual vector<int> getAllAdjacencies(int) = 0;

};

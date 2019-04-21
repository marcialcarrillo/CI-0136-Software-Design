#pragma once
#include "AdjacencyManager.h"
#include <list>
#include <algorithm>

using namespace std;

class ListAdjacency : AdjacencyManager {

private:
	std::vector<list<int>> adjancency_list;

public:
	void add_node() override
	{
		list<int> node_list_to_pushback;
		adjancency_list.push_back(node_list_to_pushback);
	}

	void addAdjacency(int node1, int node2) override
	{
		adjancency_list[node1].push_back(node2);
		adjancency_list[node2].push_back(node1);
	}

	bool isAdjacent(int node1, int node2) override //if return is nullptr means there is no relation between the nodes yet
	{
		auto find_iterator = find(adjancency_list[node1].begin(), adjancency_list[node1].end(), node2); //since the adjacency is placed on both nodes, you only need to search in 1
		if (find_iterator == adjancency_list[node1].end())
		{
			return false;
		}
		else
		{
			return true;
		}
	}

};

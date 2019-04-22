#pragma once
#include "AdjacencyManager.h"

using namespace std;

class MatrixAdjacency : public AdjacencyManager {

private:
	std::vector<vector<bool>> adjancency_matrix;

public:
	void add_node() override
	{
		for (auto& int_vector : adjancency_matrix)
		{
			int_vector.push_back(false);
		}
		int current_matrix_size = adjancency_matrix.size() + 1;
		vector<bool> vector_to_insert(current_matrix_size, false);
		adjancency_matrix.push_back(vector_to_insert);
	}

	void addAdjacency(int node1, int node2) override
	{
		adjancency_matrix[node1][node2] = true;
		adjancency_matrix[node2][node1] = true;
	}

	bool isAdjacent(int node1, int node2) override //if return is nullptr means there is no relation between the nodes yet
	{
		return adjancency_matrix[node1][node2];
	}

	vector<int> getAllAdjacencies(int node) override
	{
		vector<int> result;
		for (int i = 0; i < (int)adjancency_matrix[node].size(); i++)
		{
			if (adjancency_matrix[node][i] == true)
			{
				result.push_back(i);
			}
		}
		return result;
	}


};

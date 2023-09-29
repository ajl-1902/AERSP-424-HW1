#include <iostream>
#include <vector>
#include "weights.h"
using namespace std;

double dot_product(vector<double> v1, vector<double> v2)
{
	double dp = 0;

	for (int i = 0; i < v1.size(); i++)
	{
		dp = dp + v1[i] * v2[i];
	}

	return dp;
}
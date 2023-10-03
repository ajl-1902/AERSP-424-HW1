#include <iostream>
#include <vector>
#include "master.h"
using namespace std;

double dot_product(vector<double> v1, vector<double> v2)
{
	double dp = 0; //dp is used to track a running total, so it is initialized with a value of zero

	for (int i = 0; i < v1.size(); i++)
	{
		dp = dp + v1[i] * v2[i]; //The product of equivalent vector elements is added to the previous value of dp
	}

	return dp;
}
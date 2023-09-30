#include <iostream>
#include <vector>
#include "training.h"

using namespace std;

vector<double> update_weights(vector<double> w, vector<double> dw, double alpha)
{
	for (int i = 0; i < w.size(); i++)
	{
		w[i] = w[i] - alpha * dw[i];
	}

	return w;
}
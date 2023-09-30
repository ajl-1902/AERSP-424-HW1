#include <iostream>
#include <vector>
#include "training.h"

using namespace std;

vector<double> gradient_weights(double y, vector<double> w, vector<double> x, double alpha)
{
	double z = dot_product(w, x);
	double sigma = sigmoid(z);
	double sigma_prime = gradient_sigmoid(sigma);
	double dC = gradient_cost(y, sigma);

	vector<double> dw(w.size());

	for (int i = 0; i < w.size(); i++)
	{
		dw[i] = (dC * sigma_prime) * x[i];
		// Equivalent to dw[i] = (gradient_cost(y, sigmoid(dot_product(w, x)))) * gradient_sigmoid(sigmoid(dot_product(w, x))) * x[i];
	}
	
	return dw;
}
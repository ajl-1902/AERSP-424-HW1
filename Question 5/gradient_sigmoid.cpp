#include <iostream>
#include "sigmoids.h"
using namespace std;

double gradient_sigmoid(double sig)
{
	double grad = sig * (1 - sig);

	return grad;
}
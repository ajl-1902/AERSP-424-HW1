#include <iostream>
#include "master.h"
using namespace std;

double sigmoid(double z)
{
	double sig = 1 / (1 + exp(-z));

	return sig;
}
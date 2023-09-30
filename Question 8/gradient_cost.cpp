#include <iostream>
#include "training.h"
using namespace std;

double gradient_cost(double y, double y_predict)
{
	double dC = 2 * (y_predict - y);

	return dC;
}
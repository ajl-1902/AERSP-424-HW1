#include <iostream>
#include "gradient_cost.h"
using namespace std;

int main()
{
	double y = 1; double y_predict = 0.504421;

	double dC = gradient_cost(y, y_predict);

	cout << "dC = " << dC << endl;
}
#include <iostream>
#include "master.h"
using namespace std;

void Q6()
{
	double y = 1; double y_predict = 0.504421;

	double dC = gradient_cost(y, y_predict);

	cout << "Question 6:" << endl << endl;
	cout << "dC = " << dC << endl;
	cout << endl << endl;
}
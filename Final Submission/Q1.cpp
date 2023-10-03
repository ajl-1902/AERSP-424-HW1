#include <iostream>
#include "master.h"
using namespace std;

//Differential equation setup
double p_dot(double t, double p)
{
	double L_p = 0.5; double L_d = -0.25; int delta;

	if (t > 2)
		delta = 0;
	else delta = 1; //Accounting for variable aileron deflection throughout range

	return (L_p * p + L_d * delta);
}

void Q1()
{
	double t0 = 0; double tf = 5.0; double dt = 0.01; double p0 = 1;

	cout << "Question 1:" << endl << endl;
	roll_rate(t0, tf, dt, p0);
	cout << endl << endl;
}
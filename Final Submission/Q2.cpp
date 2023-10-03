#include <iostream>
#include "master.h"
using namespace std;

//Differential equation setup
double p_dot_2(double t, double p)
{
	double L_p = 0.5; double L_d = -0.25; int K = -3; double delta;

	delta = -K * p; //Delta is now a function of p - will update with every iteration

	return (L_p * p + L_d * delta);
}

void Q2()
{
	double t0 = 0; double tf = 5.0; double dt = 0.01; double p0 = 1;

	cout << "Question 2:" << endl << endl;
	roll_rate_2(t0, tf, dt, p0);
	cout << endl << endl;
}
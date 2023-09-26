#include <iostream>
#include "euler.h"
using namespace std;

//Differential equation setup
double p_dot(double t, double p)
{
	double L_p = 0.5; double L_d = -0.25; int K = -3; double delta;

	delta = -K * p;

	return (L_p * p + L_d * delta);
}

int main()
{
	double t0 = 0; double tf = 5.0; double dt = 0.01; double p0 = 1;

	roll_rate(t0, tf, dt, p0);

	return 0;
}
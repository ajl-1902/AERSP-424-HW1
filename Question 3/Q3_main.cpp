#include <iostream>
#include <vector>
#include "euler_Kt.h"
using namespace std;

//Differential equation setup
double p_dot(double t, double p, double K)
{
	double L_p = 0.5; double L_d = -0.25;

	double delta = -K * p; //Both K and p will change with each iteration

	return (L_p * p + L_d * delta);
}

int main()
{
	double t0 = 0; double tf = 5.0; double dt = 0.01; double p0 = 1; double K0 = -3;

	roll_rate_Kt(t0, tf, dt, p0, K0);

	return 0;
}
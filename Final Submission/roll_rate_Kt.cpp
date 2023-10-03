#include <iostream>
#include "master.h"
using namespace std;

//Forward Euler algorithm
void roll_rate_Kt(double t0, double t, double dt, double p, double K0)
{
	double alpha = -0.5;
	cout << "At t = " << t0 << " s, the roll rate is " << p << " rad/s." << endl;
	while (t0 < t - dt)
	{
		K0 = K0 + alpha * p * p; //Unlike in Q2, the value of K must also be updated after every time step
		p = p + dt * p_dot(t0, p, K0);
		t0 = t0 + dt;
		cout << "At t = " << t0 << " s, the roll rate is " << p << " rad/s." << endl;
	}
}
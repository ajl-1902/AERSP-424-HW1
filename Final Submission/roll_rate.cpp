#include <iostream>
#include "master.h"
using namespace std;

//Forward Euler algorithm
void roll_rate(double t0, double t, double dt, double p)
{
	cout << "At t = " << t0 << " s, the roll rate is " << p << " rad/s." << endl;
	while (t0 < t - dt)
	{
		p = p + dt * p_dot(t0, p);
		t0 = t0 + dt;
		cout << "At t = " << t0 << " s, the roll rate is " << p << " rad/s." << endl;
	}
}
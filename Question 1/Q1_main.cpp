#include <iostream>
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

//Forward Euler algorithm
void roll_rate(double t0, double t, double dt, double p)
{
	while (t0 < t)
	{
		p = p + dt * p_dot(t0, p);
		cout << "At t = " << t0 << " s, the roll rate is " << p << " rad/s." << endl;
		t0 = t0 + dt;
	}
}

int main()
{
	double t0 = 0; double tf = 5.0; double dt = 0.01; double p0 = 1;

	roll_rate(t0, tf, dt, p0);

	return 0;
}
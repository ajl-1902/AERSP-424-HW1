#include <iostream>
#include <vector>
#include "euler.h"
using namespace std;

//Differential equation setup
void p_dot(double t0, double t, double dt, double p)
{
	double L_p = 0.5; double L_d = -0.25; double K = -3; int alpha = 0.5; 
	vector<double> delta; vector<double> dp;

	for (int i = 0; i < (t - t0) / dt; i++)
	{
		delta[i] = -K * p;
		dp[i] = L_p * p + L_d * delta[i];
		K = K + alpha * p * p;
	}
}

int main()
{
	double t0 = 0; double tf = 5.0; double dt = 0.01; double p0 = 1;

	roll_rate(t0, tf, dt, p0);

	return 0;
}
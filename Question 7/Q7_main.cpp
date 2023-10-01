#include <iostream>
#include <vector>
#include "weights.h"
using namespace std;

int main()
{
	double y = 1;
	vector<double> w = { 0.0001, 0.0001, 0.0001 };
	vector<double> x = { 124, 31.89, 20.945 };
	double alpha = 0.001;

	vector<double> dw = gradient_weights(y, w, x, alpha);
	vector<double> w_new = update_weights(w, dw, alpha);

	//For loops required to output vector elements
	cout << "dw = [ ";
	for (int i = 0; i < dw.size(); i++)
	{
		cout << dw[i] << " ";
	}
	cout << " ]" << endl;

	cout << "w = [ ";
	for (int i = 0; i < dw.size(); i++)
	{
		cout << w_new[i] << " ";
	}
	cout << "] after the update." << endl;

	return 0;
}
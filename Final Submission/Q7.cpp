#include <iostream>
#include <vector>
#include "master.h"
using namespace std;

void Q7()
{
	double y = 1;
	vector<double> w = { 0.0001, 0.0001, 0.0001 };
	vector<double> x = { 124, 31.89, 20.945 };
	double alpha = 0.001;

	vector<double> dw = gradient_weights(y, w, x, alpha);
	vector<double> w_new = update_weights(w, dw, alpha);

	//For loops required to output vector elements
	cout << "Question 7:" << endl << endl;
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
	cout << endl << endl;
}
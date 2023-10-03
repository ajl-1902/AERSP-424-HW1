#include <iostream>
#include <vector>
#include "master.h"
using namespace std;

void Q4()
{
	vector<double> w = { 0.0001,0.0001,0.0001 };
	vector<double> x = { 124,31.89,20.945 };

	double z = dot_product(w, x);

	cout << "Question 4:" << endl << endl;
	cout << "The dot product of the two vectors is " << z << "." << endl;
	cout << endl << endl;
}
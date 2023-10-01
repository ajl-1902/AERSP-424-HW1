#include <iostream>
#include <vector>
#include "dot_product.h"
using namespace std;

int main()
{
	vector<double> w = { 0.0001,0.0001,0.0001 };
	vector<double> x = { 124,31.89,20.945 };

	double z = dot_product(w, x);

	cout << "The dot product of the two vectors is: " << z << endl;

	return 0;
}
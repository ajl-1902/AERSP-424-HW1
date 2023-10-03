#include <iostream>
#include "master.h"
using namespace std;

void Q5()
{
	double z = 0.0176835;

	double sigma = sigmoid(z);
	double sigma_prime = gradient_sigmoid(sigma);

	cout << "Question 5:" << endl << endl;
	cout << "The sigmoid of z is " << sigma << " and the gradient is " << sigma_prime << "." << endl;
	cout << endl << endl;
}
#include <iostream>
#include "sigmoids.h"
using namespace std;

int main()
{
	double z = 0.0176835;

	double sigma = sigmoid(z);
	double sigma_prime = gradient_sigmoid(sigma);

	cout << "The sigmoid of z is " << sigma << " and the gradient is " << sigma_prime << endl;
}
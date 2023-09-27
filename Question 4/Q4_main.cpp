#include <iostream>
#include <vector>
using namespace std;

double dot_product(vector<double> v1, vector<double> v2)
{
	double dp = 0;
	for (int i = 0; i < v1.size(); i++)
	{
		dp = dp + v1[i] * v2[i];
	}

	return dp;
}
int main()
{
	vector<double> w = { 0.0001,0.0001,0.0001 };
	vector<double> x = { 124,31.89,20.945 };

	double z = dot_product(w, x);
	cout << "The dot product of the two vectors is: " << z << endl;
}
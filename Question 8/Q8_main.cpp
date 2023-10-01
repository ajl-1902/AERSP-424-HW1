#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "training.h"
using namespace std;

int main()
{
    vector<double> w = { 0.0001, 0.0001, 0.0001 };
	double alpha = 0.001;
    int iter = 1000;

    //Aircraft name and characteristics setup - map used to better maintain association
    map<string, vector<double>> aircraft;
    aircraft.insert({ "M-346 Master",{124,31.89,20.945,1} });
    aircraft.insert({ "AT-402B",{74,51.08,9.170,0} });
    aircraft.insert({ "MB-326",{103,34.67,8.300,1} });
    aircraft.insert({ "AT-502B",{77,52.00,9.400,0} });
    aircraft.insert({ "MB-339",{104,35.63,13.000,1} });
    aircraft.insert({ "AT-602",{92,56.00,12.500,0} });
    aircraft.insert({ "Aero L-159 Alca",{130,31.29,17.637,1} });
    aircraft.insert({ "AT-504",{73,52.00,9.600,0} });

    vector<double> w_trained = train_classifier(aircraft, w, alpha, iter);

   cout << "w = [ ";
    for (int i = 0; i < w_trained.size(); i++)
    {
        cout << w_trained[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "master.h"
using namespace std;

void Q9()
{
    vector<double> w = { 0.135393, -0.287266, -0.00168776 }; //Trained vector w from Q8

    //Aircraft with unknown engine type setup
    map<string, vector<double>> aircraft;
    aircraft.insert({ "SF50 Vision",{87,38.67,6.000} });
    aircraft.insert({ "208 Caravan",{79,52.08,8.000} });
    aircraft.insert({ "Aero L-29 Delfin",{92,33.75,7.804} });
    aircraft.insert({ "AT-802U",{91,59.25,16.000} });

    vector<string> prediction = engine_type_prediction(aircraft, w);
	int cell_count = 0;

    cout << "Question 9:" << endl << endl;
	for (auto map_count = aircraft.begin(); map_count != aircraft.end(); map_count++)
	{
		cout << "Aircraft: " << map_count->first << ", Engine Type: " << prediction[cell_count] << endl;

		cell_count++;
	}
    cout << endl << endl;
}
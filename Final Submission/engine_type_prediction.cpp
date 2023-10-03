#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "master.h"
using namespace std;

vector<string> engine_type_prediction(map<string, vector<double>> aircraft, vector<double> w)
{
	vector<string> prediction(aircraft.size(), " ");
	int cell_count = 0;

	for (auto map_count = aircraft.begin(); map_count != aircraft.end(); map_count++)
	{
		vector<double> x = { map_count->second[0], map_count->second[1], map_count->second[2] };
		double y = sigmoid(dot_product(w, x));

		if (y > 0.5)
			prediction[cell_count] = "Jet";
		else
			prediction[cell_count] = "Turboprop";

		cell_count++;
	}

	return prediction;
}
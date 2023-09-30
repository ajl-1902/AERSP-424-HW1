#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "training.h"

using namespace std;

vector<double> train_classifier(map<string, vector<double>> aircraft, vector<double> w, double alpha, int iter)
{
	for (int i = 0; i < iter; i++)
	{
		for (auto map_count = aircraft.begin(); map_count != aircraft.end(); map_count++)
		{
			vector<double> x = { map_count->second[0], map_count->second[1], map_count->second[2] };
			double y = map_count->second[3];

			vector<double> dw = gradient_weights(y, w, x, alpha);
			w = update_weights(w, dw, alpha);
		}
	}
	return w;
}
#pragma once
#include <vector>
#include <string>
#include <map>

double dot_product(std::vector<double> v1, std::vector<double> v2);
double sigmoid(double z);
std::vector<std::string> engine_type_prediction(std::map<std::string, std::vector<double>> aircraft, std::vector<double> w);
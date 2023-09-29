#pragma once
#include<vector>

double dot_product(std::vector<double> v1, std::vector<double> v2);
double sigmoid(double z);
double gradient_sigmoid(double sig);
double gradient_cost(double y, double y_predict);
std::vector<double> gradient_weights(double y, std::vector<double> w, std::vector<double> x, double alpha);
std::vector<double> update_weights(std::vector<double> w, std::vector<double> dw, double alpha);
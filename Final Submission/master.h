#pragma once
#include <vector>
#include <string>
#include <map>
using namespace std;

// Questions 1-2
void Q1();
void Q2();
double p_dot(double t, double p);
double p_dot_2(double t, double p);
void roll_rate(double t0, double t, double dt, double p);
void roll_rate_2(double t0, double t, double dt, double p);

//Question 3
void Q3();
double p_dot(double t, double p, double K);
void roll_rate_Kt(double t0, double t, double dt, double p, double K0);

//Questions 4-9
void Q4();
void Q5();
void Q6();
void Q7();
void Q8();
void Q9();
double dot_product(vector<double> v1, vector<double> v2);
double sigmoid(double z);
double gradient_sigmoid(double sig);
double gradient_cost(double y, double y_predict);
vector<double> gradient_weights(double y, vector<double> w, vector<double> x, double alpha);
vector<double> update_weights(vector<double> w, vector<double> dw, double alpha);
vector<double> train_classifier(map<string, vector<double>> aircraft, vector<double> w, double alpha, int iter);
vector<string> engine_type_prediction(map<string, vector<double>> aircraft, vector<double> w);
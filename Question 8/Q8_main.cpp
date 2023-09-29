#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{
	vector<double> w = { 0.0001, 0.0001, 0.0001 };
	double alpha = 0.001;
    int iter = 500;

    map<string, vector<double>> aircraft;
    aircraft.insert({ "M-346 Master",{124,31.89,20.945,1} });
    aircraft.insert({ "AT-402B",{74,51.08,9.170,0} });
    aircraft.insert({ "MB-326",{103,34.67,8.300,1} });
    aircraft.insert({ "AT-502B",{77,52.00,9.400,0} });
    aircraft.insert({ "MB-339",{104,35.63,13.000,1} });
    aircraft.insert({ "AT-602",{92,56.00,12.500,0} });
    aircraft.insert({ "Aero L-159 Alca",{130,31.29,17.637,1} });
    aircraft.insert({ "AT-504",{73,52.00,9.600,0} });

    // If I want access each element of a map m
    // Since the key of a map is std::string, I cannot use
    // for(int i = 0; i < ...; i++)
    // This is when we have to use an iterator
    // First, I need to create an iterator for my map m
    // std::map<std::string,std::vector<int>>::iterator map_itr;
    for (auto map_itr = aircraft.begin(); map_itr != aircraft.end(); map_itr++)
    {
        std::cout << "Key: " << map_itr->first << ", ";
        std::cout << "Value: ";
        for (auto i : map_itr->second)
        {
            std::cout << i << ", ";
        }
        std::cout << std::endl;
    }
}
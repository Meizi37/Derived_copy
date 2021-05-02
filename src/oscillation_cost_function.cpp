#include"oscillation_cost_function.h"
#include<iostream>
using namespace std;

OscillationCostFunction::OscillationCostFunction(/* args */)
{
}

OscillationCostFunction::~OscillationCostFunction()
{
}

double OscillationCostFunction::scoreTrajectory()
{
    cout << "oscillation_cost"<<endl;
    int oscillation_cost  = 6;
    return oscillation_cost;
}

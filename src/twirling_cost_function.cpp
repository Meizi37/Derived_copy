#include"twirling_cost_function.h"
#include<iostream>
using namespace std;

TwirlingCostFunction::TwirlingCostFunction(/* args */)
{
}

TwirlingCostFunction::~TwirlingCostFunction()
{
}

double TwirlingCostFunction::scoreTrajectory()
{
    cout << "twirling_cost"<<endl;
    int twirling_cost  = 4;
    return twirling_cost;
}
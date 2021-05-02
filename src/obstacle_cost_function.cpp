#include"obstacle_cost_function.h"
#include<iostream>
using namespace std;

ObstacleCostFunction::ObstacleCostFunction(/* args */)
{
}

ObstacleCostFunction::~ObstacleCostFunction()
{
}

double ObstacleCostFunction::scoreTrajectory()
{
     cout << "obstacle_cost"<<endl;
    int obstacle_cost  = 8;
    return obstacle_cost;
}


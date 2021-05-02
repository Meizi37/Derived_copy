#ifndef TRAJECTORYCOSTFUNCTION_H_
#define TRAJECTORYCOSTFUNCTION_H_
#include<iostream>
using namespace std;

class TrajectoryCostFunction
{
    public:
    TrajectoryCostFunction(){}
     ~TrajectoryCostFunction() {}
    virtual double scoreTrajectory() = 0;
    
};

#endif


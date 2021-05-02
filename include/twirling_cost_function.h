#ifndef TWIRLING_COST_FUNCTION_H
#define TWIRLING_COST_FUNCTION_H
#include"trajectory_cost_function.h"
class TwirlingCostFunction:public TrajectoryCostFunction
{
private:
    /* data */
public:
    TwirlingCostFunction(/* args */);
    ~TwirlingCostFunction();
    double scoreTrajectory();
};


#endif
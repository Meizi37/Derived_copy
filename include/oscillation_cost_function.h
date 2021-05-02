#ifndef OSCILLATION_COST_FUNCTION_H_
#define OSCILLATION_COST_FUNCTION_H_
#include"trajectory_cost_function.h"
class OscillationCostFunction:public TrajectoryCostFunction
{
private:
    /* data */
public:
    OscillationCostFunction(/* args */);
    ~OscillationCostFunction();
    double scoreTrajectory();
};

#endif
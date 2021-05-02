#ifndef OBSTACLE_COST_FUNCTION_H_
#define OBSTACLE_COST_FUNCTION_H_
#include"trajectory_cost_function.h"
class ObstacleCostFunction:public TrajectoryCostFunction
{
private:
    /* data */
public:
    ObstacleCostFunction(/* args */);
    ~ObstacleCostFunction();
    double scoreTrajectory();
};




#endif
#ifndef MAP_GRID_COST_FUNCTION_H_
#define MAP_GRID_COST_FUNCTION_H_

#include"trajectory_cost_function.h"
using namespace std;
class MapGridCostFunction:public TrajectoryCostFunction
{
private:
    /* data */
public:
    MapGridCostFunction(/* args */);
    ~MapGridCostFunction();
    double scoreTrajectory ();
};
#endif


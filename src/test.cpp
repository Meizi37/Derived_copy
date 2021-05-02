#include"map_grid_cost_function.h"
#include"obstacle_cost_function.h"
#include"oscillation_cost_function.h"
#include"twirling_cost_function.h"
#include"trajectory_cost_function.h"
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    MapGridCostFunction path_costs_;
    ObstacleCostFunction obstacle_costs_;
    OscillationCostFunction oscillation_costs_;
    TwirlingCostFunction twirling_costs_;

    std::vector<TrajectoryCostFunction*> critics;
    critics.push_back(&path_costs_);
    critics.push_back(&obstacle_costs_);
    critics.push_back(&oscillation_costs_);
    critics.push_back(&twirling_costs_);

    double sum_cost = 0;
    for ( std::vector<TrajectoryCostFunction*>::iterator score_function = critics.begin(); 
    score_function != critics.end(); ++score_function)
    {
       TrajectoryCostFunction *score_function_p = *score_function;
       double cost = score_function_p->scoreTrajectory();
       sum_cost += cost;
    }
    cout<< "sum_cost---- "<< sum_cost<<endl;
    return 0;
    
}
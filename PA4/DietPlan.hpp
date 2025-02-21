#ifndef DIETPLAN_HPP
#define DIETPLAN_HPP
#include <string>

class DietPlan
{
public:

	int goal_calories;
	std::string name;
	std::string date;

	///constructors

	//default
	DietPlan() 
	{
		goal_calories = 0;
		name = "NULL";
		date = "NULL";
	}

	//paramterized
	DietPlan(int new_goal_cals, std::string new_name, std::string new_date)
	{
		goal_calories = new_goal_cals;
		name = new_name;
		date = new_date;
	}

};


#endif
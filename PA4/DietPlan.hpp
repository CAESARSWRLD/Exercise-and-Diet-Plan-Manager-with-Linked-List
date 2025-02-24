#ifndef DIETPLAN_HPP
#define DIETPLAN_HPP
#include <string>
#include <fstream>
#include <iostream>
#include "ExercisePlan.hpp"

class DietPlan
{
	///insput and output overloaded operators
	friend std::istream& operator>>(std::istream& inStream, DietPlan& plan);//read in
	friend std::ostream& operator<<(std::ostream& inSteam, const DietPlan& plan);//read out

private:

    int goal_calories;
    std::string name;
    std::string date;


public:



	DietPlan() : goal_calories(0), name(""), date("") {}





	int getGoalCalories() const
	{
		return goal_calories;
	}



	void setGoalCalories(int goal)
	{
		goal_calories = goal;
	}

	void setPlanName(const std::string& new_name)
	{
		name = new_name;
	}

	void setDate(const std::string& new_date)
	{
		date = new_date;
	}


};





#endif
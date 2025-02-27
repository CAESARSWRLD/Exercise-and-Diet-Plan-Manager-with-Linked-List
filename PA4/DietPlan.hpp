#ifndef DIETPLAN_HPP
#define DIETPLAN_HPP
#include <string>
#include <fstream>
#include <iostream>
#include "ExercisePlan.hpp"

class DietPlan
{
	

private:

    int goal_calories;
    std::string name;
    std::string date;


public:


	//default constructor
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



	friend std::istream& operator>>(std::istream& is, DietPlan& plan) 
	{
		std::getline(is, plan.name);  
		is >> plan.goal_calories;         
    
		return is;
	}


	friend std::ostream& operator<<(std::ostream& outStream, const DietPlan& plan);

};





#endif
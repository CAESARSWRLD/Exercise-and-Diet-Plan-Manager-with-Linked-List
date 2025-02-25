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



	std::istream& operator>>(std::istream& is, DietPlan& plan) {
    // Assuming DietPlan has fields like name, calories, etc.
    std::getline(is, plan.name);  // Read a string (adjust for your actual class)
    is >> plan.calories;          // Read an integer (adjust for your actual class)
    // Add any other fields you need to read from the input
    return is;
	}

};





#endif
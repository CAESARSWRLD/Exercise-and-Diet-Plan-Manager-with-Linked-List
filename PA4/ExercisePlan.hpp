#ifndef EXERCISEPLAN_HPP
#define EXERCISEPLAN_HPP
#include <string>
#include <iostream>
#include <fstream>
#include "DietPlan.hpp"


class ExercisePlan
{
	///insput and output overloaded operators
	friend std::istream& operator>>(std::istream& inStream, ExercisePlan& plan);//read in
	friend std::ostream& operator<<(std::ostream& inSteam, const ExercisePlan& plan);//read out



private:

	int goal_steps;
	std::string name;
	std::string date;

public:



	ExercisePlan() : goal_steps(0), name(""), date("") {}



	
	//
	int getGoalSteps() const
	{
		return goal_steps;
	}

	void setGoalSteps(int goal)
	{
		goal_steps = goal;
	}

	//
	void setPlanName(const std::string& new_name)
	{
		name = new_name;
	}

	const std::string& getPlanName() const
	{
		return name;
	}

	//
	void setDate(const std::string& new_date)
	{
		date = new_date;
	}

	const std::string& getDate() const
	{
		return date;
	}
	
};






#endif
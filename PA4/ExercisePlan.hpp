#ifndef EXERCISEPLAN_HPP
#define EXERCISEPLAN_HPP
#include <string>

class ExercisePlan
{
public:

	int goal_steps;
	std::string name;
	std::string date;

	//default constructor
	ExercisePlan() : goal_steps(0), name("default exercise plan name"), date("default exercise date") {}



	//constructor with parameters
	ExercisePlan(int new_goal_steps, std::string new_name, std::string new_date)
	{
		goal_steps = new_goal_steps;
		name = new_name;
		date = new_date;
	}



	/////GETTERS AND SETTERS
	int get_goal_steps() const
	{
		return goal_steps;
	}

	void set_goal_steps(int new_goal_steps)
	{
		goal_steps = new_goal_steps;
	}

	std::string get_name() const
	{
		return name;
	}

	void set_name(const std::string& new_name)
	{
		name = new_name;
	}

	std::string get_date()
	{
		return date;
	}

	void set_date(const std::string& new_date)
	{
		date = new_date;
	}

};




#endif